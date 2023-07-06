#include <iostream>
#include <conio.h>

using namespace  std;

void l_ling(){
 float jari,t,phi,hasil;
 
 cout<<"Masukkan jari-jari : ";cin>>jari;
 

 phi=3.14;
 hasil=phi*(jari*jari);
 cout<<"\n";
 cout<<"luas Lingkaran: "<<hasil<<endl;
 
 getch();
 
}

void k_ling()
{
    float r,keliling;
    float phi = 3.14;

    cout<<"Masukan Jari Jari : ";
    cin>>r;
    keliling = 2*phi*r;

    cout<<"Keliling Lingkaran :" << keliling << endl;
    getch();
}
 
 
 
void volume_bola(){
 float r,phi,hasil;
 
 cout<<"Masukkan jari-jari :  ";cin>>r;
 
 phi=3.14;
 hasil=4*phi*(r*r);
 
 cout<<"\n";
 cout<<"Volume Bola        :  "<<hasil<<endl;
 
 getch();
 }
 
 string keterangan(int nilai){
 	if (nilai>80){
 		return "terpuji";
	 }else if (nilai>=55){
	 	return "sangat memuaskan";
	 }else if (nilai<55){
	 	return "ulang lagi";
	 }
 }
 void data(){
 	int uas,uts,na;
 	string nama;
 	cout<<endl<<"nama      : ";cin>>nama;
 	cout<<endl<<"nilai uts : ";cin>>uts;
 	cout<<endl<<"nilai uas : ";cin>>uas;
 	na=(uts*0.45)+(uas*0.55);
 	cout<<"nilai akhir     : "<<na;
 	cout <<endl<<"keterangan : ";
 	cout<<      keterangan(na);
 }
 

 
 int main(){
  int menu;
 
  cout<<" ------------------------------------\n"<<endl;
  cout<<" Selamat Datang di Program Matematika "<<endl;
  cout<<"                                     "<<endl;
  cout<<"           Menu Plihan               "<<endl;   
  cout<<" ===================================="<<endl<<endl;
  
  cout<<" 1. luas lingkaran "<<endl;;
  cout<<" 2. keliling lingkaran"<<endl;
  cout<<" 3. volume bola "<<endl;
  cout<<" 4. data mhs "<<endl;
 
  cout<<" Masukkan Pilihan Menu : ";cin>>menu;
  
 
 
  system ("cls");
  switch(menu){
   case 1: 
    l_ling();
    break;
   case 2:
    k_ling();
    break;
   case 3:
    volume_bola();
    break;
   case 4:
   	data();
   }
}
