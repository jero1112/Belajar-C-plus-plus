#include <iostream>
using namespace std;

int main() {
	int PANJANG;
	cout << "Masukan jumlah data: "; cin >> PANJANG;
	int nilai[PANJANG], nilai_mhs;
	string nama[PANJANG], nama_mhs, ket;
	
	for (int i = 0; i < PANJANG; i++) {
		cout << endl << "Data ke: " << i + 1;
		cout << endl << "Masukan nama mahasiswa: "; cin >> nama_mhs;
		nama[i] = nama_mhs;
		cout << endl << "Masukan nilai mahasiswa: "; cin >> nilai_mhs;
		nilai[i] = nilai_mhs;
	}
	cout << endl << "| No | Nama      | Nilai   | Keterangan  |" ;
	for (int y = 0; y < PANJANG; y++) {
		if(nilai[y] > 50) {
			ket = "Lulus";	
		} else {
			ket = "Tidak Lulus";
		}
		cout << endl << y+1 <<".     " << nama[y] << "         " << nilai[y] << "     " << ket;
	}
}
