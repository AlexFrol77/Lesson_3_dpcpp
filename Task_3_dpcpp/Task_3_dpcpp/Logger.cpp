#include "Logger.h"

void Logger::log(const LogMessage& message) const {
    for (const auto& handler : mHandlers) {
        if (handler->canHandle(message.type())) {
            handler->handle(message.message());
            return;
        }
    }
    throw std::runtime_error("Обработчик не найден: " + message.message());
}

void Logger::addHandler(LogHandler* handler) {
    mHandlers.push_back(handler);
}

const std::vector<LogHandler*>& Logger::getHandlers() const {
    return mHandlers;
}