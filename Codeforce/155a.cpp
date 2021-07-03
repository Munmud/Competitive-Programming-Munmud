#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int testCase,n,min,max,amazingNumber=0;
    cin>>testCase;
    cin>>n;
    min=max=n;
    testCase-=1;
    while (testCase--)
    {
        cin>>n;
        if (n>max)
        {
            max=n;
            amazingNumber++;
        }
        else if (n<min)
        {
            min=n;
            amazingNumber++;
        }
    }
    cout<<amazingNumber<<endl;
}
