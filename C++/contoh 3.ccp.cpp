#include <iostream>
using namespace std;
int a;
main()
{
	cout<<"menentukan bilangan positif dan negatif"<<endl;
	cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<endl;
	cout<<"Masukkan sebuah bilangan :";
	cin>>a;
	if(a>0)
		cout<<a<<" merupakan bilangan positif";
	else if (a<0)
		cout<<a<<" merupakan bilangan negatif";
	else
		cout<<a<<"sama dengan nol (0)";	
}
