#include "UnknownHandler.h"

bool UnknownHandler::canHandle(const LogMessage::Type& type) {
    return true;
}

void UnknownHandler::handle(const std::string& message) {
    throw std::runtime_error("Неизвестное сообщение : " + message);
}