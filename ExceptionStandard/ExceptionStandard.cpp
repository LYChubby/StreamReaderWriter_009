#include <iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat Belajar Di Prodi TI UMY" << endl;
		throw 0.5; // Melempatkan Sebuah Integer Maka
		cout << "Pernyataan Tidak Akan Dieksekusi" << endl;
	}

	catch (int a) {
		// Blok Ini Akan Dieksekusi
		cout << "Pengecualian Akan Di Eksekusi" << endl;
	}
}