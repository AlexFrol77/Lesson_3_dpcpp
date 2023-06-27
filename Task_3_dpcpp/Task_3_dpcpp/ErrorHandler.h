#pragma once
#include "LogHandler.h"

class ErrorHandler : public LogHandler {
public:

    ErrorHandler(const std::string& filePath);

    bool canHandle(const LogMessage::Type& type) override;

    void handle(const std::string& message) override;

private:
    std::string mFilePath;
};
