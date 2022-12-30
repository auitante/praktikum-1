#include<iostream>
using namespace std;

int main()
{
	
	cout << "========================================" << endl;
	cout << "Menentukan lama bekerja seorang pegawai" << endl;
	cout << "========================================" << endl;
	cout << endl;
	int jam_masuk, jam_pulang, lama_bekerja;
	
	cout << "Masukkan Jam masuk (1 - 12)" << endl;
	cout << "Jam : "; cin >> jam_masuk; 
	
	cout << "Masukkan Jam pulang (1 - 12)" << endl;
	cout << "Jam : "; cin >> jam_pulang; 
	cout << endl;
	
	if(jam_masuk >0 && jam_masuk <=12 && jam_pulang > 0 && jam_pulang <=12)
	{
		if (jam_masuk < jam_pulang){
			lama_bekerja = jam_pulang - jam_masuk;
			cout << "Lama bekerja : " <<lama_bekerja << " Jam" << endl;
			cout << "<<! KELAZZ !>>" << endl;
		}
		else {
			lama_bekerja = 12 - jam_masuk + jam_pulang;
			cout << "Lama bekerja : " <<lama_bekerja << " Jam" << endl;
			cout << "<<! KELAZZ !>>" << endl;
		}
	}
	else {
		
		cout << "Waktu yang diinputkan salah!!!";
	}
	cout << endl;
	cout << "===============" << endl;
	cout << "Program Selesai" << endl;
	cout << "===============" << endl;
	return 0;
}
