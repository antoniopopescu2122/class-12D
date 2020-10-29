#include<iostream>
#include<cstring>
using namespace std;
int i=1;
char s[255];
int main()
{
    cin.get(s,255);
    cin.get();
    if(s[0]!=' ')
        s[0]-=32;
    while(i <= strlen(s))
    {   if(s[i]!=' ')
            if((s[i+1]==' ') || (s[i-1]==' '))
                s[i]-=32;
        i++;}
    if(s[strlen(s)-1]!=' ')
        s[strlen(s)-1]-=32;
cout<<s;
return 0;
} //
