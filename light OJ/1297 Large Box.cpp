#include <bits/stdc++.h>
using namespace std; 
void _main_main()
{
    double l,w ; cin >> l >> w ;

    double x1 = ( 2*(w+l) + sqrt( 4*(w+l)*(w+l) - (12*w*l) ) ) /12 ;
    double x2 = ( 2*(w+l) - sqrt( 4*(w+l)*(w+l) - (12*w*l) ) ) /12 ;

    double mx1 = 4* pow(x1,3) - 2*pow(x1,2)*(w+l) + w*l*x1 ;
    double mx2 = 4* pow(x2,3) - 2*pow(x2,2)*(w+l) + w*l*x2 ;

    cout << fixed << setprecision(10) << max(mx1,mx2) << "\n";
}

int main ()
{
    int testCase = 1 ;cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
}
