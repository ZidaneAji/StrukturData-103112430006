#include <iostream> 
#include "ugd2.h" 
#include "ugd2.cpp" 
using namespace std; 

int main() { 
    string namapel = "Struktur Data"; 
    string kodemapel = "STD"; 
    pelajaran pel = create_pelajaran(namapel, kodemapel); 
    tampil_pelajaran(pel); 
    
    return 0;
}