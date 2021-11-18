//Белоушко Елизавета П43021
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");

	//Сортировка пузырьком по убыванию.

	const int n = 10;
	int arr[n];
	srand(time(0));
	for (int i = 0; i < n; i++) { arr[i] = rand() % 101 - 50; }
	for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
	cout << endl;

	for (int i = 0; i < n; i++)
	for (int j = 0; j < n - 1; j++) {
		if (arr[j] < arr[j + 1]) { swap(arr[j], arr[j + 1]); }
	}
	for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
	cout << endl;

	return 0;
}