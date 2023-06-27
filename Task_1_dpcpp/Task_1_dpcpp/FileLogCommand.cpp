#include "FileLogCommand.h"

FileLogCommand::FileLogCommand(const std::string& filePath) : m_filePath(filePath) {}

void FileLogCommand::print(const std::string& message) {
    std::ofstream file(m_filePath, std::ios_base::app);
    file << message << std::endl;
    file.close();
}