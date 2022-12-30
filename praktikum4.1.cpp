#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main(){
	
	cout << "===== TOKO SURYA =====" << endl;
	cout << endl;
	
	char barang[4][10] = {"Buku", "Pensil", "Bolpoin", "Penghapus"};
	string kode;
	int harga[4] = {5000, 3000, 4000, 2000};
	
	while(kode != "STOP" and kode != "stop"){
		cout << "Masukkan Kode : ";
		cin >> kode;
		cout << endl;
		
		if(kode == "001"){
			printf("Nama barang \t: %s \n", barang[0]);	
			printf("Harga barang \t: %d", harga[0]);
			cout << endl << endl;
		}
		else if(kode == "002") {
			printf("Nama barang \t: %s \n", barang[1]);
			printf("Harga barang \t: %d", harga[1]);
			cout << endl << endl;
		}
		else if(kode == "003") {
			printf("Nama barang \t: %s \n", barang[2]);
			printf("Harga barang \t: %d", harga[2]);
			cout << endl << endl;
		}
		else if(kode == "004") {
			printf("Nama barang \t: %s \n", barang[3]);
			printf("Harga barang \t: %d", harga[3]);
			cout << endl << endl;
		}else {
			cout << "Kode salah !!" << endl << endl;
		}
		
	}
	cout << "===== Program Selesai =====";
}
