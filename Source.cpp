#include <iostream>
using namespace std;
int main() {

	/*const int n = 5;
	int mas[n];
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
	}
	for (int i = n - 1; i >= 0; i--) {
		cout << mas[i] << ' ';
	}
	cout << endl;
	*/
	//дан массив из 15 эелемтов. 
	/*const int n = 15;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 21;
		cout << arr[i] << " ";
	}
	cout << endl;
	int kol_vo = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			kol_vo++;
		}
	}
	cout <<  kol_vo << endl;*/
	//2 Дан массив из 20 элементов.Заполнить его случайными числами из диапазона 0 - 30. Подсчитать сумму тех чисел в массиве, которые делятся на 3 И на 5
	/*const int n = 20;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 31;
		cout << arr[i] << " ";
	}
	cout << endl;
	int kol_vo = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 == 0 && arr[i] % 5 == 0) {
			kol_vo++;
		}
	}*/
	//3 Дан массив из 17 элементов. Заполнить его случайными числами из диапазона 0 - 45. Подсчитать произведение тех чисел в массиве, 
	//которые делятся на 2 ИЛИ на 3
	/*const int n = 17;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 46;
		cout << arr[i] << " ";
	}
	cout << endl;
	long long priozv = 1;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 3 == 0 || arr[i] % 2 == 0) {
			priozv *= arr[i];
		}
	}
	cout << "priozv = " << priozv << endl;*/
	//4 Дан массив из 17 элементов. Заполнить его случайными числами из диапазона 0 - 52.
	//Подсчитать среднее арифметическое элементов С ЧЕТНЫМИ НОМЕРАМИ (0, 2, 4 и т.д.)
	/*const int n = 17;
	int arr[n];
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 53;
		cout << arr[i] << " ";
	}
	double k = 0;
	double sr_ar;
	double sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			k++;
			sum += arr[i];
		}
	}
	sr_ar = sum / k;
	cout << "sr aref " << sr_ar << endl;
	*/
}