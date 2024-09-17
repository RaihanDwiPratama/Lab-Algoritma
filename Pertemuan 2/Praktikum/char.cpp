#include <iostream>
using namespace std;

/*
Masalah yang kamu hadapi terjadi karena penggunaan cin untuk 
memasukkan data ke array karakter (char x[10], char y[30], char z[30]).
Fungsi cin tidak memiliki batasan otomatis pada jumlah karakter yang dimasukkan,
sehingga jika kamu memasukkan string yang lebih panjang daripada kapasitas array, 
maka data tersebut akan ditulis melebihi batas dan dapat menyebabkan buffer overflow. 
Ini adalah salah satu alasan mengapa tetap bisa menerima input yang lebih panjang dari batas array.
*/

int main() {
	char x[10];
	char y[30];
	char z[30];
	
	cout << "Masukkan NPM Anda: ";
	cin.getline(x, 10);
	cout << "Masukkan Nama Anda: ";
	cin >> y;
	cout << "Masukkan Alamat Anda: ";
	cin >> z;
	cout << "\n\nNPM Anda adalah: " << x << endl;
	cout << "Nama Anda adalah: " << y << endl;
	cout << "Alamat Anda adalah: " << z << endl;
	
	return 0;	
}
