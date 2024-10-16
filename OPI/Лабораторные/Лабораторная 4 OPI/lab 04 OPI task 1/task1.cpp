#include <iostream>
using namespace std;
void main() {
	setlocale(LC_CTYPE, "rus");
	double bank = 0;
	cout << "Введите свой бюджет: ";
	cin >> bank;
	while (true) {
		cout << "Ваш бюджет:" << bank << " Какую категорию хотите посетить?\nВыберите вариант 1-4:\n1-Одежда\n2-Товары для дома\n3-Продукты\n4-Я закончил(a) покупки\nВаш выбор: ";
		int answer = 0, choice = 0;
		bool fort = true;
		cin >> answer;
		switch (answer) {
		case 1:
			fort = true;
			while (fort) {
				cout << endl << "Что хотите приобрести?\nВыберите вариант 1-4\n1-Футболка (Стоимость: 30 руб.\n2-Кофта (Стоимость: 60 руб)\n3-Штаны (Стоимость: 90 руб.)\n4-Вернуться к выбору категории\nВаш выбор: ";
				cin >> choice;
				switch (choice) {
				case 1:
					if (bank >= 30) {
							bank -= 30;
					}
					else {
						cout << "Недостаточно средств!";
					}
					break;
				case 2:
					if (bank >= 60) {
						bank -= 60;
					}
					else {
						cout << "Недостаточно средств!";
					}
					break;
				case 3:
					if (bank >= 90) {
						bank -= 90;
					}
					else {
						cout << "Недостаточно средств!";
					}
					break;
				case 4:
					choice = 0;
					fort = false;
				}
			}
			break;
		case 2:
			fort = true;
			while (fort) {
				cout << endl << "Что хотите приобрести?\nВыберите вариант 1-4\n1-Полка (Стоимость: 30 руб.\n2-Стеллаж (Стоимость: 260 руб)\n3-Чайник (Стоимость: 10 руб.)\n4-Вернуться к выбору категории\nВаш выбор: ";
				cin >> choice;
				switch (choice) {
				case 1:
					if (bank >= 30) {
						bank -= 30;
					}
					else {
						cout << "Недостаточно средств!";
					}
					break;
				case 2:
					if (bank >= 260) {
						bank -= 260;
					}
					else {
						cout << "Недостаточно средств!";
					}
					break;
				case 3:
					if (bank >= 10) {
						bank -= 10;
					}
					else {
						cout << "Недостаточно средств!";
					}
					break;
				case 4:
					choice = 0;
					fort = false;
				}
			}
			break;
		case 3:
			fort = true;
			while (fort) {
				cout << endl << "Что хотите приобрести?\nВыберите вариант 1-4\n1-Молоко (Стоимость: 2.50 руб.\n2-Лапша (Стоимость: 2.10 руб)\n3-Хлеб (Стоимость: 2 руб.)\n4-Вернуться к выбору категории\nВаш выбор: ";
				cin >> choice;
				switch (choice) {
				case 1:
					if (bank >= 2.5) {
						bank -= 2.5;
					}
					else {
						cout << "Недостаточно средств!";
					}
					break;
				case 2:
					if (bank >= 2.10) {
						bank -= 2.10;
					}
					else {
						cout << "Недостаточно средств!";
					}
					break;
				case 3:
					if (bank >= 2.0) {
						bank -= 2.0;
					}
					else {
						cout << "Недостаточно средств!";
					}
					break;
				case 4:
					choice = 0;
					fort = false;
				}
			}
			break;
		case 4:
			return;
		default:
			cout << "Неверное значение!\n";
			break;
		}
	}
	cout << endl <<"Ваша сдача: " << bank;
}