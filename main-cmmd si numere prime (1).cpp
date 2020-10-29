#include <iostream>

using namespace std;

int f(unsigned int a)
{
    int d = 2, ok = 0;
    while (ok == 0)
    {
        if (a%d == 0)
            ok = 1;
        else d++;
    }
    if (d != a) return d; //gaseste divizor, return d
    else return 0; //altfel return 0 in caz ca divizorul este chiar numarul(inseamna ca e prim)
}

int main()
{
    cout << "Carpe diem!" << endl << endl;
    int n, v[100];
    cout << "Numarul de elemente ale vectorului este: ";
    cin >> n;
    cout << "Iar acestea sunt: " << endl ;

    for (int i = 1; i <= n; i++)
    {
        cout << "v[" << i << "]=";
        cin >> v[i];  //citim vectorul
        cout << " iar cel mai mic divizor neprim al acestui element este: ";
        if (f(v[i])==0) cout << "inexistent";
        else cout << f(v[i]);
        cout << endl << endl;
    }

    for (int i = 1; i <= n; i++)
    {
        if (f(v[i]) != 0)//daca gasim divizori
            for (int j = i; j < n - 1; j++)   //stergem elementul care nu e prim din vector
            {
                v[j] = v[j + 1];
            }
        n--; //scadem nr de elemente la fiecare stergere
    }

    for (int i = 1; i <= n-1; i++)
    {
        for (int j = i+1; j <= n ; j++)
            if (v[i] > v[j])  //ordoneaza crescator in functie de elementu v[i]
            {
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    }
    for (int i = 1; i <= n; i++)   //afisam numerele din vector
    {
        cout << "numar prim este: ";
        cout << v[i] << endl;
    }

    return 1;
}
