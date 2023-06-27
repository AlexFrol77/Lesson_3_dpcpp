#include "LogMessage.h"

LogMessage::LogMessage(const Type& type, const std::string& message) : mType(type), mMessage(message) {}
const LogMessage::Type& LogMessage::type() const { 
    return mType; 
}
const std::string& LogMessage::message() const { 
    return mMessage; 
}
