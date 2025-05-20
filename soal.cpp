#include<iostream>
#include<string>
using namespace std;

class Barang {
  private:
        int kodeBarang;
        string namaBarang;

    public : 
        Barang(int kode, string nama){
            kodeBarang = kode;
            namaBarang = nama;
        }
 
        
void cetak(){

    cout << endl << "Kode Barang = "<<kodeBarang << endl;
    cout << endl << "Nama Barang= "<<namaBarang << endl;

    }
};


int main() {
    Barang brg(006, "Sound Horeg");
    brg.cetak();
    return 0;
}
