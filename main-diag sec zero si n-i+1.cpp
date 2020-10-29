#include <iostream>

using namespace std;

int main()
{
    int A[25][25], n;
    cout << "Carpe diem!" << endl;
    cout << "Numarul de linii si coloane al matricei este: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
            A[ i ][ n-i+1 ] = 0;

    for(int i = 2; i <= n; i++)
        for(int j = n-i+2; j <= n; j++)
            A[ i ][ j ] = n-i+1;

    for(int i = 1; i <= n-1; i++)
        for(int j = 1; j <= n-i; j++)
            A[ i ][ j ] = n-i+1;

             cout << "Matricea rezultata este: " << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << A[i][j] << "  ";
        cout << endl;}
    return 1;
}
