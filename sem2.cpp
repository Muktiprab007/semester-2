#include <iostream>

using namespace std;

int main (){
	string nama, kelas;
	int jumlah;
	jumlah = nama.length();
	
	float nilai;
	
	getline (cin, nama);
	cin >> kelas;
	cin >> nilai;
	
	cout << "Izin memperkenalkan diri nama saya " << nama <<  " dengan jumlah huruf " << nama.length() << ". Saya mahasiswa S1 Ilmu komputer dari kelas " << kelas << ". Nilai DDP saya adalah " << nilai<< ".";

	return 0;
}
