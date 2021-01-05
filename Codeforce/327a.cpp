#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector <int> one,zero;

    int n,x,i,j,temp,left,right,k,l,total,ans=INT_MIN;
    cin>>n;

    for (i=1;i<=n;i++){
        cin>>x;
        if (x==0)zero.push_back(i);
        else one.push_back(i);
    }
    if(n==1){
        if (x==0)
            cout<<1<<endl;
        else cout<<0<<endl;
        return 0;
    }
    if (!zero.size()){
        cout<<n-1<<endl;
        return 0;
    }
    else if (zero.size()==1){
        cout<<n<<endl;
        return 0;
    }

    for(i=0;i<zero.size()-1;i++){
        for(j=i;j<zero.size();j++){
            temp=j-i+1;
            left=0;
            right=0;
            for(k=0;k<one.size();k++){
                if (one[k]<zero[i])
                    left++;
                if (one[k]>zero[j])
                    right++;
            }
            total=temp+left+right;
            if (total>ans)
                ans=total;

        }
    }
        cout<<ans<<endl;



}
