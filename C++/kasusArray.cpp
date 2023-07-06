#include <iostream>
using namespace std;
main() {
	
	string nama,matkul;
	int t_akademik,j_smstr,j_matkul,i,j,jum_baris,jum_kolom,data,nilai,uts,uas,tugas,hasil;
	
	cout << endl << "============Kasus Nilai Mahasiswa============";
	cout << endl << "Tahun Akademik : "; cin >> t_akademik;
	cout << endl << "Jumlah Semester : "; cin >> j_smstr;
	cout << endl << "Jumlah Matakuliah : "; cin >> j_matkul;
	
	string dataa[jum_baris][jum_kolom];
	//input data
	for ( int i=0;i < j_matkul ; i++ ) {
		cout << endl << "------" << "Data Ke " << i+1 << "-------";
		cout << endl << "Nama Mahasiswa : "; cin >> nama;
		cout << endl << "Matakuliah : "; cin >> matkul;
		cout << endl << "Nilai UTS : "; cin >> uts;
		cout << endl << "Nilai UAS : "; cin >> uas;
		cout << endl << "Nilai Tugas : "; cin >> tugas;
	}

	
}
