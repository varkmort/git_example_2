#include "Year.hpp"

bool leap(int year) {
	return ((!(year % 4) && year % 100) || !(year % 400)) && year % 1000;
}

