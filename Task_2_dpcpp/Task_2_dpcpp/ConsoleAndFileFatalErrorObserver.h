#pragma once
#include "Observer.h"

class ConsoleAndFileFatalErrorObserver : public Observer {
public:

    ConsoleAndFileFatalErrorObserver(const std::string& filePath);

    virtual void onFatalError(const std::string& message);

private:
    std::string m_filePath;
};
