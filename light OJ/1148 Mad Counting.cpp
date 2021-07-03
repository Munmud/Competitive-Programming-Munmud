#include <bits/stdc++.h>
using namespace std ;

void _main_main()
{
    map <int,int>mp ;
    long long int x, n, ans = 0 ;

    cin >>n ;
    for (int i = 0 ; i<n ; i++) {
        cin >> x ;
        mp[x]++ ;
    }
    for (auto i : mp){
        ans+= ( ( i.second / (i.first+1) )  + (  i.second % (i.first+1)  !=0 ?  1 : 0) ) * (i.first+1) ; 
    }
    cout << ans << "\n" ;
}



int main ()
{
    int testCase = 1 ;cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
        
}
