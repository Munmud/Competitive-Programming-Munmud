#include <bits/stdc++.h>
using namespace std;
int minV(int a, int b)
{
    if (a<=b)
        return a;
    else return b;
}

int main ()
{
    int testCase,l=0,r=0,u=0,d=0,minx,miny,ans;
    char s[100001];
    cin>>testCase;
    while (testCase--){
            ans=0;
        cin>>s;
        l=r=d=u=0;

        for(int i=0;i<strlen(s);i++){
            if (s[i]=='L')
                l++;
            else if (s[i]=='R')
                r++;
            else if (s[i]=='U')
                u++;
            else if (s[i]=='D')
                d++;
        }
        minx=minV(l,r);
        miny=minV(u,d);
        if (minx==0 && miny==0){
            l=0;
            r=0;
            u=0;
            d=0;
        }
        else if (minx==0 || miny==0){
            if(minx==0){
                u=1;
                d=1;
                l=0;
                r=0;
            }
            else{
                l=1;
                r=1;
                u=0;
                d=0;
            }
        }
        else{
            l=minx;
            r=minx;
            u=miny;
            d=miny;
        }
        ans=l+r+u+d;
        cout<<ans<<endl;
        /*cout<<"ans="<<ans<<endl;
        cout<<"minx="<<minx<<endl;
        cout<<"miny="<<miny<<endl;


        cout<<"l="<<l<<endl;
        cout<<"r="<<r<<endl;
        cout<<"u="<<u<<endl;
        cout<<"d="<<d<<endl;*/

        if (ans==2){
                if (minx)cout<<"LR"<<endl;
                else cout<<"UD"<<endl;

        }
        else if (ans){
            while(l--)
                cout<<"L";
            while(u--)
                cout<<"U";
            while(r--)
                cout<<"R";
            while(d--)
                cout<<"D";
                cout<<endl;

        }

    }
}
