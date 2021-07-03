#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long int

ll binarySearch(ll arr[], ll l, ll r, ll x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;


        if (arr[mid] == x)
            return mid;


        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);


        return binarySearch(arr, mid + 1, r, x);
    }


    return -1;
}

int main ()
{
    ll testCase,n,s,k,i,*p,x,ans,y;
    cin>>testCase;

    while (testCase--){
        cin>>n>>s>>k;

        p=new ll[k];

        for (i=0;i<k;i++){
            cin>>x;
            p[i]=x;
        }

        sort(p,p+k);
        ans=0;
        for(i=0;;i++){
            x=s+i;
            y=s-i;

            if (x<=n)
                ans=binarySearch(p,0,k-1, x);
            if (ans==-1)
                break;
            if(y>=1)
                ans=binarySearch(p,0,k-1, y);
            if (ans==-1)
                break;
        }
        cout<<i<<endl;



    }
}
