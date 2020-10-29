#include <iostream>
using namespace std;

int main()
{
    cout << "Carpe diem!" << endl;
    int x, y, t=10, deca1=1,deca2=1, m;
    cin >> x >> y;
    m=x;
    while (m/10 > 0)
    {
        m/=10;
        deca1*=10;
    }
    m=y;
    while (m/10 > 0)
    {
        m/=10;
        deca2*=10;
    }
        m=0;
    while (deca1 > 0 && deca2 > 0)
        if((x/deca1)==(y/deca2))
        {
            m=x/deca1;
            deca1/=10;
            deca2/=10;
        }
        else deca1=0;
    cout << m;
    return 1;
} //faci inversu si compari*
