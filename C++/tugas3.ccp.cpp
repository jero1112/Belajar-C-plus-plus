#include <iostream>
#include <stdio.h>
using namespace std;
string nim, nama, ket;
int nmid, nsem;
float na;
main()
{
	char name [35];
	cout<<" Data Nilai MHS "<<endl;
	cout<<"================"<<endl;
	cout<<"Nama Mahasiswa : "; getline(cin,nama);
	cout<<"No. Induk MHS  : "; cin>>nim;
	cout<<"Nilai MID : "; cin>>nmid;
	cout<<"Nilai UAS : "; cin>>nsem;
	//proses
	na= 0.45 * nmid + 0.55 * nsem; //45%=0.45
	//kondisi
	if (na >=65 )
		ket=" Anda Lusus";
	else
		ket=" Maaf Silahkan Ulang Lagi Semester Depan";
	//output
	cout<<"============================"<<endl;
	cout<<"NIlai Akhir = "<< na <<endl;
	cout<<"Keterangan  = "<< ket <<endl;
}
