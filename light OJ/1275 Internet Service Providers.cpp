#include <bits/stdc++.h>
using namespace std ;

void _main_main()
{
    long long n,c ;
    cin >> n >> c ;

    if (n == 0) {
        cout << 0 << "\n" ;
        return ;
    }

    long long t1 = c / (2 * n) ;
    long long t2 = c / (2 * n) + 1 ;

    long long f1 = t1*(c-t1*n) ;
    long long f2 = t2*(c-t2*n) ;

    if (  f1 >= f2 ) cout << t1 << "\n" ;
    else cout << t2 << "\n" ;

}



int main ()
{

    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
        
}
