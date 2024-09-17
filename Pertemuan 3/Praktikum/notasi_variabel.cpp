#include <iostream>
using namespace std;

int main() {
	int a = 10, b = 5;
	
	cout << "Nilai A adalah " << a << endl; // 10
	cout << "Nilai ++A adalah " << ++a << endl; // 11
	cout << "Nilai B adalah " << b << endl; // 5
	cout << "Nilai B-- adalah " << b-- << endl; // 5
	cout << "Nilai B adalah " << b << endl; // 4
	cout << "NIlai ++B adalah " << ++b << endl; // 5 // 1 + b
	cout << "Nilai A + 5 adalah " << a+5 << endl; // 16
	cout << "Nilai 5 + A adalah " << 5+a << endl; // 16
	cout << "Nilai a fix nya adalah " << a << endl; // 11 // 10 // 16  
	 	
	return 0;
}
