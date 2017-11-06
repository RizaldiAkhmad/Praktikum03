#include <iostream>
using namespace std;

int main (){
	
	int luas,lebar,alas,tinggi;
	char bidang;
	cout << "jenis bidang (P atau S) ? ";cin>>bidang;
	
	if (bidang=='P'){
		cout << "Nilai Tinggi = "; cin>>tinggi;
		cout << "Nilai Lebar  = "; cin>>lebar;
		luas = tinggi*lebar;
		cout << "Luas Persegi Panjang Adalah" <<luas;
	}else if(bidang='S'){
		cout << "Nilai Alas   = ";cin >>alas;
		cout << "Nilai Tinggi = ";cin >>tinggi;
		luas=0.5*alas*tinggi;
		cout << "Luas Segitiga Adalah " <<luas;
	}
	
}
