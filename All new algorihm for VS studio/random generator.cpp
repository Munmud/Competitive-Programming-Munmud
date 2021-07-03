#include <bits/stdc++.h>
using namespace std ;

unsigned seed1 = std::chrono::system_clock::now().time_since_epoch().count();
default_random_engine gen(seed1); //gen(time(NULL));

int randd(int a , int b)
{
    std::uniform_int_distribution<int> dis(a, b );
    return dis(gen) ;
}

long long randd(long long a , long long b)
{
    std::uniform_int_distribution<long long> dis(a, b );
    return dis(gen) ;
}


long double randd(long double a , long double b)
{
    std::uniform_real_distribution<long double> dis(a, b );
    return dis(gen) ;
}

typedef pair<int,int> PII ;
#define FORN(i,n) for (int i = 0 ; i<n ; i++)

int main ()
{
    // long long a = 1 , b = 20 ;
    // for (int i = 5 ; i<20 ; i++) cout << randd( a, b) << " "  ;
    // long double c = 1 , d = 10 ;
    // for (int i = 5 ; i<20 ; i++) cout << randd( c, d) << " "  ;

    // cout << 1 << "\n" ;

    // int n = randd( 1, 20) ;
    // int m = randd( 1, 10) ;
    // cout << n << " " << m<< endl ;

    



}