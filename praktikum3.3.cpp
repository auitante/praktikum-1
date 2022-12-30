#include <iostream>
using namespace std;

int main(){
	
	float nilai, jum_data, max, min, mean, total;
	int i;
	
	cout << "=================================" << endl;
	cout << "Masukkan jumlah data mahasiswa : ";
	cin >> jum_data;
	
	cout << endl;
	
	for (i = 1; i<= jum_data; i++)
	{
		cout << "Nilai ke " << i << " : ";
		cin >> nilai;
		total += nilai;
		
	if (i == 1)
	{
		min = nilai;
		max = nilai;
	}else if (min > nilai){
		min = nilai;
	}else if (max < nilai){
		max = nilai;
	}else{}
	
	}
	mean = total / jum_data;
	cout << endl;
	cout << "Nilai minimal adalah \t: " << min << endl;
	cout << "Nilai maximal adalah \t: " << max << endl;
	cout << "Nilai rata-rata adalah \t: " << mean << endl;
	
	cout << endl;
	cout << "===== Program Selesai =====";
}
