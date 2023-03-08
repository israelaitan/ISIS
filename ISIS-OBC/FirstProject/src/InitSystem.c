#include <freertos/FreeRTOS.h>
#include <freertos/semphr.h>
#include <freertos/task.h>
#include <hal/Drivers/I2C.h>
#include <hal/Drivers/SPI.h>
#include <hal/Timing/Time.h>
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

Boolean isFirstActivation()
{
	return 0;
}


void WriteDefaultValuesToFRAM()
{
}

int StartFRAM()
{
	return 0;
}

int StartI2C()
{
	return 0;
}

int StartSPI()
{
	return 0;
}

int StartTIME()
{
	return 0;
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

