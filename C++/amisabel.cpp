#include <iostream>
using namespace std;

int main() {
	int hitung = 0;
	for (int num = 1; num <= 1000;num++) {
		int x = 0;
		for (int i=1; i <= num;i++) {
			if (num % i == 0) {
				if (i != num)
				x = x + i;
			}
		}
		if (x == num || num == 1) {
			cout << endl << num <<"  (Adalah bilangan amisabel)";
		}
	}
}
