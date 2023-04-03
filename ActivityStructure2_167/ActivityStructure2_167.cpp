#include <iostream>

using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;

};

struct Mahasiswa {
	string nim;
	string nama;
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs;

	cout << "Masukkan Nim: ";
	cin >> mhs.nim;

	cout << "Masukkan nama: ";
	cin >> mhs.nama;
	cout << "Alamat: ";
	cout <<"\tNama desa: ";
	cin >> mhs.alamat.desa;
	cout << "\tNama kota: ";
	cin >> mhs.alamat.desa;
	cout << "Masukkan umur: ";
	cin >> mhs.umur;

	cout << "\nNim :" << mhs.nim;
	cout << "\nnama :" << mhs.nama;
	cout << "\ndesa :" << mhs.alamat.desa;
	cout << "\nkota :" << mhs.alamat.kota;
	 
}