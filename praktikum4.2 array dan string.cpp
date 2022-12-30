#include<iostream>
#include<string.h>

using namespace std;

int main(){
	
	cout << "Program Berjalan " << endl;
	cout << "Ketik STOP / stop untuk berhenti!? " << endl;
	cout << endl;
	
	string nama;
	int data = 0;
	
	while(nama != "STOP" and nama != "stop") {
		cout << "Rapor Siswa/i : ";
		cin >> nama;
		if(nama != "STOP" and nama !="stop") {
			data++;
			cout << "Siswa ke : " << data << endl;
		}
	}
	cout << endl;
	
	int nilai[data][5];
	for(int i = 0; i < data; i++) {
		cout << "Nilai Siswa/i ke " << i+1 << endl;
		for(int j = 0; j < 5; j++) {
			cout << "Nilai Pelajaran ke" << j+1 << " : ";
			cin >> nilai[i][j];
		}
		cout << endl;
	}
	
	int total[data][5];
	for(int i = 0; i < data-1; i++) {
		for(int j = 0; j < 5; j++) {
			total[i][j] = nilai[i][j] + nilai[i+1][j];
		}
	}
	
	for(int i = 0; i < data-1; i++) {
		for(int j = 0; j < 5; j++) {
			cout << "Rata rata Pelajaran ke " << j+1 << " : " << (total[i][j])/2;
			cout << endl;
		}
	}
	
}
