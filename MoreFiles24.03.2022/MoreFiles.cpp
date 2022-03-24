#include <iostream>
#include "functions.h"
#include "structures.h"
#include "Data.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	
	//Работа с functions.h
	/*cout << "Введите два числа: ";
	cin >> n >> m;
	cout << n << " + " << m << " = " << sum(n, m) << endl;
	
	int arr[10];
	fillArr(arr, 10, 50, 101);
	cout << "Изначальный массив:\n";
	showArr(arr, 10);*/

	//Работа с structures.h
	/*person Tom = { "Tom Smith", {1, 1, 1970 }, "director", 120000 };
	showObj(Tom);*/

	X = 10;
	cout << "X = " << X << endl;
	Y = 15;
	cout << "Y = " << Y << endl;

	fillMX();

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++)
			cout << MX[i][j] << "\t";
		cout << endl;
	}

	return 0;
}