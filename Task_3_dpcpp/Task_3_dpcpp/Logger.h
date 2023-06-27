#pragma once
#include "LogHandler.h"

class Logger {
public:

    void log(const LogMessage& message) const;

    void addHandler(LogHandler* handler);

    const std::vector<LogHandler*>& getHandlers() const;

private:
    std::vector<LogHandler*> mHandlers;
};