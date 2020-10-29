#include <iostream>

using namespace std;

int main()
{
    int A[25][25], n, c=0;
    cout << "Carpe diem!" << endl;
    cout << "Numarul de linii si coloane al matricei este: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++){
              c++;
               if (c<10) A[i][j]= c; //formam matricea ca-n exemplu
                else {c=0; j--;}
                                    }
        for( int j = 1; j <= n; j++)
                    cout << A[1][j] << " "; //afisam linia intai

        for( int i = 2; i <= n; i++)
                    cout << A[i][n] << " "; //afisam coloana n

        for( int j = n-1; j >= 1; j--)
                    cout << A[n][j] << " "; //afisam linia n descrescator

        for( int i = n-1; i > 1; i--)
                    cout << A[i][1] << " "; //afisam coloana intai descrescator
    return 1;
}
