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
		cout << "jam kerja minggu ketiga = "; cin>> waktu[1];
		if (waktu[2]>40){
			gajiLembur=(waktu[2]-40)*1.5*gajiPerjam;
			gajiTotal[2]=(gajiPerminggu+gajiLembur)*0.85;
			gajiAwal=gajiPerminggu*0.85;
		}else{
			gajiTotal[2]=gajiPerminggu*0.85;
		}
		
}
