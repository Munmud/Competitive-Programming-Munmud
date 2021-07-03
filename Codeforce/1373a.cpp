#include <bits/stdc++.h>
using namespace std ;

int main()
{
    int testCase = 1 ;cin >> testCase ;
    for(int tes=1; tes<=testCase ; tes++ ){
        long long a , b  , x , c  , cost1 , cost2 , ans1 , ans2;
        cin >> a >> b >> c ;
        if (a<c) ans1 = 1 ;
        else ans1 = -1 ;
        if (b*a > c) ans2 = b ;
        else ans2 = -1 ;

        cout << ans1 << " " << ans2 << endl ;

    }
}
