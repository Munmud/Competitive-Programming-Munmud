
#include <bits/stdc++.h>
#include <vector>
#include <iterator>
using namespace std;

int two[10001];
int main ()
{

    vector <int> one;
    vector <int>::iterator it,ir;

    int n,testCase,x,y,t,i,found;
    cin>>n>>testCase;
    while (testCase--){
            cin>>x>>y;
                                if (x==1){
                                for(it=one.begin();it!=one.end();it++){
                                    if (*it==y){
                                        one.erase(it);
                                        found=1;
                                        break;
                                    }
                                }
                                if (!found)
                                    one.push_back(y);

            }
            else{
                                if (two[y])
                                        two[y]=0;
                                else two[y]=1;
            }
            for(it=one.begin();it!=one.end();it++)
                cout<<*it<<" ";

        t=1;

        for(it=one.begin();it!=one.end();it++){
            x=*it;
            cout<<x;
            if (x==n){
                if(two[x-1]==1){
                    t=0;
                    break;
                }
            }
            if (two[x]==1 || two[x-1]==1 || two[x+1]==1){
                t=0;
                break;
            }

        }

        if (t)
            cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }


}
