#include "ConsoleWarningObserver.h"

void ConsoleWarningObserver::onWarning(const std::string& message) {
        std::cout << "Warning: " << message << std::endl;
}