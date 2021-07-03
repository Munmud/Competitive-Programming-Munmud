#include <bits/stdc++.h>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> s;
    vector <int>::iterator it,ir;
    int shopNumber,x,n,temp;
    cin>>shopNumber;
    //s.insert(0);
    for(int i=0;i<shopNumber;i++){
            cin>>x;
        s.push_back(x);
    }
    sort(s.begin(),s.end());
    cin>>n;

    while (n--){
        cin>>x;
        it= upper_bound(s.begin(),s.end(),x);

        temp=distance(s.begin(),it);

        cout<<temp<<endl;
    }


}
