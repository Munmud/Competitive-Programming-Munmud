#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n, x, y, low=INT_MAX, ans=0 ;

    cin >> n;

    while ( n-- ) {
        cin >> x >> y ;
        if ( y < low ) low = y ;
        ans += low * x ;
    }

    cout << ans << endl;
}
