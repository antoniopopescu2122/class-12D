#include<iostream>
#include<cstring>
using namespace std;
int i,nr;
char s[255],a[130][255],*p;
int main()
{
    cin.get(s,255);
    cin.get();
    nr=0;
    *p=strtok(s,'*');
    while(p != NULL) //formez vectorul de cuvinte
    {
        nr++;
        strcpy(a[nr],p);
        *p=strtok(NULL,'*');
    }
    strcpy(s,"*"); //s[0]='*' si s[1]=NULL ,formatez vechiul sir
    for(i=2; i<=nr; i++)
        if(strcmp(a[1],a[i])==0)
            strcat(s,"*"); //ignor cuvantul de eliminat
        else
        {
            strcat(s,a[i]); // adaug restu la noul sir
            strcat(s,"*");
        }
cout<<s;
return 0;
}
