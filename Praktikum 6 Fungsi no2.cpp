#include <bits/stdc++.h>
using namespace std;

int sisi; 			// variabel global
int luas; 			// variabel global
int hasil=0; 		// variabel global
 
int bujursangkar(int);	// fungsi prototype
int total(int); 		// fungsi prototype

main() // fungsi main
{
	for(int i=1; i<=2; i++){
		cout << "Sisi bujursangkar ke-" << i << ": ";
		cin >> sisi;
		cout << "Luas sebuah bujur sangkar adalah = " << bujursangkar(sisi) << endl; 
	}
	cout << endl << "Total luas dari dua bujursangkar tsb = " << total(hasil);
}

// fungsi luas bujursangkar
int bujursangkar(int x)
{	
	luas = sisi * sisi;
	hasil += luas;
	return luas;
}

//fungsi total dua bujur sangkar
int total(int z)
{
	return hasil;
	
}
