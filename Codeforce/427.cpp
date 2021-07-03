#include <bits/stdc++.h>

using namespace std;
int main ()
{
    int n,crime=0,available_police=0,x;
    cin>>n;


    for (int i=0;i<n;i++)
    {
        cin>>x;
        if (x==-1)
        {
            if (available_police)
            {
                available_police--;
            }
            else crime++;
        }
        else available_police+=x;
    }

    cout<<crime<<endl;

}
