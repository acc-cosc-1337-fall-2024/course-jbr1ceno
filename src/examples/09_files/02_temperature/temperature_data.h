//temperature_data.h
#include<fstream>
#include<iostream>
#include<string>
#include<vector>
#include "temperature.h"

#ifndef TEMPERATURE_DATA_H
#define TEMPERATURE_DATA_H

class TemperatureData
{
public:
    void save_temps(const std::vector<Temperature>& temps); //vector of temps and write them on a file
    std::vector<Temperature> get_temps(); //get_temps, read a file, recreate the vector, and send it back to application so it can work with temp list

private:
    std::string file_name{"temps.dat"}; //name of the file and read from
};

#endif