#include <iostream>
#include <stdlib.h>

using namespace std;

string huruf ( int angka ) {
	if ( angka <= 100 && angka >= 85 ) {
		return " A " ;
	} else if ( angka <= 84 && angka >= 65 ) {
		return " B " ;
	} else if ( angka <= 64 && angka >= 55 ) {
		return " C " ;
	} else if ( angka <= 54 && angka >= 35 ) {
		return " D " ;
	} else if ( angka <= 34 && angka >= 0 ) {
		return " E " ;
	} else {
		return " Data Tidak Ada " ;
	}
}


int bobot ( string na ) {
	if ( na == " A " ) {
		return 4 ;
	} else if ( na == " B " ) {
		return 3 ;
	} else if ( na == " C " ) {
		return 2 ;
	} else if ( na == " D " ) {
		return 1 ;
	} else if ( na == " E " ) {
		return 0 ;
	} else {
		return 9 ;
	}
}

int main () {
	while(true) {
		int j_matkul ;
		string n_siswa,stop ;
		
		cout << endl << " Masukkan Nama Siswa : " ; cin >> n_siswa ;
		cout << endl << " Masukkan Jumlah Matkul : " ; cin >> j_matkul ;
		
		string l_n_matkul[j_matkul], l_nh[j_matkul] ;
		int l_sks[j_matkul], l_uts[j_matkul], l_uas[j_matkul], l_na[j_matkul], l_bobot[j_matkul] ;
		
		string n_matkul ;
		int sks, uts , uas , na ;
		
		int t_sks = 0 ;
		int t_bobot = 0 ;
		int ipsmstr = 0 ;
		
		for  ( int i = 0; i < j_matkul; i++ ) {
			cout << endl << " Masukkan Nama Matkul : " ; cin >> n_matkul ; 
			l_n_matkul[i] = n_matkul ;
			cout << endl << " Masukkan Jumlah SKS : " << n_matkul << " : " ; cin >> sks ;
			l_sks[i] =  sks ;
			cout << endl << " Masukkan Nilai UTS : " << n_matkul << " : " ; cin >> uts ;
			l_uts[i] = uts ;
			cout << endl << " Masukkan Nilai UAS : " << n_matkul << " : " ; cin >> uas ;
			l_uas[i] = uas ;
			l_na[i] = ( uts * 0.35 ) + ( uas * 0.65 ) ;
			cout << endl << " Nilai Akhir Matkul " << n_matkul << " : " << l_na[i] ;
			l_nh[i] = huruf( l_na[i] ) ;
			l_bobot[i] = bobot( l_nh[i] ) ;
			
		}
		
		
		cout << endl << " Kartu Hasil Studi " ;
		cout << endl << " No   Matkul   SKS    UTS    UAS     N.Akhir     N.Huruf     Bobot " ;
		for ( int x = 0; x < j_matkul; x++ ) {
			cout << endl << x << "     " << n_matkul[x] << "     " << l_sks[x] << "     " << l_uts[x] << "    " << l_uas[x] << "   " << l_na[x] << "    " << l_nh[x] << "   " << l_bobot[x] ;
		}
		
		
		for ( int y = 0; y < j_matkul; y++ ) {
			t_sks += l_sks[y] ;
			t_bobot += l_bobot[y] ;
		}
		
		cout << endl ;
		cout << endl << " Total SKS : " << t_sks ;
		cout << endl << " Total Bobot : " << t_bobot ;
		ipsmstr = ( t_sks * t_bobot ) / t_sks ;
		cout << endl << " IP Semester : " << ipsmstr ;
		
		cout << endl ;
		cout << endl << " Apakah anda ingin lanjut [ Yes = y / No = n ] " ; cin >> stop ;
		if ( stop == "y" || stop == "Y") {
			system ("cls") ;
		} else { 
			system("cls") ;
			break ;
		}
	}
}
