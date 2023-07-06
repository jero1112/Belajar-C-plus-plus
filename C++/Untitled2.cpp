
#include <iostream>
using namespace std;

int Pengakaran(int n) {
	int hasil = n *n;
	return hasil;
}

int main()
{
    int bil, hasil;
    int i = 1;
    cout << "masukan angka: "; cin >> bil;
    while (i <= bil){
		hasil = Pengakaran(i);
		cout << " " << hasil << "->";
		i++;
	}
}
