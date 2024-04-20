#include <iostream>
#include <cstdlib>
#include <ctime>

template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}

template<typename T>
void fill_arr(T arr[], const int lenght, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < lenght; i++)
		arr[i] = rand() % (right - left) + left;
}

template<typename T>
void my_mean(T arr[], const int lenght) {
	int sum{}, counter{};
	for (int i = 0; i < lenght; i++) {
		if (arr[i] % 2 == 0) {
			counter++;
			sum += arr[i];
		}
	}
	std::cout << "Средн. арифм. четных элиментов массива = " << double(sum) / counter;
}


int main() {

	setlocale(LC_ALL, "Russian");

	int n{};

	std::cout << "Задача №1\nИзначальный массив:\n";
	const int size1 = 20;
	int arr1[size1];
	fill_arr(arr1, size1, 1, 20);
	print_arr(arr1, size1);
	my_mean(arr1, size1);
	std::cout << "\n\n";

	std::cout << "Задача №2\nИзначальный массив:\n";
	const int size2 = 10;
	int arr2[size2];
	fill_arr(arr2, size2, 50, 71);
	print_arr(arr2, size2);
	std::cout << "Введите число -> ";
	std::cin >> n;
	std::cout << "Элименты массива в диапазоне от " << n - 3 << " до " << n + 3 << " : ";
	for (int i = 0; i < size2; i++) {
		if (arr2[i] <= n+3 && arr2[i] >= n-3) {
			std::cout << arr2[i] << " ";
		}
	}
	std::cout << std::endl;

	return 0;
}