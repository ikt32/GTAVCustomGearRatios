#pragma once
#include <cstdint>

const char* const DISPLAY_VERSION = "v1.0.2";
const char* const MOD_DIRECTORY = "\\CustomGearRatios";

extern uint8_t g_numGears;

void ScriptMain();
void parseConfigs();
