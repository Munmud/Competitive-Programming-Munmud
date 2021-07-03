
#include <bits/stdc++.h>
using namespace std ;


long long num , k ;
long long solve ( long long n )
{
    if (n == 1) return 1 ;
    return ( solve(n-1) + k -1 ) %n +1 ;
}

void _main_main()
{
    cin >> num >> k ;
    cout << solve(num) << "\n" ;
}



int main ()
{
    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
        
}
