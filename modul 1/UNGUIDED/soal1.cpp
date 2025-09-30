#include <iostream>
using namespace std;
int main()
{
    float bilangan1, bilangan2;

    cout << "Masukkan Bilangan Pertama: ";
    cin >> bilangan1; 
    cout << "Masukkan Bilangan Kedua: ";
    cin >> bilangan2; 

    cout << "Penjumlahan : " << bilangan1 + bilangan2 << "\n"; 
    cout << "Pengurangan : " << bilangan1 - bilangan2 << "\n"; 
    cout << "Perkalian : " << bilangan1 * bilangan2 << "\n";
    cout << "Pembagian : " << bilangan1 / bilangan2 << "\n";
}