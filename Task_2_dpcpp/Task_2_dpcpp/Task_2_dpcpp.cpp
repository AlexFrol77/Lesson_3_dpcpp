#include "Observable.h"
#include "ConsoleWarningObserver.h"
#include "FileErrorObserver.h"
#include "ConsoleAndFileFatalErrorObserver.h"


int main() {

	setlocale(LC_ALL, "rus");

	Observable observable;


	ConsoleWarningObserver consoleWarningObserver;
	FileErrorObserver fileErrorObserver("Errors.txt");
	ConsoleAndFileFatalErrorObserver consoleAndFileFatalErrorObserver("Errors.txt");


	observable.addObserver(&consoleWarningObserver);
	observable.addObserver(&fileErrorObserver);
	observable.addObserver(&consoleAndFileFatalErrorObserver);


	observable.warning("Предупреждение!!!");
	observable.error("Упс, что-то пошло не так!");
	observable.fatalError("Непоправимая ошибка!!!");
	observable.warning("Обратите внимание!!!");

	return 0;
}