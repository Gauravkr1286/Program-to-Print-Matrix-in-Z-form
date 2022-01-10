//Welcome to my profile @Gauravkr1286
// CPP program to print a square matrix in Z form 
#include <bits/stdc++.h> 
using namespace std; 
const int MAX = 100; 
  
// Function to print a square matrix in Z form 
void printZform(int mat[][MAX], int n) 
{ 
    // print first row 
    for (int i = 0; i < n; i++) 
        cout << mat[0][i] << " "; 
  
    // Print diagonal 
    int i = 1, j = n - 2; 
    while (i < n && j >= 0) 
    { 
        cout << mat[i][j] << " "; 
        i++; 
        j--; 
    } 
  
    // Print last row 
    for (int i = 1; i < n; i++) 
        cout << mat[n - 1][i] << " "; 
} 
  
// Driver function 
int main() 
{ 
    int mat[][MAX] = { { 4, 5, 6, 8 }, 
                       { 1, 2, 3, 1 }, 
                       { 7, 8, 9, 4 }, 
                       { 1, 8, 7, 5 } }; 
    printZform(mat, 4); 
    return 0; 
}

