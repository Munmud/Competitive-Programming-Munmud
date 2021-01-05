#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <long long int> v;
    vector <long long int>::iterator it;

    long long int n , m , x , ans;

    cin >> n >> m ;

    for (int i = 0 ; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }

    sort ( v.begin() , v.end() );

    while ( m-- ) {
        cin >> x ;
         it = upper_bound(v.begin(),v.end(),x);
         ans = distance(v.begin(),it);
         cout << ans << " " ;
    }

}
