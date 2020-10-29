#include <iostream>

using namespace std;

int main()
{
    int A[25][25], n, m, c=1;
    cout << "Carpe diem!" << endl;
    cout << "Numarul de linii al matricei este: ";
    cin >> n;
    cout << "Numarul de coloane al matricei este: ";
    cin >> m;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++){
           if ((c*c) %2 == 1) //verific daca patratu e impar
                A[i][j]= c*c; //il formez
           else
                j--; //daca e par, raman pe pozitie pt urmatorul
           c++;}

             cout << "Matricea rezultata este: " << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << A[i][j] << "  ";
        cout << endl;}
    return 1;
}
