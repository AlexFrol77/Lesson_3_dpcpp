#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>
#include "LogMessage.h"

class LogHandler {
public:

    virtual bool canHandle(const LogMessage::Type& type) = 0;
    virtual void handle(const std::string& message) = 0;
};
