#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
int square(int w, int h) {
	return w * h;
}

double circle(int r) {
	return r * r * M_PI;
}

int main() {
	std::cout << circle(6);
}

