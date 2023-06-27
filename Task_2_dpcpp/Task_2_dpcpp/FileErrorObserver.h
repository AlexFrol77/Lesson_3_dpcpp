#pragma once
#include "Observer.h"

class FileErrorObserver : public Observer {
public:

    FileErrorObserver(const std::string& filePath);

    virtual void onError(const std::string& message);

private:
    std::string m_filePath;
};
