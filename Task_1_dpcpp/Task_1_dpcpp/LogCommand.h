#pragma once
#include <iostream>
#include <fstream>
#include <string>

class LogCommand {
public:

    LogCommand() = default;

    virtual void print(const std::string& message) = 0;

    virtual ~LogCommand() = default;
    
};