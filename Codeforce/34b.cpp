#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main ()
{
    int n , m , *p, x, ans = 0 ;

    cin >> n >> m ;

    p = new int[n+1];

    for ( int i = 0 ; i < n ; i++ ) {
        cin >> x ;
        p [i] = x;
    }

    sort (p,p+n);

    for ( int i = 0 ; i < m ; i++ ) {
        if (p[i] < 0 ){
            if ( ans + p[i] <=m)
                ans += p[i];
        }
        else break;
    }
    ans = abs(ans);

    cout << ans << endl ;

}
