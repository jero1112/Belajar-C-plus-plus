#include <iostream>
using namespace std;

int main()
{
	int num, hasil;
	cout << "masukan angka: "; cin >> num;
	for(int i=1; i<=num;i++) {
		if (i < num) {
			cout << " " << i << " + ";
			hasil = hasil + i;
		} else {
			cout << " " << i;
			hasil = hasil + i;
		}
	}
	cout << " = " << hasil;
}
