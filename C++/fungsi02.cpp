#include <iostream>

using namespace std;

string getIndex(int n){
    string inx;    //Variabel lokal

    if (n>=75) inx="A";
    else if (n>=65) inx="B";
    else if (n>=55) inx="C";
    else if (n>=45) inx="D";
    else inx="E";
    return inx;
}
main (){
    int nilai;
    cout<<"==========================================="<<endl;
    cout<<"|                                         |"<<endl;
    cout<<"|    MENENTUKAN INDEKS NILAI MAHASISWA    |"<<endl;
    cout<<"|                                         |"<<endl;
    cout<<"==========================================="<<endl;
    cout<<"Masukan Nilai Mahasiswa : ";cin>>nilai;
    cout<<"==========================================="<<endl;
    cout<<"| Index Nilai Mahasiswa Adalah : "<<getIndex(nilai)<<endl;
    cout<<"==========================================="<<endl;
}

