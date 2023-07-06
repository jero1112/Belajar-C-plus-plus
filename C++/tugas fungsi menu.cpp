#include <iostream>
using namespace std;

int prosesfaktorial(int angka){
	int hasil,i;
	hasil = 1;
  	for(i=1;i<=angka;i++) {
    hasil = hasil * i;
  }
  return hasil;
}

int faktorial(){
	int angka,angka1,angka2;
	cout << " Masukkan Bilangan Awal  : "; cin >> angka1;
	cout << " Masukkan Bilangan Akhir : "; cin >> angka2;
	for ( angka=angka1; angka<=angka2;angka++){
		cout << " " << angka << " != " << prosesfaktorial(angka) << endl;
	}
}


int prima() {
    int angka, x, y;
    cout << " ======================== " << endl ;
    cout << " Masukan Bilangan Awal  : ";
    cin >> x;
 
    cout << " Masukan Bilangan Akhir : ";
    cin >> y;
	cout << " ======================== " << endl ;
    for (angka=x; angka<=y; angka++) {
        if ((angka==2 or angka==3 or angka==5 or angka==7) or (angka%2 != 0 and angka%3 != 0 and angka%5 != 0 and angka%7 != 0)) {
        	if (angka != 1) {
				cout << angka << "  Merupakan Bilangan Prima\n";
			}
        }
    }
 
    return 0;
}

int konversi_suhu(){
  cout << " =================================== " << endl;
  cout << "            Konversi Suhu            " << endl;
  cout << " =================================== " << endl;
  cout << endl;
 float celcius, atas, bawah;
 float reamur, fahreinhet, kelvin;
 
 cout << " =================================== " << endl ;
 cout << " Masukkan derajat Celcius 1 : ";cin>>atas;
 cout << " Masukkan derajat Celcius 2 : ";cin>>bawah;
 cout << " =================================== " << endl ;
 celcius+=atas;
 cout << " ========================================================== " << endl ;
 cout << " ||  Celcius  ||  Reamur   ||   Fahreinhet  ||   Kelvin  || " << endl ;
 cout << " ========================================================== " << endl ;
 while (celcius>=atas){
 	while (celcius<=bawah){
 		reamur = 4.0/5.0 * celcius;
 		fahreinhet = 9.0/5.0 * celcius + 32;
 		kelvin = celcius + 273;
 		cout << "        " << celcius << "          " << reamur << "            " << fahreinhet << "            " << kelvin << endl;
 		celcius++;
	 }
 } 
}

int gl_gn(){
	cout << " ======================================== " << endl;
	cout << "         Bilangan Genap dan Ganjil        " << endl;
    cout << " ======================================== " << endl;
	int bilawl, bilakr, parameter;
	string ket;
	cout << " Masukkan Bilangan Awal  : "; cin>>bilawl;
	cout << " Masukkan Bilangan Akhir : "; cin>>bilakr;
	cout << " ========================= " << endl ;
	
	parameter=0;
	parameter+=bilawl;
	while (parameter>=bilawl){
		while (parameter<=bilakr){
			if (parameter%2==0)
				ket="Genap";
			else
				ket="Ganjil";
		cout << " " << parameter << " Adalah Bilangan " << ket << endl ;
		parameter++;
		}
	}
}
int menu(){
	int pick;
	cout << " =================================== " << endl ;
	cout << " ========== Menu Aplikasi ========== " << endl ;
	cout << " =================================== " << endl ;
	cout << " || 1. Faktorial                  || " << endl ;
	cout << " || 2. Prima                      || " << endl ;
	cout << " || 3. Konversi Suhu              || " << endl ;
	cout << " || 4. Ganjil/Genap               || " << endl ;
	cout << " || 5. Exit                       || " << endl ;
	cout << " =================================== " << endl ;
	cout << " || Pilih Menu Anda : "; cin >> pick;
	cout << " =================================== " << endl ;
	if (pick == 1)
		faktorial();
	else if (pick == 2)
		prima();
	else if (pick == 3)
		konversi_suhu();
	else if (pick == 4)
		gl_gn();
	else if (pick == 5)
		;
}

main(){
	menu();
	 
}
