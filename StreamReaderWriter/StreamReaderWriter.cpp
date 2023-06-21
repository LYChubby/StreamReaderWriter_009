#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string baris;

	// Membuka File Dalam Mode Menulis
	ofstream outfile;
	// Menunjuk Ke Sebuah Nama File
	outfile.open("ContohFile.txt");

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
}