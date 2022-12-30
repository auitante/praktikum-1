#include <bits/stdc++.h>
using namespace std;

int bil; // variabel global
int cek(int); // prototype fungsi cek bilangan

main() // main program
{
	cout << "Masukkan bilangan integer : ";
	cin >> bil;
	
	if(cek(bil) == 1)
		cout << "Bilangan yang dimasukan adalah ganjil"; // mencetak ganjil
	else if(cek(bil) == 0)
		cout << "Bilangan yang dimasukan adalah genap";  // mencetak genap
}
// fungsi cek
int cek(int x)
{
	if(bil %2 == 0)
		return 0;
	else if(bil %2 == 1)
		return 1;
}

