#include "FileErrorObserver.h"

FileErrorObserver::FileErrorObserver(const std::string& filePath) : m_filePath(filePath) {}

void FileErrorObserver::onError(const std::string& message) {
        std::ofstream file(m_filePath, std::ios_base::app);
        file << "Error: " << message << std::endl;
}
