#include <iostream>

int main() {
    int day;
    setlocale(LC_ALL, "rus");
    std::cout << "Введите номер дня недели (1-7): ";
    std::cin >> day;

    switch (day) {
    case 1:
        std::cout << "Понедельник" << std::endl;
        break;
    case 2:
        std::cout << "Вторник" << std::endl;
        break;
    case 3:
        std::cout << "Среда" << std::endl;
        break;
    case 4:
        std::cout << "Четверг" << std::endl;
        break;
    case 5:
        std::cout << "Пятница" << std::endl;
        break;
    case 6:
        std::cout << "Суббота" << std::endl;
        break;
    case 7:
        std::cout << "Воскресенье" << std::endl;
        break;
    default:
        std::cout << "Некорректный ввод! Введите число от 1 до 7." << std::endl;
        break;
    }

    return 0;
}