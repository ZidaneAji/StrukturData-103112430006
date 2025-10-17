#include <iostream> 
#include "ugd3.h" 
using namespace std; 

int main() { 
    int A[3][3] = { 
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9} 
    }; 
    
    int B[3][3] = { 
        {10, 11, 12}, 
        {13, 14, 15}, 
        {16, 17, 18} 
    }; 
    
    int *ptr1, *ptr2; 
    
    cout << "Array A awal:" << endl; 
    tampilArray(A); 
    cout << "\nArray B awal:" << endl; 
    tampilArray(B); 
    
    tukarPosisi(A, B, 1, 2); 
    
    cout << "\nSetelah tukar posisi [1][2]:" << endl; 
    cout << "Array A:" << endl; tampilArray(A); 
    cout << "\nArray B:" << endl; 
    tampilArray(B); 

    int x = 100, y = 200; 
    ptr1 = &x; 
    ptr2 = &y; 

    cout << "\nSebelum tukar pointer:" << endl; 
    cout << "x = " << x << ", y = " << y << endl; 

    tukarPointer(ptr1, ptr2); 
    
    cout << "Setelah tukar pointer:" << endl; 
    cout << "x = " << x << ", y = " << y << endl; 
    
    return 0; 
}