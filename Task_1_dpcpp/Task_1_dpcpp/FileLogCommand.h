#pragma once
#include "LogCommand.h"
#include <string>

class FileLogCommand : public LogCommand {
public:

    FileLogCommand(const std::string& filePath);

    void print(const std::string& message) override;

private:
    std::string m_filePath;
};
