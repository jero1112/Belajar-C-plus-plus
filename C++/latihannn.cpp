#include <iostream>
using namespace std;
main() {
	int i,j, deret;
	cout <<"pola segitiga"<<endl;
	cout<<"---------------------"<<endl;
	cout<<"input jumlah deret : ";
	cin>>deret;
	for (i=1; i<=deret; i++){
		for (j=1;j<=i;j++)
			cout<<i;
		cout<<endl;
	}
}
