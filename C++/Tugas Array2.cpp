#include <iostream>
using namespace std;

int main() {
	int j_baris, j_kolom, nilai;
	cout << "Masukan jumlah baris: "; cin >> j_baris;
	cout << "Masukan jumlah kolom: "; cin >> j_kolom;
	
	int data[j_baris][j_kolom];
	
	for (int z = 0; z < j_baris; z++) {
		cout << endl << "----------" << "BARIS " << z +1 << "----------";
		for (int j = 0; j < j_kolom; j ++) {
			cout << endl <<"Masukan nilai ke " << j +1 << " : "; cin >> nilai;
			data[z][j] = nilai;
		}
	}
	
	for (int x = 0; x < j_baris; x++) {
		for (int i = 0; i < j_kolom; i++) {
			cout << "[" << data[x][i] << "]";
		}
		cout << endl;
	}
}
