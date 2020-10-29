#include <iostream>
#include <fstream>

using namespace std;
int putere (int a, int b){
    int c=b;
    while (c<=a)
        c*=b;
    return c/b;
}
int main()
{
cout << "Carpe diem!" << endl;
    int n, x, y ,z;
    fstream fin ("date.in");
    fstream fout ("date.out");
   fin >> n;
while (!fin.eof()){
    fin >> x >> y >> z;
    if(putere (y, z) < x)
        fout << "zero" << endl;
    else
        fout << putere (y, z) << endl;
   }
    return 1;
}
