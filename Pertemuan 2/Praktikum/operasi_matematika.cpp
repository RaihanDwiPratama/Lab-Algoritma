#include <iostream>
using namespace std;

int main() {
	int x, y, tambah, kurang, kali, bagi;
	
	cout << "Masukkan bilangan kesatu: ";
	cin >> x;
	cout << "Masukkan bilangan kedua: ";
	cin >> y;
	
	tambah = x + y;
	kurang = x - y;
	kali = x * y;
	bagi = x / y;
	
	cout << "Hasil penjumlahannya adalah: " << tambah << endl;
	cout << "Hasil pengurangannya adalah: " << kurang << endl;
	cout << "Hasil perkaliannya adalah: " << kali << endl;
	cout << "Hasil pembagiannya adalah: " << bagi << endl;
	return 0;
}
