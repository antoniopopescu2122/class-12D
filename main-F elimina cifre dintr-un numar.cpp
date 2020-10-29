#include <iostream>
using namespace std;

int cifra (unsigned int a, unsigned int b)
{
    int m=1000; //numaru de cifre consecutive cautate
    int d=1;
    while (d <= a)
    {// cat timp restul impartirii la m poate fi impartit
        if((a%m)/d==b)
            a=(a/m)*d+a%d; // eliminam cifra respectiva
        d*=10;
        m*=10;
    }
    return a;
}

int main()
{
    cout << "Carpe diem!" << endl;
    int n,p;
    cin >> n >> p;
    cout << cifra(n,p);

    return 1;
}
