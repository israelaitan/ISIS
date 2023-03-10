/**
 *      @file       supervisor.h
 *      @brief      Supervisor Controller interface.
 */

#ifndef SUPERVISOR_H_
#define SUPERVISOR_H_

#include <stdint.h>

/** The I2C Address of the IOBC Supervisor. */
#define SUPERVISOR_DEFAULT_I2C_ADDRESS			0x14

/** Index to be passed to functions to communicate with the local supervisor over SPI */
#define SUPERVISOR_SPI_INDEX					255

/** Length of emergency reset. */
#define LENGTH_EMERGENCY_RESET                                         10
/** Length of reset the IOBC PCU. */
#define LENGTH_RESET                                                   3
/** Length of set output pins. */
#define LENGTH_SET_OUTPUT                                              3
/** Length of reset the IOBC PCU. */
#define LENGTH_POWER_CYCLE_IOBC                                        3
/** Length of the telemetry housekeeping request. */
#define LENGTH_TELEMETRY_HOUSEKEEPING                                  37
/** Length of the getting Version. */
#define LENGTH_TELEMETRY_GET_VERSION                                   34
/** Reply length of the telemetry housekeeping sample. */
#define LENGTH_TELEMETRY_SAMPLE_HOUSEKEEPING                           3
/** Length of the sampling the Version. */
#define LENGTH_TELEMETRY_SAMPLE_VERSION                                3
/** Length of the dummy. */
#define LENGTH_TELEMETRY_DUMMY                                         3

/** Length of the compile information. */
#define LENGTH_GENERIC_REPLY                                           3

/**
 * Generic reply from the Supervisor Controller.
 */
typedef union __attribute__ ((__packed__)) _supervisor_generic_reply_t
{
	uint8_t rawValue[LENGTH_GENERIC_REPLY]; //!< Raw value of the version configuration bytes..
	struct __attribute__ ((__packed__)) _fields_supervisor_generic_reply_t
	{
		uint8_t dummy; //!< The first as always is a dummy byte.
		uint8_t spiCommandStatus; //!< The second is a SPI Command Status.
		uint8_t crc8;  //!< CRC byte.
	} fields;
} supervisor_generic_reply_t;

/** Length of the compile information. */
#define LENGTH_COMPILE_INFORMATION                                      19

/*
            _________________________________
           |                                 |
       000 |             DUMMY               |
           |_________________________________|
           |                                 |
       001 |        SPI COMMAND STATUS       |
           |_________________________________|
           |                                 |
       002 |        INDEX OF SUBSYSTEM       |
           |_________________________________|
           |                                 |
       003 |                                 |
       ... |           SW VERSION            |
       005 |_________________________________|
           |                                 |
       006 |                                 |
       ... |          HEAD REVISION          |
       009 |                                 |
           |_________________________________|
           |                                 |
       010 |          SERIAL NUMBER          |
           |_________________________________|
           |                                 |
           |                                 |
           |                                 |
       012 |                                 |
       ... |       COMPILE INFORMATION       |
       030 |                                 |
           |                                 |
           |                                 |
           |_________________________________|
           |                                 |
       031 |           CLOCK SPEED           |
           |_________________________________|
           |                                 |
       032 |       TESTING / PRODUCTION      |
           |_________________________________|
           |                                 |
       033 |              CRC8               |
           |_________________________________|

 */

/**
 * Supervisor version and configuration bytes.
 */
typedef union __attribute__ ((__packed__)) _supervisor_version_configuration_t
{
	uint8_t rawValue[LENGTH_TELEMETRY_GET_VERSION]; //!< Raw value of the version configuration bytes..
	struct __attribute__ ((__packed__)) _fields_supervisor_version_configuration_t
	{
		uint8_t dummy;             //!< The first as always is a dummy byte.
		uint8_t spiCommandStatus;  //!< The second is a SPI Command Status.
		uint8_t indexOfSubsystem;  //!< Index of ISIS Subsystem.
		uint8_t majorVersion;      //!< Software major version.
		uint8_t minorVersion;      //!< Software minor version.
		uint8_t patchVersion;      //!< Software patch version.
		uint32_t gitHeadVersion;   //!< Software git head version.
		uint16_t serialNumber;     //!< Serial number.
		int8_t compileInformation[LENGTH_COMPILE_INFORMATION]; //!< Compile information (time and date).
		uint8_t clockSpeed;        //!< Clock speed of the Supervisor Controller (in MHz).
		int8_t codeType;           //!< Code type. Whether flight or test.
		uint8_t crc8;              //!< CRC byte.
	} fields;
} supervisor_version_configuration_t;

/*
            ____________________________________________
           |                                            |
       000 |                   DUMMY                    |
           |____________________________________________|
           |                                            |
       001 |             SPI COMMAND STATUS             |
           |____________________________________________|
           |                                            |
       002 |               ENABLE STATUS                |
           |____________________________________________|
           |                                            |
       003 |                                            |
       ... |        SUPERVISOR CONTROLLER UPTIME        |
       006 |                                            |
           |____________________________________________|
           |                                            |
       007 |                                            |
       ... |                 IOBC UPTIME                |
       010 |                                            |
           |____________________________________________|
           |                                            |
       011 |                                            |
       ... |               IOBC RESET COUNT             |
       014 |                                            |
           |____________________________________________|
           |                                            |
           |                                            |
       015 |                                            |
       ... |                  ADC DATA                  |
       034 |                                            |
           |                                            |
           |                                            |
           |____________________________________________|
           |                                            |
       035 |               ADC UPDATE FLAG              |
           |____________________________________________|
           |                                            |
       036 |                   CRC8                     |
           |____________________________________________|

 */

/**
 * Enable status.
 */
typedef union __attribute__ ((__packed__)) _supervisor_enable_status_t
{
	uint8_t rawValue; //!< Raw value of the version configuration bytes.
	struct __attribute__ ((__packed__)) _fields_supervisor_enable_status_t
	{
		uint8_t powerObc : 1,  	//!< /** OBC Power. */
		powerRtc : 1,  			//!< Output power to the RTC.
		isInSupervisorMode : 1, //!< Supervisor mode.
		:1,
		:1,
		busyRtc : 1,  			//!< RTC is busy.
		poweroffRtc : 1, 		//!< RTC is doing power off.
		:1;
	} fields;
} supervisor_enable_status_t;

/**
 * Power output
 */
typedef union __attribute__ ((__packed__)) _supervisor_powerout_t
{
	uint8_t rawValue; //!< Raw value of the version configuration bytes.
	struct __attribute__ ((__packed__)) _fields_supervisor_output_t
	{
		uint8_t powerObc : 1,  	//!< /** OBC Power. */
		powerRtc : 1,  			//!< Output power to the RTC.
		isInSupervisorMode : 1, //!< Supervisor mode.
		:5;
	} fields;
} supervisor_powerout_t;

/** The number of channels used in the Supervisor Controller. */
#define SUPERVISOR_NUMBER_OF_ADC_CHANNELS           10

/**
 *      @brief		Indices of available analog channels
 */
typedef enum _adc_channels_t
{
        _temperature_measurement = 0, //!< <code>Engineering value [deg. C] = -0.29802 * raw + 191.098</code>
        _voltage_measurement_3v3in = 1, //!< <code>Engineering value [V] = 0.0048875855 * raw</code>
        _voltage_measurement_3v3 = 2, //!< <code>Engineering value [V] = 0.0048875855 * raw</code>
        _voltage_reference_2v5 = 3, //!< <code>Engineering value [V] = 0.0024437928 * raw</code>
        _voltage_measurement_1v8 = 4, //!< <code>Engineering value [V] = 0.0024437928 * raw</code>
        _voltage_measurement_1v0 = 5, //!< <code>Engineering value [V] = 0.0024437928 * raw</code>
        _current_measurement_3v3 = 6, //!< <code>Engineering value [mA] = 0.3470186 * raw</code>
        _current_measurement_1v8 = 7, //!< <code>Engineering value [mA] = 0.1221896 * raw</code>
        _current_measurement_1v0 = 8, //!< <code>Engineering value [mA] = 0.1637341 * raw</code>
        _voltage_measurement_rtc = 9 //!< <code>Engineering value [V] = 0.0048875855 * raw</code>
} adc_channels_t;

/**
 * Supervisor housekeeping.
 */
typedef union __attribute__ ((__packed__)) _supervisor_housekeeping_t
{
	uint8_t rawValue[LENGTH_TELEMETRY_HOUSEKEEPING];  //!< Raw value of the version configuration bytes..
	struct __attribute__ ((__packed__)) _fields_supervisor_housekeeping_t
	{
		uint8_t dummy;                          //!< The first as always is a dummy byte.
		uint8_t spiCommandStatus;				//!< The second is a SPI Command Status.
		supervisor_enable_status_t enableStatus;   	//!< Enable status of the Supervisor Controller.
		uint32_t supervisorUptime;				//!< Supervisor Controller Uptime.
		uint32_t iobcUptime;					//!< IOBC Uptime as measured by Supervisor Controller.
		uint32_t iobcResetCount;				//!< IOBC Reset Count.
		uint16_t adcData[SUPERVISOR_NUMBER_OF_ADC_CHANNELS];  //!< ADC Data.
		uint8_t adcUpdateFlag;					//!< ADC Update Flag.
		uint8_t crc8;							//!< CRC byte.
	} fields;
} supervisor_housekeeping_t;

/**
 *      @brief      Initialize the communication interface to a supervisor. Supervisors are microcontrollers present
 *      on the OBC that serve several functions such as: watchdog to the CPU, houskeeping data collection and power
 *      control.
 *
 *      If the OBC is in a master configuration, the communication to its own Supervisor is done over SPI within the
 *      same board. To communicate to supervisors of other OBC's in the spacecraft (which are in slave configuration),
 *      I2C is used.
 *
 *      @param[in]  address array of Supervisor Controller Address.
 *                  The index within this array is used in subsequent functions to select which supervisor to talk to.
 *                  To communicate with a supervisor over SPI, an index of SUPERVISOR_SPI_INDEX should be used for subsequent functions.
 *      @param[in]  count number of attached supervisors using I2C in the system to be initialized. If the count is 0,
 *      only the supervisor over SPI will be initialized.
 *      @return		Error code as specified in errors.h
 *
 *      @note This function will always instantiate a supervisor over SPI irrespective of the input parameters. If there is no supervisor connected over SPI, this initialization is harmless.
 *      @note This function will automatically initialize the SPI bus if this hasn't already been done
 */
int Supervisor_start(uint8_t* address, uint8_t count);
/**
 *      @brief      Performs a software reset of the microcontroller directly without shutting down its components.
 *      As this command is considered unsafe for the hardware and the software of the IOBC-S, use supervisor_reset() instead.
 *      @param[out] reply Generic reply read back from the Supervisor Controller.
 *      @param[in]  index Index of the Supervisor Controller. Values >=0 are for I2C communication.
 *                  An index value of 255 is for communicating to the supervisor on the same board over SPI.
 *      @return		Error code as specified in errors.h
 */
int Supervisor_emergencyReset(supervisor_generic_reply_t* reply, uint8_t index);

/**
 *      @brief      Assert a reset to the IOBC-S and making sure that the conditions prior to reset operations are met.
 *      @param[out] reply Generic reply read back from the Supervisor Controller.
 *      @param[in]  index Index of the Supervisor Controller. Values >=0 are for I2C communication.
 *                  An index value of 255 is for communicating to the supervisor on the same board over SPI.
 *		@return		Error code as specified in errors.h
 */
int Supervisor_reset(supervisor_generic_reply_t* reply, uint8_t index);

/**
 *      @brief      Write Supervisor Controller Output data. This is generally used to for power control of devices such as the RTC and CPU.
 *      @param[in]  output Output value to set.
 *      @param[out] reply Generic reply read back from the Supervisor Controller.
 *      @param[in]  index Index of the Supervisor Controller. Values >=0 are for I2C communication.
 *                 An index value of 255 is for communicating to the supervisor on the same board over SPI.
 *		@return		Error code as specified in errors.h
 */
int Supervisor_writeOutput(supervisor_powerout_t output, supervisor_generic_reply_t* reply, uint8_t index);

/**
 *      @brief      Let the IOBC be power-cycled for around 4-5 seconds.
 *                  Supervisor Controller power is not affected by this command.
 *      @param[out] reply Generic reply read back from the Supervisor Controller.
 *      @param[in]  index Index of the Supervisor Controller. Values >=0 are for I2C communication.
 *                  An index value of 255 is for communicating to the supervisor on the same board over SPI.
 *		@return		Error code as specified in errors.h
 */
int Supervisor_powerCycleIobc(supervisor_generic_reply_t* reply, uint8_t index);

/**
 *      @brief      Getting Version from Supervisor Controller.
 *      @param[out] versionReply Version and configuration read back from the Supervisor Controller.
 *      @param[in]  index Index of the Supervisor Controller. Values >=0 are for I2C communication.
 *                  An index value of 255 is for communicating to the supervisor on the same board over SPI.
 *		@return		Error code as specified in errors.h
 */
int Supervisor_getVersion(supervisor_version_configuration_t* versionReply, uint8_t index);

/**
 *      @brief      Getting Housekeeping from Supervisor Controller.
 *      @param[out] housekeepingReply Housekeeping read back from the Supervisor Controller.
 *      @param[in]  index Index of the Supervisor Controller. Values >=0 are for I2C communication.
 *                  An index value of 255 is for communicating to the supervisor on the same board over SPI.
 *		@return		Error code as specified in errors.h
 */
int Supervisor_getHousekeeping(supervisor_housekeeping_t* housekeepingReply, uint8_t index);

/**
 *      @brief      Converts raw ADC values into engineering values.
 *      @note		Conversion formulas have been specified in the documentation of \ref _adc_channels_t
 *      @param[in]  housekeepingReply Housekeeping read back from the Supervisor Controller.
 *      @param[out] adcValue Output value of the ADC.
 *      @return		Error code as specified in errors.h
 */
int Supervisor_calculateAdcValues(supervisor_housekeeping_t* housekeepingReply, int16_t* adcValue);

#endif
