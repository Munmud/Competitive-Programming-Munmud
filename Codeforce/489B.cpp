#include <bits/stdc++.h>
#include <queue>

using namespace std;

int main ()
{
    priority_queue <int> boy,girl;
    int boyN,girlN,x,i,team=0,a,b;

    cin>>boyN;
    for(i=0;i<boyN;i++){
        cin>>x;
        boy.push(x);
    }

    cin>>girlN;
    for (i=0;i<girlN;i++){
        cin>>x;
        girl.push(x);
    }
    //cout<<boy.empty()<<endl;
    while(!boy.empty() && !girl.empty())
    {
        b=boy.top();
        a=girl.top();
        //cout<<a<<" "<<b<<endl;
        if (a-b==1 || b-a==1){
            team++;
            boy.pop();
            girl.pop();
        }
        else if(a>b){
            girl.pop();
        }
        else if(a<b){
            boy.pop();
        }
        else if (a==b){
            team++;
            boy.pop();
            girl.pop();
        }
    }

    cout<<team<<endl;

}
