#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris;
	string Namafile;

	cout << "Masukkan Nama File : ";
	cin >> Namafile;
	// Membuka File Dalam Mode Menulis
	ofstream outfile;
	// Menunjuk Ke Sebuah Nama File
	outfile.open(Namafile + ".txt", ios::out);

	cout << ">= Menulis File, \'q\' untuk keluar" << endl;

	// Unlimited Loop Untuk Menulis
	while (true) {
		cout << "- ";
		// Mendapatkan Setiap Karakter Dalam Satu Baris
		getline(cin, baris);
		// Loop Akan Berhenti Jika Anda Memasukkan Karakter q
		if (baris == "q") break;
		// Menilis Dan Memasukkan Nilai Dari "Baris" Ke Dalam File
		outfile << baris << endl;
	}
	// Selesai Dalam Menulis Sekarang Tutup Filenya
	outfile.close();

	// Membuka File Dalam Mode Membaca
	ifstream infile;
	// Menunjuk Ke Sebuah File
	infile.open(Namafile + ".txt", ios::in);

	cout << endl << ">= Membuka Dan Membaca File" << endl;
	// Jika File Ada Maka
	if (infile.is_open()) {

		// Melakukan Perulangan Setiap Baris
		while (getline(infile, baris)) {

			// Dan Tampilan Disini
			cout << baris << '\n';
		}
		// Tutup File Tersebut Setelah Selesai
		infile.close();
	}
	// Jika Tidak Ditemukan File Maka Akan Menampilkan Ini
	else cout << "Unable To Open File";
	return 0;
}