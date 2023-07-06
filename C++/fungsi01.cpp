 #include <iostream>
using namespace std;

int hitungLuas(int p, int l){
    int luas;    //Variabel lokal
    luas = p*l;  //melakukan perhitungan
    return luas;
}

main (){
    int pj,lb;
    int luasUtama;
    cout<<"==========================================="<<endl;
    cout<<"|                                         |"<<endl;
    cout<<"|       MENCARI LUAS PERSEGI PANJANG      |"<<endl;
    cout<<"|                                         |"<<endl;
    cout<<"==========================================="<<endl;
    cout<<"Masukan Panjang : ";cin>>pj;
    cout<<"Masukan Lebar   : ";cin>>lb;

    luasUtama=hitungLuas(pj, lb);

    //Menampilkan hasil perhitungan
    cout<<"==========================================="<<endl;
    cout<<"| Jadi, Luas Persegi Panjang Adalah : "<<luasUtama<<endl;

    cout<<"==========================================="<<endl;
}

