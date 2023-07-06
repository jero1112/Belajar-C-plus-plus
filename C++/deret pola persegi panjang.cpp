#include <iostream>
#include <stdio.h>
using namespace std;
int i,i2,x,limit,jumlah;
main(){
	cout<<"program deret persegi panjang"<<endl;
	cout<<"_____________________________"<<endl;
	cout<<"masukan limit dari deret = " ;cin>> limit;
	x=2;
	i=1;
	i2=x;
	while(i<=limit){
		cout<<i2<<" ";
		x+=2;
		i++;
		i2+=x;
		jumlah+=i2;
	}
		cout<<endl;
}
