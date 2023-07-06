//pembuatan tata nama karakter bintang
//NAMA: FAJAR KURNIA PUTRA
#include <iostream>
using namespace std;
int main () {
	    int f,i,c;
	 cout<<"========================================="<<endl;
	 cout<<"program pembuatan nama huruf depan F"<<endl;
	 cout<<"nama: FAJAR KURNIA PUTRA"<<endl;
	 cout<<"nim: 225520211003"<<endl;
     cout<<"========================================="<<endl;
	    cout<<"Masukan tinggi F :";cin>>f;
     cout<<"========================================="<<endl;
	    for(i=1; i<=f; i++){
	    cout<<"*";
	    if(i==1)
	    for(c=1; c<=3; c++)
	    cout<<"*";
    	if(i==3)
	    for(c=1; c<=3; c++)

	    cout<<"*";
 
	    cout<<std::endl;
	    }
}
