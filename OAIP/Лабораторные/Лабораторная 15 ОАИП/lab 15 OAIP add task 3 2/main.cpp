#include <iostream> 
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	int n = 0, m =0;
	cout << "Введите n: ";
	cin >> n;
	cout << "\nВведите m: ";
	cin >> m;
	int** array = new int* [n];
	for (int i = 0; i < n; i++) {
		array[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			array[i][j] = rand() % 10;
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	int count = 0;
	for (int j = 0; j < m; j++) {
		for (int i = 0; i < n; i++) {
			if (array[i][j] == 0) {
				count++;
				break;
			}
		}
	}
	int maxStreak = 0, currentStreak = 0, iOfMaxStreak;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if(array[i][j] == array[i][j + 1] && j != m) {
				currentStreak++;
			}
		}
		if (currentStreak > maxStreak) {
			maxStreak = currentStreak;
			iOfMaxStreak = i;
		}
		currentStreak = 0;
	}
	cout << "\nКоличество столбцов содержащих нули: " << count;
	cout << "\nНомер строки с максимальной серией равных последовательных элементов: " << iOfMaxStreak;
	for (int i = 0; i < n; i++) {
		delete[] array[i];
	}
	delete[] array;
}