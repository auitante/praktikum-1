#include <bits/stdc++.h>
using namespace std;

int frekuensi(int temu, char cari); // prototype fungsi 

char kalimat[50]; // variabel global
char cari; // variabel global
int temu=0;

main(){
	printf("Masukan kalimat (50 char) : ");scanf("%[^\n]",kalimat);
	printf("Masukan huruf yang dicari : ");scanf("%s",&cari);
	
	frekuensi(temu, cari);
}

// fungsi frekuensi
int frekuensi(int temu, char cari)
{
	for(int i=0;kalimat[i]!='\0';i++) {
		if(cari == kalimat[i]) temu++; }
	if (temu!=0)
		printf("\nTerdapat sebanyak %d huruf '%c' dari kalimat diatas ! ",temu,cari);
	else
		printf ("\nHuruf yang diminta tidak ditemukan pada kalimat diatas ! ");
}
