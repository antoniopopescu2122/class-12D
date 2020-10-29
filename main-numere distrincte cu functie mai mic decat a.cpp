#include <iostream>
using namespace std;
int sub(int v[100],unsigned short n, int a)
{
    int nr=0;
    for(int i=1; i<=n; i++)
        if(v[i]<a)
            nr++;
    return nr;

}
int main()
{ cout << "Carpe diem!" << endl << endl;
    int v[100],n,ok=0,i;
    cin>>n;
    for (i=1; i<=n; i++)
        cin>>v[i];
    for (i=1; i<=n-1; i++)
        for (int j=i+1; j<=n; j++)
            if (v[i]>v[j])
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    for (i=1; i<=n-1; i++)
        if(sub(v,n,v[i])==sub(v,n,v[i+1]))
            ok=1;
    if(ok==1)
        cout<< "NU";
    else cout<< "DA";
    return 0;
}
