#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar Di Prodi TI UMY" << endl;
		throw 0.5; // Melempatkan Sebuah Integer Maka
		cout << "Pernyataan Tidak Akan Dieksekusi" << endl;
	}
}