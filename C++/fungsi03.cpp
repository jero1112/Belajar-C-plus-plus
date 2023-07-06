#include <iostream>
using namespace std;


int hitungluas() {
	int r ;
	float luas;
	float phi;
	phi = 3.14;
	cout << endl << " Masukkan Jari-jari : " ;cin >> r;
	luas = phi*(r*r);
	cout<<" Hasil Luas Lingkaran adalah "<< luas <<endl;
	return luas;
}
int keliling(){
	int r;
	float phi;
	float kel;
	cout << endl << " Masukkan Jari-jari : ";cin >> r;
	phi = 3.14;
	kel= 2*phi*r;
	cout << " Keliling Lingkaran adalah "<< kel << endl;
	return kel;
}
int volumbola(){
	int r;
	float volum,phi;
	phi = 3.14;
	cout << endl << " Masukkan Jari -jari : ";cin >>r;
	volum = 4*phi*(r*r);
	cout << " volume bola adalah "<<volum<<endl;
	return volum;
}
string keterangan(int nilai){
	if (nilai > 80){
		return "terpuji";
	} else if (nilai >= 55){
		return "sangat memuaskan";
	} else if (nilai < 55){
		return "ulang lagi";
	}
}
void data(){
	int uas,uts,na;
	string nama;
	cout << endl << " nama : ";cin>>nama;
	cout<< endl<<" nilai uts : ";cin>>uts;
	cout<< endl<<" nilai uas : ";cin>>uas;
	na = (uts*0.45)+(uas * 0.55);
	cout << "nilai akhir : "<<na;
	cout <<endl<<"keterangan";
	cout << 	keterangan(na);
}

int menu(){
	int pick;
	cout<<" silahkan pilih menu "<<endl;
	cout<<" 1. Luas Lingkaran"<<endl;
	cout<<" 2. Keliling Lingkaran"<<endl;
	cout<<" 3. Volume Bola "<<endl;
	cout<<" 4. Data MHS"<<endl;
	cout << endl << " Pilih Menu : ";cin >> pick;
	
	if (pick == 1)
		hitungluas();
	else if (pick == 2)
		keliling();
	else if (pick == 3)
		volumbola();
	else if (pick == 4)
		data();
}

main(){
	menu();
	 
}
