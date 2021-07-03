#include <bits/stdc++.h>

using namespace std;

long long int s[ 100005 ] ;
int main ()
{
    long long int n , t , i , x , temp = 0 , j, ans=0 , again, point=0, biyog;
    cin >> n >> t ;

    s[ 0 ] = 0 ;

    for ( i = 1 ; i <= n ; i++ ) {
        again = 0;
        cin >> x ;
        temp += x ;

        s [ i ] = temp ;


        while (again == 0){
            biyog = s[i] - s[point];
            if ( biyog <= t ){
                if ( i - point > ans)
                    ans = i - point;
                again=1;
            }
            else point++;
        }
    }

    cout << ans << endl ;
}
