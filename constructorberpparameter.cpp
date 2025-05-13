#include<iostream>
#include<string>
using namespace std;

class mahasiswa {
    public:
        mahasiswa(int nim, string nama);
};

mahasiswa::mahasiswa(int nim, string nama) {
    cout << "Constructor Dengan Parameter Terpanggil" << endl;
    cout << "NIM  : " << nim << endl;
    cout << "NAMA : " << nama << endl;
}

int main() {
    mahasiswa mhs(12345, "Pascal");
}
