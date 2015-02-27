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
	std::cout << "[" << level << "] " << message;
}
