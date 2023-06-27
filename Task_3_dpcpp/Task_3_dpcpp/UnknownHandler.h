#pragma once
#include "LogHandler.h"

class UnknownHandler : public LogHandler {
public:

    bool canHandle(const LogMessage::Type& type) override;

    void handle(const std::string& message) override;
};