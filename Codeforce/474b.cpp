#include <bits/stdc++.h>
using namespace std;

int s[100005];

int binarySearch ( int l , int r , int x ) {

    int mid = (l + r )  / 2 ;

    if ( s[mid] == x )
        return mid;
    else if ( s[mid] > x  && s[mid-1] < x )
        return mid;
    else if ( s[mid] > x )
        return binarySearch( l , mid - 1 , x ) ;
    else return binarySearch( mid + 1 , r , x ) ;


}

int main ()
{
    int n, x, temp = 0, testCase, ans, i ;

    cin >> n;

    s[0]=0;

    for ( i = 1 ; i <= n ; i++ ) {
        cin >> x ;
        temp += x;
        s[i] = temp ;
    }

    s[i] == INT_MAX ;

    cin >> testCase ;

    while ( testCase-- ){

        cin >> x ;

        ans = binarySearch( 0 , n , x );

        cout << ans << endl ;
    }
}
