#pragma once
#include "LogCommand.h"

class ConsoleLogCommand : public LogCommand {
public:

    void print(const std::string& message) override;
};