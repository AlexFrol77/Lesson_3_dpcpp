#pragma once
#include <string>

class LogMessage {
public:
    class Type {
    public:

        Type(const std::string& name);
        const std::string& name() const;

    private:
        std::string mName;
    };

    LogMessage(const Type& type, const std::string& message);

    const Type& type() const;
    const std::string& message() const;

private:
    Type mType;
    std::string mMessage;
};
