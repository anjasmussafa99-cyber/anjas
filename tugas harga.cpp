#include <iostream>

using namespace std;

int main()
{
	double harga, diskon, jumlahDiskon, hargaSetelahDiskon;

	cout << "Masukkan :" << endl;
	cout << "Harga Barang (Rp) = " << endl;
	cin >> harga;

	cout << "Diskon barang (%) = ";
	cin >> diskon;

	jumlahDiskon = harga * (diskon / 100);

	hargaSetelahDiskon = harga - jumlahDiskon;

	cout << "\hasil :" << endl;
	cout << "jumlah diskon		= Rp" << jumlahDiskon << endl;
	cout << "harga setelah diskon = Rp" << hargaSetelahDiskon << endl;
	return 0;
}
