#include <bits/stdc++.h>
using namespace std;


// --------------  Start Here -------------

vector <int> primeNumber ;
void sieve(int n)
{
    bool primeMark[1000002] ;
    memset(primeMark , true , sizeof(primeMark) ) ;
    int i , j , limit = sqrt(n*1.) +2 ;
    //primeMark[1] = false ;
    //for (i = 4 ; i<=n ; i+=2) primeMark[i] = false ;

    primeNumber.emplace_back(2) ;
    for (i = 3 ; i<=n ; i+=2)
    {
        if (primeMark[i] == false) continue ;
        primeNumber.emplace_back(i) ;
        if (i<=limit){
            for (j = i*i ; j<=n ; j+=i*2)
                primeMark[j] = false ;
        }
    }
}


// ----------- End here ----------------



int main ()
{
    sieve(100) ;
    for (auto i : primeNumber) cout << i << " " ;
}