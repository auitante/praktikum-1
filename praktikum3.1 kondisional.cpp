#include <iostream>
using namespace std;

int main(){
	
	long int uang, total;
	long double bunga;
	int bulan, i;
	cout << ">>>>> Program Menghitung Tabungan <<<<<" << endl;
	cout << "=======================================" << endl;
	cout << "Masukkan bulan : ";
	cin >> bulan;
	
	uang = 1000000;
	bunga = 0.02;
	
	
	for(i = 1; i <= bulan; i++)
	{
		bunga = uang * bunga;
		total = uang + bunga;
		for(i=2; i<= bulan; i++)
		{
			uang = total;
			bunga = uang * 0.02;
			total = uang + bunga;
		}
	}
	cout << "Uang Tabungan awal adalah \t: " << uang << endl;
	cout << "Bunga yang didapat adalah \t: " << bunga << endl;
	cout << "Total Tabungan akhir adalah \t: " << total << endl;
	
	cout << endl;
	cout << "======== Program Selesai =========";
}
