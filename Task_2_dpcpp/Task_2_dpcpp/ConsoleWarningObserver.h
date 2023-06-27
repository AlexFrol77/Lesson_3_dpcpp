#pragma once
#include "Observer.h"

class ConsoleWarningObserver : public Observer {
public:

    virtual void onWarning(const std::string& message);

};
