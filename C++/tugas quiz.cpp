#include <iostream>

using namespace std;
int main(){
	string matkull,huruf;
	int matkul,sks,uts,uas,i,x,total_sks,ip,na,bobot,sumsks,sumbobot,total_bobot;
	cout << endl << " KARTU HASIL STUDI " ;
	cout << endl << " Masukkan Matkul : " ; cin >> matkul;
	
	for(i=0;i<matkul;i++){
		cout << endl << " Data Ke - " << i+1 ;
		cout << endl << " Nama Mata Kuliah : " ; cin >> matkull;
		cout << endl << " SKS : " ; cin >> sks ;
		cout << endl << " Nilai UTS : " ; cin >> uts ;
		cout << endl << " NIlai UAS : " ; cin >> uas ;
	}
	na = (0.35*uts) + (0.65*uas);
	if(na>=85){
		huruf = " A " ;
		bobot = 4 ;
		sumbobot+=bobot;
	}else if (na >= 65  < 85){
		huruf = " B " ;
		bobot = 3 ;
	}else if ( na >= 55 < 65){
		huruf = " C " ;
		bobot = 2 ;
	}else if ( na >= 35 < 55){
		huruf = " D " ;
		bobot = 1 ;
	}else if ( na < 35 ){
		huruf = " E " ;
		bobot = 0 ;
	}
		sumsks+=sks;
		ip = (sumsks*sumbobot)/sumsks;	
		cout << " IP Semester : " << ip << endl ;
		cout << " matkul     sks     ip    uts      uas      huruf     bobot " << endl ;
	for(x=0;x < matkul;x++){
		cout << matkull << "    " << sks << "   "<< ip << "    "<< uts << "    "<< uas << "     "<< na << "   "<< huruf << "    "<< bobot << "   "<< endl ;
	}

}



