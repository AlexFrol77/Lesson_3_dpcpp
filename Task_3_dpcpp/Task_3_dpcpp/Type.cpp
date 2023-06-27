#include "LogMessage.h"

LogMessage::Type::Type(const std::string& name) : mName(name) {}

const std::string& LogMessage::Type::name() const { 
        return mName; 
}