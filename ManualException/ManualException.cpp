#include <iostream>
#include <exception>
// Untuk Obyek Exception Yang Akan Digunakan
#include <array>
// Untuk Obyek Array Yang Akan Kita Gunakan
using namespace std;

int main() {

	cout << "Awal Program" << endl;		// Penanda 1 : ...
	try {
		array<int, 3> data = { 3, 5, 7 };
		// Pesan Array Integer 3 Elemen
		cout << data.at(5) << endl;
		// Memanggil Array Elemen Ke 5
	}

	catch (exception& e) {
		// Penangkap Menggunakan Obyek Exception
		cout << e.what() << endl;
		/* Akan Dieksekusi Karena Array Data Hanya Memiliki 3 Elemen */
	}

	cout << "Baris Program Yang Terakhir" << endl;
	/* Penanda 2 : Bahwa Program Berjalan Tnpa Berhenti Meskipun Terjadi Kesalahan */
	return 0;
}