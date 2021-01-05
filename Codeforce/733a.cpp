#include<bits/stdc++.h>
#include <string.h>
int temp=0,x,ma=0,i;
void check(char x)
{
    if (x=='A' || x=='E' || x=='I' || x=='O' || x=='U' || x=='Y'){
            temp++;
            if (ma<temp)
                ma=temp;
                temp=0;
        }
        else{
                temp++;
        }
}
using namespace std;
int main()
{
    char s[101],x;
    cin>>s;

    int len=strlen(s);
    check('A');
    for (i=0;i<len;i++)
    {
        x=s[i];
        check(x);
    }
    check('A');

    cout<<ma<<endl;
}
