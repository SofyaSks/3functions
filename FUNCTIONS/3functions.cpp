#include <iostream>
using namespace std;

// ����������� ������� 
inline int mv(int n1, int n2) {
	cout << "������� �������������� = ";
	return (n1 + n2) / 2;
}

// ������������� �������
int max(int n1, int n2, int n3) {
	int max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	cout << "������������ ����� = ";
	return max;
}
float max(float n1, float n2, float n3) {
	float max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	cout << "������������ ����� = ";
	return max;
}
double max(double n1, double n2, double n3) {
	double max = n1;
	if (n2 > max)
		max = n2;
	if (n3 > max)
		max = n3;
	cout << "������������ ����� = ";
	return max;
}

// ��������� �������
template <typename T> T maxarr(T arr[], int length) {
	T max = arr[0];
	for (int i = 0; i < length; i++) {
		cout << arr[i] << ", ";
		if (max < arr[i + 1])
			 max = arr[i+1];
	}
	cout << "\b\b.";
	cout << "\n������������ ����� �������: ";
	return max;
}

int main() {
	setlocale(LC_ALL, "ru");

	// ����������� ������� 
	int n, m;
	cout << "������� ������ �����: ";
	cin >> n;
	cout << "������� ������ �����: ";
	cin >> m;
	cout << mv(n, m);

	// ������������� �������
	double a, b, c;
	cout << "\n\n������� ������ �����: ";
	cin >> a;
	cout << "������� ������ �����: ";
	cin >> b;
	cout << "������� ������ �����: ";
	cin >> c;
	cout << max(a, b, c);

	// ��������� �������
	cout << "\n\n������ �� int: ";
	int arr[10]{ 23, 45, 344, 2, 0, -8, 99, 54,78, 65};
	cout << maxarr(arr, 10);

	cout << "\n\n������ �� float: ";
	float arr1[10]{ 4.5, 4.78, 3.44, 2.56, 0, -8.99, 9.9, 5.4,7.8, 6.05 };
	cout << maxarr(arr1, 10);
	
	cout << "\n\n������ �� double: ";
	double arr2[10]{ 2.3, 49.5, 3.44, 2.89, 0, -7.8, 9.009, 56.98764,7.988, 6.35 };
	cout << maxarr(arr2, 10);

	cout << endl << endl;

	return 0;
}