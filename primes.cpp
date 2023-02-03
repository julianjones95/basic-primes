#include <iostream>

int main() {
	int n = 100;
	for (int i = 1; i<=n; i++) {
		for (int j = 2; j<=i; j++) {

			if (i==j) {
				std::cout << i << std::endl;
			}
			int mod = i % j;
			if (mod == 0) {
				break;
			}
		}
	}
	return 0;
}
