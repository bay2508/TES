#include <iostream>
#include <string>


void printPattern(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n + 3; j++) {
			if (j <= i)
				std::cout << j;
			else if (j == i + 1 || j == i + 2)
				std::cout << "*";
			else
				std::cout << j;
		}
		std::cout << std::endl;
	}
}

int main() {
	int n;
	std::cout << "Masukkan nilai n: ";
	std::cin >> n;
	printPattern(n);

	return 0;
}

