#include <iostream>
using namespace std;

int main()
{
	char nama ;
	float m, a, d, p, rara ,nilai ;
	
	cout << "\t -------------------------------- " <<endl;
    cout << "\t PROGRAM MENENTUKAN NILAI RATA  " <<endl;  
    cout << "\t 	  RATA DAN KELULUSAN  " <<endl;  
    cout << "\t -------------------------------- " <<endl;
    
    cout << "Masukkan Nama : "; cin>>nama;
	cout << "Masukkan Nilai Sistem Multimedia : "; cin>>a<<endl;
	cout << "Masukkan Nilai Algoritma dan Pemrograman	: "; cin>>a<<endl;
	cout << "Masukkan Nilai Sistem Digital				: "; cin>>d<<endl;
	cout << "Masukkan Nilai PTIK 						: "; cin>>p<<endl;
	
	rara = (m + a + d + p) / 4 ;
	cout << "Nilai Rata-Rata	: " <<rata <<endl;
	
	nilai -= 5 ;
	nilai = x++;
	cout << "Nilai	: " <<nilai <<endl;
	 
	if (nilai >=80 ) {
		cout <<"Kamu LULUS";
	}
	else if (nilai <=79 ) {
		cout <<"Kamu TIDAK LULUS";
	}
	return 0;
}


