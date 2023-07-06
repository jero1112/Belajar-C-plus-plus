#include <iostream>
using namespace std;

int main(){
    int  i, j;
    for (i = 1; i <= 5; i++){
    	if (i != 3) {
    		for (j = 1; j <= 5; j++){
	        	if (j==1 || j==5) {
	        		cout << "*";
				} else {
					cout << " ";
				}
	        }
	        cout << "\n";	
		} else {
			for (j = 1; j <= 5; j++) {
				cout << "*";
			}
			cout << "\n";
		}
	}
}
