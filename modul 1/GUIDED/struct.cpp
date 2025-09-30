#include <iostream>
using namespace std;

struct mahasiswa
{
    string nama;
    string NIM;
};

int main(){
    mahasiswa mhs;
    mhs.nama = "Zidane";
    mhs.NIM = "103112430006";

    cout << "Nama : "<< mhs.nama << endl 
    << "NIM :" << mhs.NIM;
}