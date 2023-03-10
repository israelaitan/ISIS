#include <freertos/FreeRTOS.h>
#include <freertos/semphr.h>
#include <freertos/task.h>
#include <hal/Drivers/I2C.h>
#include <hal/Drivers/SPI.h>
#include <hal/Timing/Time.h>
#include <hal/Storage/FRAM.h>
#include <at91/utility/exithandler.h>
#include <string.h>
//#include "GlobalStandards.h"
//#include "SubSystemModules/PowerManagment/EPS.h"
//#include "SubSystemModules/Communication/TRXVU.h"
//#include "SubSystemModules/Communication/SubsystemCommands/TRXVU_Commands.h"
//#include "SubSystemModules/Maintenance/Maintenance.h"
#include "InitSystem.h"
#include "TLM_management.h"
//#include <satellite-subsystems/IsisAntS.h>
//#include <SubSystemModules/Housekepping/TelemetryCollector.h>

#ifdef GOMEPS
	#include <satellite-subsystems/GomEPS.h>
#endif
#ifdef ISISEPS
	#include <satellite-subsystems/isis_eps_driver.h>
#endif
#define I2c_SPEED_Hz 100000
#define I2c_Timeout 10
#define I2c_TimeoutTest portMAX_DELAY

#define TIME_ADDRESS_FRAM = 0x4;

Boolean isFirstActivation()
{
	return 0;
}


void WriteDefaultValuesToFRAM()
{
}

int StartFRAM()
{
	return FRAM_start();
}

int StartI2C()
{
	return I2C_start(I2c_SPEED_Hz, I2c_Timeout);
}

int StartSPI()
{
	return SPI_start(bus1_spi, slave1_spi);
}

int StartTIME()
{
	Time time = { 0, 0, 0, 1, 1, 1, 0, 0 };
	int ret = Time_start(&time);
	//TODO:check errors
	if (isFirstActivation()){
		unsigned int epoch_time_from_fram;
		ret = FRAM_read(&epoch_time_from_fram, TIME_ADDRESS_FRAM, sizeof(unsigned int));
		if (!ret)
			ret = Time_setUnixEpoch(epoch_time_from_fram);
	}
	return ret;
}

int EPS_Init()
{
	return 0;
}

void TelemetryCollectorLogic (){
	//this is a dummy function, exists in a different part of the code
}
//TODO: before sent to flight: 1. set FIRST_ACTIVATION flag to TRUE 2. set SECONDS_SINCE_DEPLOY to 0
int DeploySystem()
{
	return 0;
}


int InitSubsystems()
{
	StartI2C();

	StartSPI();

	StartFRAM();

	StartTIME();

	EPS_Init();

	InitTrxvu();

	DeploySystem();

	vTaskDelay(1000); // rest a little before we start working

	return 0;
}

