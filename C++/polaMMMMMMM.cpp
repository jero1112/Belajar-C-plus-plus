#include <iostream>
using namespace std;

int main() {
	int  x, y;
      for (int i = 1; i <= 7; i++) {
		for(int j = 1; j <= 7; j++) {
			if(i == 1) {
				if (j == 1 || j == 7) {
					cout << "*";
				} else {
					cout << " ";
				}
			} else if (i == 2) {
				if (j == 1 || j == 2 || j == 6 || j== 7) {
					cout << "*";
				} else {
					cout << " ";
				}
			} else if (i == 3) {
				if (j == 1 || j == 3 || j == 5 || j == 7) {
					cout << "*";
				} else {
					cout << " ";
				}
			} else if (i == 4) {
				if (j == 1 || j == 4 || j == 7) {
					cout << "*";
				} else {
					cout << " ";
				}
			} else {
				if (j == 1 || j == 7) {
					cout << "*";
				} else {
					cout << " ";
				}
			}
		}
		cout<<"\n";
	}
}
