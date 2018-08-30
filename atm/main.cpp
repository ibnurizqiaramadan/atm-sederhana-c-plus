#include <iostream>
#include <string> 
using namespace std;
using std::string;

int pilihan; 			//variable pilihan
double saldo = 10000; 	//saldo awal
double inputsaldo; 		//variable jumlah input saldo

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

string header(string menu = ""){
	if (menu == ""){ //jika variable menu kosong maka diisi oleh "Utama"
		menu = "Utama"; //mengisi variable menu 
	}
	cout << "Selamat Datang dimenu " << menu << "\n\n"; //menampilkan "Selamat Datang dimenu <menu>)"
	return menu;
}

//function infoSaldo
infoSaldo(){ 
	system("cls"); //untuk clear layar
	header("Infotmasi Saldo"); //menampilkan "Selamat Datang dimenu Informasi Saldo"
	cout.precision(17); //set maksimal digit ke 17
	cout << "Sisa Saldo Anda : Rp. " << saldo << "\n\n";
	system("pause"); //untuk menghentikan proses sementara
	return 0;
}

//function tambahSaldo
tambahSaldo(){
	system("cls"); //untuk clear layar
	header("Tambah Saldo"); //menampilkan "Selamat Datang dimenu Tambah Saldo"
	cout << "Masukan Jumlah Saldo : Rp. ";
	cin >> inputsaldo; //inputan Saldo
	saldo += inputsaldo; //proses jumlah Saldo
	cout << "Berhasil menambahkan . . .\n\n";
	system("pause"); //untuk menghentikan proses sementara
	return 0;
}

//function tarikSaldo
tarikSaldo(){
	system("cls"); //untuk clear layar
	header("Tarik Saldo"); //menampilkan "Selamat Datang dimenu Tarik Saldo"
	cout << "Masukan Jumlah Saldo : Rp. ";
	cin >> inputsaldo; //inputan jumlah saldo
	if (inputsaldo > saldo){ //proses validasi jika jumlah inputan saldo lebih besar dari sisa saldo makan tidak akan bisa tarik saldo
		cout << "Jumlah Saldo tidak cukup . . .\n\n"; 
	} else {
		saldo -= inputsaldo; //proses tarik saldo
		cout << "Berhasil menarik Saldo . . .\n\n";
	}
	system("pause"); //untuk menghentikan proses sementara
	return 0;
}

int main(int argc, char** argv){
	do { //akan mengulang sebelum user menginputkan '0'
		system("cls"); //untuk clear layar
		header(); //menampilkan "Selamat Datang dimenu Utama"
		cout << "1. Informasi Saldo\n";
		cout << "2. Tambah Saldo\n";
		cout << "3. Tarik Saldo\n";
		cout << "0. Keluar\n\n";
		cout << "Pilihan : ";
		cin >> pilihan; //inputan untuk pilihan
		switch (pilihan){ //penyeleksian pilihan
			case 1: //jika inputan '1' maka menuju function infoSaldo
				infoSaldo(); //function infoSaldo
				break; //untuk menghentikan penyeleksian
			case 2: //jika inputan '2' maka menuju function tambahSaldo
				tambahSaldo(); //function tambahSaldo
				break; //untuk menghentikan penyeleksian
			case 3: //jika inputan '3' maka menuju function tarikSaldo
				tarikSaldo(); //function tarikSaldo
				break; //untuk menghentikan penyeleksian
		}
	} while (pilihan != 0); //akan mengulang sebelum user menginputkan '0'
	return 0;
}
