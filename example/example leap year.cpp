#include <iostream>

int main()
{
	setlocale(LC_ALL, "Rus");
	using namespace std;
	cout << "Введите год: ";
	int year{};
	cin >> year;
	if (((!(year%4) && year%100 ) || !(year%400)) && year%1000){

		cout << year << " - високосный год\n";
	}
	else {
		cout << year << " - не високосный год\n";
	}

	return 0;
}