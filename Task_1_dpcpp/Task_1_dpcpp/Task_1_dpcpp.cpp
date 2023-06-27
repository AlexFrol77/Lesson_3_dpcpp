#include <iostream>
#include <string>
#include "LogCommand.h"
#include "FileLogCommand.h"
#include "ConsoleLogCommand.h"

void execute(LogCommand& cmd, const std::string& message) {
    cmd.print(message);
}


int main() {

    setlocale(LC_ALL, "rus");

    ConsoleLogCommand console;

    execute(console, "Проверочный текст. Вывод в консоль");

    FileLogCommand file("ResultLog.txt");

    execute(file, "Проверочный текст 1. (Запись в файл)");
    execute(file, "Проверочный текст 2. (Запись в файл)");

    return 0;
};