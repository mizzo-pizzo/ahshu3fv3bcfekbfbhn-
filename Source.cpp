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
	//��� ������ �� 15 ��������. 
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
	//2 ��� ������ �� 20 ���������.��������� ��� ���������� ������� �� ��������� 0 - 30. ���������� ����� ��� ����� � �������, ������� ������� �� 3 � �� 5
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
	//3 ��� ������ �� 17 ���������. ��������� ��� ���������� ������� �� ��������� 0 - 45. ���������� ������������ ��� ����� � �������, 
	//������� ������� �� 2 ��� �� 3
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
	//4 ��� ������ �� 17 ���������. ��������� ��� ���������� ������� �� ��������� 0 - 52.
	//���������� ������� �������������� ��������� � ������� �������� (0, 2, 4 � �.�.)
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