#include <iostream>

int main() {
    int day;
    setlocale(LC_ALL, "rus");
    std::cout << "������� ����� ��� ������ (1-7): ";
    std::cin >> day;

    switch (day) {
    case 1:
        std::cout << "�����������" << std::endl;
        break;
    case 2:
        std::cout << "�������" << std::endl;
        break;
    case 3:
        std::cout << "�����" << std::endl;
        break;
    case 4:
        std::cout << "�������" << std::endl;
        break;
    case 5:
        std::cout << "�������" << std::endl;
        break;
    case 6:
        std::cout << "�������" << std::endl;
        break;
    case 7:
        std::cout << "�����������" << std::endl;
        break;
    default:
        std::cout << "������������ ����! ������� ����� �� 1 �� 7." << std::endl;
        break;
    }

    return 0;
}