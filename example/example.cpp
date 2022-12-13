#include <iostream>

#include "Year.hpp"
#include "Header.hpp"



int main()
{
	setlocale(LC_ALL, "Rus");
	using namespace std;
	cout << "Введите год: ";
	int year{};
	cin >> year;
	if (leap(year)){

		cout << year << " - високосный год\n";
	}
	else {
		cout << year << " - не високосный год\n";
	}
	workload();
	return 0;
}

