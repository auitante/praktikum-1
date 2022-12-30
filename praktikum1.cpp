#include<iostream> // include adalah file header. istream mengontrol fungsi input dan ostream mengontrol fungsi output

using namespace std; //library

int main(){
	
	cout<<"========== Program Mencari Nilai Akhir =========="<<endl;
	cout<<endl;
	
	//deklarasi tipe data yang digunakan pada variabel
	float partisipasi, tugas, uts, uas, NILAI_AKHIR; 
	
	//proes input dan output
	cout<<"Masukkan nilai partisipasi = "; cin>>partisipasi;
	cout<<"Masukkan nilai tugas = "; cin>>tugas;
	cout<<"Masukkan nilai uts = "; cin>>uts;
	cout<<"Masukkan nilai uas = "; cin>>uas;
	
	cout<<endl;
	
	
	//rumus 
	NILAI_AKHIR = 0.2* partisipasi + 0.3* tugas + 0.2* uts + 0.3* uas;
	
	// cetak nilai akhir
	cout<<"NILAI AKHIR = "<<NILAI_AKHIR<<endl;
	
	
	// mencetak nilai huruf menggunakan kondisi
	if (NILAI_AKHIR >= 90 ){
		cout<<"Nilai Huruf = "<<'A';
	} 
	else if (NILAI_AKHIR >= 80  ){
		cout<<"Nilai Huruf = "<<'B';
	} 
	else if (NILAI_AKHIR >= 70 ){
		cout<<"Nilai Huruf = "<<'C';
	}
    else if (NILAI_AKHIR >= 60 ){
		cout<<"Nilai Huruf = "<<'D';
	} 
	else {
		cout<<"Nilai Huruf = "<<'E';
	}
	
	
	cout<<endl;
	cout<<endl;
	cout<<"========== Program Selesai ==========";
	
}
