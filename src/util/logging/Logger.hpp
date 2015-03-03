/*
 * Logger.hpp
 *
 *  Created on: Feb 26, 2015
 *      Author: Zingten
 */

#ifndef UTIL_LOGGING_LOGGER_HPP_
#define UTIL_LOGGING_LOGGER_HPP_

#include <string>

enum LogLevel
{
	SEVERE, WARNING, INFO, DEBUG
};

class Logger
{
public:
	Logger();
	virtual ~Logger();

	/*!Log a message to this logger's log.
	 * @param level Level of message.
	 * @param message The message.
	 */
	virtual void log(LogLevel level, std::string message);

    /*! Error callback for GLFW.
     * @param error Error code.
     * @param description Description of error.
     */
	static void glfw_error_callback(int error, const char* description);
};



#endif /* UTIL_LOGGING_LOGGER_HPP_ */
