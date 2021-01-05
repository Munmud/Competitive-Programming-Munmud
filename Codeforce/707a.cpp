#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int testCase,n,ans=0;
    char x,y;
    cin>>testCase>>n;
    getchar();
    while (testCase--){
        for(int i=0;i<n;i++){
            x=getchar();
            y=getchar();
            if (x=='M' || x=='Y' || x=='C' || y=='M' || y=='Y' || y=='C' )
                ans=1;
                //cout<<x<<" "<<" "<<ans<<endl;
        }
    }
    if (ans) cout<<"#Color"<<endl;
    else cout<<"#Black&White"<<endl;
}
