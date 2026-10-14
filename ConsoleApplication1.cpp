#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>

int main() {
	int n;
	std::cin >> n;
	if (n < 2) {
		std::cout << "n ko la so ngto";
	}
	else {
		for (int i = 2; i <= std::sqrt(n); ++i) {
			if (n % i == 0) {
				std::cout << "n ko la so ngto";
				return 0;
			}
		}
		std::cout << "n la so ngto";
	}
}