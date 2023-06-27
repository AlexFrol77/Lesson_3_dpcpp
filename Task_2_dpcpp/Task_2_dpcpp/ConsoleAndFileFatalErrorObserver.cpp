#include "ConsoleAndFileFatalErrorObserver.h"

ConsoleAndFileFatalErrorObserver::ConsoleAndFileFatalErrorObserver(const std::string& filePath) : m_filePath(filePath) {}

void ConsoleAndFileFatalErrorObserver::onFatalError(const std::string& message) {
        std::cout << "Fatal error: " << message << std::endl;
        std::ofstream file(m_filePath, std::ios_base::app);
        file << "Fatal error: " << message << std::endl;
}