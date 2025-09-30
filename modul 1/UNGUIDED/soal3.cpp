#include <iostream>
using namespace std;

int main()
{
    int bilangan;
    cout << "Masukkan Angka: ";
    cin >> bilangan;

    for (int i = bilangan; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << "*";
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    cout << "*";
}