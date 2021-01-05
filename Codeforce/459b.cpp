#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n, min=INT_MAX , max=INT_MIN , x, ans = 0, cmin=0, cmax=0 ;

    cin >> n ;

    ans = 0 ;

    for (int i = 0 ; i < n ; i++ ) {
        cin >> x ;
        if ( min > x ){
            min = x ;
            cmin = 0 ;
        }

        if ( max < x ){
            max = x ;
            cmax = 0 ;
        }

        if ( min == x )
            cmin++;
        if ( max == x )
            cmax++;
        //cout <<x <<" " << cmin << " " << cmax << endl;
    }

    if (min==max)
        ans = n*(n-1)/2;
    else ans = cmin*cmax;


    cout << max - min << " " << ans << endl ;


}
