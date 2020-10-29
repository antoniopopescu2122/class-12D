#include <iostream>

using namespace std;

int main()
{
    int A[25][25], n;
    cout << "Carpe diem!" << endl;
    cout << "Numarul de linii si coloane al matricei este: ";
    cin >> n;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++) //completam cu zero diagonala principala
            A[ i ][ j] = 0;

    for(int i = 2; i <= n; i++)
        for(int j = 1; j <= i-1; j++) //completam sub diagonala princiala
            A[ i ][ j ] = n-j+1; //formula pt a scrie pe fiecare coloana nr ei

    for(int i = 1; i <= n-1; i++)
        for(int j = i+1; j <= n; j++) //completam deasupra de diagonala principala
            A[ i ][ j ] = n-j+1;//formula pt a scrie pe fiecare coloana nr ei

             cout << "Matricea rezultata este: " << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << A[i][j] << "  ";
        cout << endl;}
    return 1;
}
