#include <iostream>

int square(int w, int h) {
	return w * h;
}

double circle(int r) {
	return r * r *3.14;
}

int main() {
	std::cout << circle(4);
}

