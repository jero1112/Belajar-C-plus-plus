#include <iostream>
using namespace std;
#define LENGTH 5

main( ) {
	int nilai[LENGTH] = {67, 34, 12, 77, 88};
	//asumsi nilai minidan max adalah elemen
	//array pertama
	int min = nilai[0], max = nilai[0];
	
	for (int i = 1; i < LENGTH; i++) {
	//mencari bilangan minimum
	if (nilai[i] < max){
	min = nilai[i];
	}
	//mencars bilangan maksimum
	if (nilai[i] > max) {
	max = nilai[i];
	}
	}
	cout << "\nNilai Minimum : " << min;
	cout << "\nNilai Maksimum : "<< max;
}
