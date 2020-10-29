#include <iostream>

using namespace std;

int main()
{
    int A[25][25], n, m;
    cout << "Carpe diem!" << endl;
    cout << "Numarul de linii al matricei este: ";
    cin >> n;
    cout << "Numarul de coloane al matricei este: ";
    cin >> m;

    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if(i<j) A[i][j]=j; //elementu ia valoarea cea mai mare dintre coloana si linia sa
            else A[i][j]=i;

             cout << "Matricea rezultata este: " << endl;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++)
            cout << A[i][j] << "  ";
        cout << endl;}
    return 1;
}
