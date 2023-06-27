#include <iostream>
#include "LogMessage.h"
#include "Logger.h"
#include "FatalHandler.h"
#include "ErrorHandler.h"
#include "WarningHandler.h"
#include "UnknownHandler.h"

int main() {

    setlocale(LC_ALL, "rus");

    Logger logger;

    logger.addHandler(new FatalHandler());
    logger.addHandler(new ErrorHandler("Error.log"));
    logger.addHandler(new WarningHandler());
    logger.addHandler(new UnknownHandler());

    try {
        LogMessage::Type type("warning");
        LogMessage msg(type, "Предупреждение");
        logger.log(msg);
    }
    catch (const std::exception& ex) {
        std::cout << "Error: " << ex.what() << std::endl;
    }

    for (auto handler : logger.getHandlers()) {
        delete handler;
    }

    return 0;
}