#include "Headers.h"
void main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите число: ";
	long long number = 0;
	try {
		
		cin >> number;

		if (cin.fail() || number < 0) {
			throw invalid_argument("Неверный ввод!");
		}

		steady_clock::time_point begin = steady_clock::now();

		cout << "Обработка циклом: " << cycleProcessing(number);

		steady_clock::time_point end = steady_clock::now();
		cout << ". Время обработки: " << duration_cast<minutes>(end - begin).count() << " мин. " <<
			duration_cast<seconds>(end - begin).count() << " сек. " << duration_cast<microseconds>(end - begin).count() <<
			" мс. ";

		Sleep(200);

		begin = steady_clock::now();

		cout << endl << "Обработка рекурсией: " << cycleProcessing(number);

		end = steady_clock::now();
		cout << ". Время обработки: " << duration_cast<minutes>(end - begin).count() << " мин. " <<
			duration_cast<seconds>(end - begin).count() << " сек. " << duration_cast<microseconds>(end - begin).count() <<
			" мс. ";
		Sleep(1000);
		cout << endl << "Удачи!";
	}
	catch (const invalid_argument& e) {
		cout << "Ошибка: " << e.what();
		return;
	};
}