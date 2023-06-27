#include "WarningHandler.h"

bool WarningHandler::canHandle(const LogMessage::Type& type) {
    return type.name() == "Warning";
}

void WarningHandler::handle(const std::string& message) {
    std::cout << "Warning: " << message << std::endl;
}
