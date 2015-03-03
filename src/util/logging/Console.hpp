#ifndef UTIL_LOGGING_CONSOLE_HPP
#define UTIL_LOGGING_CONSOLE_HPP

#include "util/logging/Logger.hpp"

class Console : public Logger
{
private:
public:
    /** Default constructor */
    Console();
    /** Default destructor */
    virtual ~Console();
};

#endif // UTIL_LOGGING_CONSOLE_HPP
