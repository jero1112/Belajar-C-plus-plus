#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;
int main()
{
	int a, b;
	float hasil;
	cout<<"Contoh Program Matematis"<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"Input NIlai A [0-100] : ";
	cin >> a;
	cout<<endl<<"Input Nilai B [0-100] : ";
	cin >> b;
	hasil = a + b;
	cout<<endl<<"Hasil A + B = "<<hasil;
	cout<<endl<<"Hasil A - B = "<< a - b ;
	cout<<endl<<"Hasil A x B = "<< a * b ;
	cout<<endl<<"Hasil A / B = "<< float(a) / b ;
	return 0;
}
