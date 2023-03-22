#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;

struct akbar{
	char kode_tiket;
	int jumlah;
	char j_film[10];
};
struct permana{
	int kodemember, bayar, kembalian;
	int harga, total, total_bayar;
	float diskon;
	akbar a;
};

main(){
	permana data;
	int pilih;
	do{
		cout << "\t PROGRAM PEMBELIAN TIKET BIOSKOP" << endl;
		cout << "===================================" << endl;
		cout << "Input Kode Tiket [A/B/C]\t:";
		cin >> data.a.kode_tiket;
		cout << "Input Jumlah Tiket yang dibeli\t:";
		cin>> data.a.jumlah;
		cout << "Input Kode Member[1 Bronze/2 Silver/3 Gold]\t\t:";
		cin >> data.kodemember;
		cout << "\tINVOICE" << endl;
		cout << "====================================" << endl;
		cout << "Jenis Film\t\t";data.a.kode_tiket;
		if(data.a.kode_tiket){
			cout << "Action" << endl;
		} else if (data.a.kode_tiket){
			cout << "Horror" << endl;
		} else if(data.a.kode_tiket){
			cout << "Cartoon" << endl;
		}
		cout << "Jenis Member\t\t: "; data.kodemember;
		if(data.kodemember==1){
			cout << "Bronze" << endl;
		} else if(data.kodemember==2){
			cout << "Silver" << endl;
		} else if (data.kodemember==3){
			cout << "Gold" << endl;
		}
		cout << "Jumlah Tiket yang Dibeli:" << data.a.jumlah<<endl;
		if(data.a.kode_tiket){
			data.harga =75000;
			cout << "Harga tiket\t\t: " << data.harga<<endl; 
		} else if(data.a.kode_tiket){
			data.harga = 50000;
		}else if(data.a.kode_tiket){
			data.harga = 35000;
			cout << "Harga Tiket\t\t: " << endl;
		}
		data.total = data.a.jumlah *data.harga;
		cout << "Total Harga\t\t: " << data.total<<endl;
		if(data.kodemember){
			data.diskon = data.total*10/100;
			cout << "Diskon\t\t\t: " << data.diskon<<endl;
		}else if(data.kodemember){
			data.diskon = data.total*5/100;
			cout << "Diskon\t\t\t: " << data.diskon<<endl;
		} else if (data.kodemember){
			data.diskon = data.total*2/100;
			cout << "Diskon\t\t\t" << data.diskon << endl;
		}
		data.total_bayar = data.total - data.diskon;
		cout  << "Total Bayar\t\t: " << data.total_bayar << endl;
		cout << "Bayar\t\t\t";
		cin >> data.bayar;
		data.kembalian = data.bayar - data.total_bayar;
		cout << "kembalian\t\t: " << data.kembalian<<endl;
		
		cout << "Ingin bertransaksi lagi? tekan 1 jika YA tekan 2 jika tidak:";
		cin >> pilih;
		cout << ""<<endl;
	}
	while (pilih==1);{
		cout << "Terimakasih";
	}
}
