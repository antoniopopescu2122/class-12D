#include <iostream>
using namespace std;

int cifra (unsigned int n, unsigned short k)
{
    int deca=1;
    while (k > 0)
    { deca*=10; //formam zece la puterea k
        k--;
    }
    if(deca<10) return -1;
        else return (n%deca)/(deca/10); //afisam elementul de la rangu k
}

int main()
{
    cout << "Carpe diem!" << endl;
    int n,k;
    cin >> n >> k;
    cout << cifra(n,k);

    return 1;
}
