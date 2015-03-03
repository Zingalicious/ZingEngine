/*
 * Logger.cpp
 *
 *  Created on: Feb 26, 2015
 *      Author: Zingten
 */

#include "util/logging/Logger.hpp"
#include <iostream>

Logger::Logger()
{

}

Logger::~Logger()
{

}

void Logger::log(LogLevel level, std::string message)
{
    std::string levelDescription = "NULL";
    switch(level)
    {
    case SEVERE:
        levelDescription = "SEVERE";
        break;
    case WARNING:
        levelDescription = "WARNING";
        break;
    case INFO:
        levelDescription = "INFO";
        break;
    case DEBUG:
        levelDescription = "DEBUG";
        break;
    }
	std::cout << "[" << levelDescription << "] " << message;
}
