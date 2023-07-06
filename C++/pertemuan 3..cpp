#include <iostream>
using namespace std;
main()
{
	int a;
	float hasil;
	cout<<"menentukan bilangan ganjil/genap"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"masukkan sebuah bilangan : ";
	cin>>a;
	hasil= a % 2;
	if (hasil==0)
		cout<<a<<" adalah nilangan genap";
	else
		cout<<a<<" adalah bilangan ganjil";
}

