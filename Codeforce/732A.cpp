#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,temp,temp2,n;
    cin>>a>>b;

    int i=1;
    while(true){
        n=a*i;
        if(n%10==0 || n%10==b)
            break;
        i++;
    }
    cout<<i<<endl;

}
