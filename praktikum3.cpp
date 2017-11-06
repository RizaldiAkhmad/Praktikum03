#include <iostream>
using namespace std;

int main(){
	
	int gajiPerjam = 15000, gajiPerminggu =850000;	
	int waktu[3],gajiLembur,gajiAwal,gajiTotal[4];
	cout << "jam kerja minggu pertama = "; cin>> waktu[0];
	if (waktu[0]>40){
			gajiLembur=(waktu[0]-40)*1.5*gajiPerjam;
			gajiTotal[0]=(gajiPerminggu+gajiLembur)*0.85;
			gajiAwal=gajiPerminggu*0.85;
		}else{
			gajiTotal[0]=gajiPerminggu*0.85;
		}
		cout << "jam kerja minggu kedua = "; cin>> waktu[1];
		if (waktu[1]>40){
			gajiLembur=(waktu[1]-40)*1.5*gajiPerjam;
			gajiTotal[1]=(gajiPerminggu+gajiLembur)*0.85;
			gajiAwal=gajiPerminggu*0.85;
		}else{
			gajiTotal[1]=gajiPerminggu*0.85;
		}
		cout << "jam kerja minggu ketiga = "; cin>> waktu[2];
		if (waktu[2]>40){
			gajiLembur=(waktu[2]-40)*1.5*gajiPerjam;
			gajiTotal[2]=(gajiPerminggu+gajiLembur)*0.85;
			gajiAwal=gajiPerminggu*0.85;
		}else{
			gajiTotal[2]=gajiPerminggu*0.85;
		}
		cout << "jam kerja minggu keempat = "; cin>>waktu[3];
		if (waktu[3]>40){
			gajiLembur=(waktu[3]-40)*1.5*gajiPerjam;
			gajiTotal[3]=(gajiPerminggu+gajiLembur)*0.85;
			gajiAwal=gajiPerminggu*0.85;
			cout << endl << "--------[ GAJI AWAL & PAJAK ]--------" << endl;
			cout << "INFO : " << endl;
			cout << "Gaji Awal(+Pajak) = " << gajiAwal << endl;
			cout << "Pajak tiap Karyawan = 15%" << endl;
			cout << endl << "---------[ GAJI BERSIH ]--------" << endl;
			cout << "Gaji Bersih Minggu Pertama = " << gajiTotal[0] << endl;
			cout << "Gaji Bersih Minggu Kedua   = " << gajiTotal[1] << endl;
			cout << "Gaji Bersih Minggu Ketiga  = " << gajiTotal[2] << endl;
			cout << "Gaji Bersih Minggu Keempat = " << gajiTotal[3] << endl;
			gajiTotal[4]=gajiTotal[0]+gajiTotal[1]+gajiTotal[2]+gajiTotal[3];
			cout << "Gaji Bersih Bulan Ini      = " << gajiTotal[4];
		}else{
			gajiTotal[3]=gajiPerminggu*0.85;
			cout << endl << "--------[ GAJI AWAL & PAJAK ]--------" << endl;
			cout << "INFO : " << endl;
			cout << "Gaji Awal(+Pajak) = " << gajiAwal << endl;
			cout << "Pajak tiap Karyawan = 15%" << endl;
			cout << endl << "---------[ GAJI BERSIH ]--------" << endl;
			cout << "Gaji Bersih Minggu Pertama = " << gajiTotal[0] << endl;
			cout << "Gaji Bersih Minggu Kedua   = " << gajiTotal[1] << endl;
			cout << "Gaji Bersih Minggu Ketiga  = " << gajiTotal[2] << endl;
			cout << "Gaji Bersih Minggu Keempat = " << gajiTotal[3] << endl;
			gajiTotal[4]=gajiTotal[0]+gajiTotal[1]+gajiTotal[2]+gajiTotal[3];
			cout << "Gaji Bersih Bulan Ini      = " << gajiTotal[4];
		}
		
}
