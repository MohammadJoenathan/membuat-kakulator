#include <iostream>

using namespace std;

int main()
{
    int panjang,lebar,tinggi,volume ;
    
    cout << "\t Hitung Volume Balok " <<endl; 
    
    cout << "Masukkan Panjang : " <<endl; 
	cin >> panjang;
    cout << "Masukkan Lebar : " <<endl; 
	cin >> lebar;
    cout << "Masukkan Tinggi : " <<endl; 
	cin >> tinggi;

    volume = panjang * lebar* tinggi;

//    cout << "panjang balok"<< panjang << endl;
//    cout << "lebar balok"<< lebar << endl;
//    cout << "tinggi balok"<< tinggi << endl;
    cout << "Volume Balok Adalah : "<< volume << endl;
    return 0;
}

