﻿#pragma once
#include "cvar.hpp"


extern byte s_phys[0x40];
extern byte s_backup[0x1c0];
extern byte s_numVehicleInfos[0x1c];
extern byte s_vehicles[0x1aa0];
extern cvar_t* vehDebugServer;
extern cvar_t* vehTestHorsepower;
extern cvar_t* vehTestMaxMPH;
extern cvar_t* vehTestWeight;
extern cvar_t* vehTextureScrollScale;