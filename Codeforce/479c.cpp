#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main ()
{
    vector < pair <long long int, long long int> > v;
    vector < pair <long long int, long long int> >::iterator it;
    long long int testCase, x, y , ans;

    cin >> testCase ;

    while ( testCase-- ) {
        cin >> x >> y ;

        v.push_back( make_pair(x,y));
    }

    sort(v.begin(),v.end());

    it = v.begin();
    ans = it->second;

    for (++it; it!= v.end(); it++){
        if (it->second >= ans)
            ans = it->second;
        else ans = it->first ;
    }
        //cout << it -> first << " " << it -> second << endl;

        cout << ans ;
}
