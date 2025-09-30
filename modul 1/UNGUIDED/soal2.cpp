#include <iostream>
#include <string>
using namespace std;

int main()
{
    string angkaSatuan[] = {"", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan"};
    string angkaAwal[] = {"Nol", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh"};

    int masukkan;
    cout << "Masukkan angka dengan range 0-100: ";
    cin >> masukkan;

    if (masukkan == 100)
    {
        cout << "Seratus";
    }
    else if (masukkan >= 20)
    {
        int puluhan = masukkan / 10;
        int satuan = masukkan % 10;

        cout << angkaSatuan[puluhan] << " Puluh";

        if (satuan > 0)
        {
            cout << " " << angkaSatuan[satuan];
        }
        cout << endl;
    }
    else if (masukkan >= 11)
    {
        cout << angkaAwal[masukkan - 10] << " Belas";
    }
    else
    {
        cout << angkaAwal[masukkan];
    }
}