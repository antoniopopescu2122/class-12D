#include <iostream>
using namespace std;
int n;
int f(int a)
{
    int d=2,s=0;
    while(a>1)
    {
        int p=0;
        while(a%d==0)
        {
            a/=d;
            cout<<d<<endl;
            p++;
        }
        s+=p;

        d++;
    }
return s;
}
    int main()
    {
        cout << "Carpe diem!" << endl << endl;
        cin>>n;
        int x,y,z;
        if(n<10)
            if(f(n)==1)
                cout<<"DA";
            else cout<<"NU";
        else if(n<100)
                if(f(n%10*10+n/10)==1 && f(n)==1)
                    cout<<"DA";
                else cout<<"NU";
             else if(n<1000){
                   int x=n/100, y=(n/10)%10, z=n%10;
                    if(   f(x*100+y*10+z)==1
                       && f(x*100+z*10+y)==1
                       && f(z*100+y*10+x)==1
                       && f(z*100+x*10+y)==1
                       && f(y*100+z*10+x)==1
                       && f(y*100+x*10+z)==1)
                            cout<<"DA";
                    else cout<<"NU";}
        return 0;
    }
