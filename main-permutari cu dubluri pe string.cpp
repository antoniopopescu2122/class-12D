#include <bits/stdc++.h>
using namespace std;

void permute(string a, int l, int r)
{
    if (l == r)
        cout<<a<<endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {

            // Swapping done
            swap(a[l], a[i]);

            // Recursion called
            permute(a, l+1, r);

            //backtrack
            swap(a[l], a[i]);
        }
    }
}

// Driver Code
int main()
{  cout << "Carpe diem!" << endl << endl;
    int a;
    cin>>a;
    string str ;
    stringstream ss;
    ss<<a;
    ss>>str;
    cout<<endl;
    int n = str.size();
    permute(str, 0, n-1);
    return 0;
}
