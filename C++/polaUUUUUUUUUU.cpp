#include <iostream>
using namespace std;
main() {
	int i,j;
	for (i=1; i <=5; i++) {
		if (i!=5){
			for (j=1; j<=5; j++){
				if (j==1 || j==5){
					cout<<"*";
				}else{
					cout<<" ";
				}
			}cout<<"\n";
		}else{
			for (j=1; j<=5; j++){
				cout<<"*";
			}
			cout<<"\n";
		}
	}
}

