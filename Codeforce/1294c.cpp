#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int check(int n){

    for (int i=2 ; i*i<=n ; i++){
        if (n%i==0){
                return i;
        }
        return 0;

    }
}

int main ()
{
    int testCase, n, x,a,b, ans=0, p, q,i;

    cin >> testCase ;

    while ( testCase-- ) {
            ans=0;
        cin >> n;

        for ( i=2; i*i*i <= n; i++){

            if (n%i==0){

                a = n/i ;

                for ( int j=2 ; j*j <= a ; j++){

                    if (a % j == 0){

                        p = a / j ;
                        q = j ;
                        if ( p != q && p!=i && q!=i){
                            ans = 1;
                            break;
                        }
                    }
                }
            }
                if (ans)
                    break;
            }

        if (ans){
                cout << "YES" << endl;
            cout<<i << " " << q << " " << p << endl;
        }

        else cout << "NO" << endl;
    }

}
