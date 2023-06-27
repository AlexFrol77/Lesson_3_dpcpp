#include "FatalHandler.h"

bool FatalHandler::canHandle(const LogMessage::Type& type) {
    return type.name() == "Fatal";
}

void FatalHandler::handle(const std::string& message) {
    throw std::runtime_error(message);
}