#include <iostream>
using namespace std;

int main(){
	int detik, percepatan, jarak, i;
	
	jarak = 2;
	percepatan = 1;
	
	cout << "~~~~~ Program Menghitung Jarak ~~~~~" << endl;
	cout << "------------------------------------" << endl;
	cout << endl;
	
	cout << "Masukkan detik : ";
	cin >> detik;
	for (i = 0; i<= detik; i++)
	{
		if(i%10 == 0)
		{
			jarak += percepatan;
		}
		
	}
	cout << "Kecepatan Jarak yang ditempuh adalah : ";
	cout << jarak << "m/det." << endl;
	
	cout << endl;
	cout << "======== Program Selesai ========";
}
