#include <iostream>
using namespace std;
string nb, st, ds;
int harga, jumlah;
float total, diskon;
main()
{
	cout<<" Data Penjualan "<<endl;
	cout<<" ============== "<<endl;
	cout<<" Nama Barang = "; getline(cin,nb);
	cout<<" Satuan      = "; cin>>st;
	cout<<" Harga       = "; cin>>harga;
	cout<<" Jumlah      = "; cin>>jumlah;
	//proses
	//kondisi
	if (jumlah>=10 && jumlah<15)
		diskon=0.15*harga;
	else if(jumlah>=16 && jumlah<20)
		diskon=0.20*harga;
	else if(jumlah>=21 && jumlah<30)
		diskon=0.25*harga;
	else if(jumlah>=30)
		diskon=0.35*harga;
	else if (jumlah<10)
		diskon=0*harga;
	else
		
	cout<<"Jumlah barang Invalid"<<endl;
	cout<<"total diskon  ="<<(jumlah*diskon)<<endl;
	total=(jumlah*harga)-(jumlah*diskon);
	cout<<"total bayaran = "<<total<<endl;
	
	
		
	

}
