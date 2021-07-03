#include <bits/stdc++.h>
using namespace std ;


vector <long long> fact(21,0) ;

void _main_main()
{

    stack <int> q ;
    
    long long n ; cin >> n ;

    for (int i = 20 ; i>= 0 ; i--)
    {
        if (fact[i] <= n){
            n-= fact[i] ;
            q.push(i) ;
        }
    }

    if (n == 0){
        cout << q.top() << "!" ;
        q.pop() ;
        while (!q.empty())
        {
            cout << "+" << q.top() << "!" ;
            q.pop() ;
        }
    }
    else cout << "impossible" ;
    cout << "\n" ;

}



int main ()
{
    fact[0] = 1 ;
    for(int i=1; i<=20 ; i++ ) fact[i] = fact[i-1] *(long long)i ;
    
    
    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
        
}
