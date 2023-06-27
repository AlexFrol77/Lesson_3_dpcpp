#include "Observable.h"

void Observable::addObserver(Observer* observer) {
        m_observers.push_back(observer);
}

void Observable::removeObserver(Observer* observer) {
    std::vector<Observer*>::iterator it;
    for (it = m_observers.begin(); it != m_observers.end(); ++it) {
        if (*it == observer) {
            m_observers.erase(it);
            break;
        }
    }
}

void Observable::warning(const std::string& message) const {
    std::vector<Observer*>::const_iterator it;
    for (it = m_observers.begin(); it != m_observers.end(); ++it) {
        (*it)->onWarning(message);
    }
}

void Observable::error(const std::string& message) const {
    std::vector<Observer*>::const_iterator it;
    for (it = m_observers.begin(); it != m_observers.end(); ++it) {
        (*it)->onError(message);
    }
}

void Observable::fatalError(const std::string& message) const {
    std::vector<Observer*>::const_iterator it;
    for (it = m_observers.begin(); it != m_observers.end(); ++it) {
        (*it)->onFatalError(message);
    }
}