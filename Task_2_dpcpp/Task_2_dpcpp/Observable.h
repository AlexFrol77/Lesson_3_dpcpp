#pragma once
#include "Observer.h"
#include <vector>
#include <string>

class Observable {
public:

    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    void warning(const std::string& message) const;
    void error(const std::string& message) const;
    void fatalError(const std::string& message) const;

private:
    std::vector<Observer*> m_observers;
};