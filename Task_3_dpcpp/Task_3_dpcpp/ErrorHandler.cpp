#include "ErrorHandler.h"

ErrorHandler::ErrorHandler(const std::string& filePath) : mFilePath(filePath) {}

bool ErrorHandler::canHandle(const LogMessage::Type& type) {
    return type.name() == "Error";
}

void ErrorHandler::handle(const std::string& message) {
    std::ofstream file(mFilePath, std::ios::app);
    if (file.is_open()) {
        file << message << std::endl;
        file.close();
    }
    else {
        std::cout << "Не удалось открыть файл: " << mFilePath << std::endl;
    }
}
