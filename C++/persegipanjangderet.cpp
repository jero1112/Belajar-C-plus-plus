#include <iostream>
using namespace std;

int main() {
	int a,b,c,l;
	cout << "Masukkan bilangan : "; cin >> l;
	a = 2;
	b = 2;
	c = 0;
	for (int i = 1; i <= l; i++) {
		if (a < 10 ) {
			cout << "00" << a << " ";	
		} else if (a < 100) {
			cout << "0" << a << " ";
		} else {
			cout << a << " ";
		}
		b += 2;
		a = a + b;
		c ++;
		if (c >= 7) {
			cout << endl;
			c = 0;
		}
	}
	if (c < 7 && c != 0) {
		for (int j; j <= 7 - c -1; j++ ) {
			cout << "xxx ";
		}
	}
}

