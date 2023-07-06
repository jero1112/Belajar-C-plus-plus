#include <iostream>
using namespace std;
main() {
	float nilai[3], total;
	//input nilai
	for (int i=0; i < 3; i++) {
	cout << "Nilai ke " << i+1;
	cout<<" = ";
	cin >> nilai[i];
	}

	//jumLahkan: nilai
	for (int i=0; i < 3; i++) {
	total += nilai[i];
	}
	cout << "Nilai Akhir " << total / 3;
}
