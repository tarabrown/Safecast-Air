#ifndef GAS_SENSOR_PARAM_H
#define GAS_SENSOR_PARAM_H
#include <Arduino.h>


enum GasType 
{
    GAS_TYPE_NONE = 0, 
    GAS_TYPE_NO2, 
    GAS_TYPE_NO, 
    GAS_TYPE_O3, 
    GAS_TYPE_CO, 
    GAS_TYPE_H2S, 
    GAS_TYPE_SO2,
    NUM_GAS_TYPE
};

const GasType GasTypeArray[NUM_GAS_TYPE] = { 
    GAS_TYPE_NONE, 
    GAS_TYPE_NO2, 
    GAS_TYPE_NO, 
    GAS_TYPE_O3, 
    GAS_TYPE_CO, 
    GAS_TYPE_H2S, 
    GAS_TYPE_SO2
};

const String GasTypeToGasName[NUM_GAS_TYPE] = {"None", "NO2", "NO", "O3", "CO", "H2S", "SO2"};

struct GasSensorIds
{
    unsigned int wrk;
    unsigned int aux;
    unsigned int ppb;
    unsigned int ppbFlt;
};

struct GasSensorParam
{
    GasType gasType;
    unsigned long serialNumber;
    uint8_t header;
    uint8_t position;
    int workingAinPin;
    int auxillaryAinPin;
    float workingZero;
    float auxillaryZero;
    float sensitivity;
    float ainVRef;
    float ainScaleFact;
    float powerScaleFact;
    float lowPassCutoffFreq;
    unsigned int lowPassOrder;
    bool active;
    GasSensorIds ids;
};

#endif
