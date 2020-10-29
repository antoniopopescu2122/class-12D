#include <iostream>
using namespace std;
int cif(unsigned int a, unsigned short b)
{
    int ab=0;
    while(a>0)
    {
        if(a%10==b)
            ab++;
        a/=10;
    }
    return ab;
}

int main()
{   cout << "Carpe diem!" << endl << endl;
    int n,i=0,cap=0, m;
    cin>>n;
    m=n;
//avand opt cifre, tre sa aiba fiecare cifra de un numar par de ori pt a fi palindrom
    while(i<10)
    {
        if(cif(n,i)%2==1)
        {
            cout<<"zero"<<endl; //nu este palindrom
            i=18;
        }
        else i++;
    }
    int t=0;
//formez numarul maxim din cifrele rearanjate
    if(i==10)
    {
        i=1;
        while(i<10)
        {
            m=n;
            t=0;
            while(m>0)
            {
                if(m%10==i)
                {
                    cap=cap*10+i;
                    t++; //numar de cate ori apare cifra
                }
                m/=10;
            }
            if(t==2) //tai cifrele ce vor aparea in oglinda
                cap/=10;
            else if(t==4)
                cap/=100;
            else if(t==6)
                cap/=1000;
            else if(t==8)
                cap/=10000;
            i++;
        }
    }
    m=cap; //formez palindromul ce permite cifra zero
    for(i=1; i<=4; i++)
    {
        cap=cap*10+m%10;
        m/=10;
    }
    cout<<cap<<endl<<endl;
    cout<<"im done.. next time ill choose the easy way.."<<endl;
    return 666;
}
