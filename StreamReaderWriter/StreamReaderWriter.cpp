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
}