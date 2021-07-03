#include <bits/stdc++.h>
using namespace std ;

void _main_main()
{
    int n ;
    string s ;
    cin >> n >> s ;
    if(s == "Alice"){
        if (n%3 == 1) cout << "Bob\n" ;
        else cout << "Alice\n" ;
    }
    else {
        if (n%3 != 0) cout << "Bob\n" ;
        else cout << "Alice\n" ;
    }
}

int main ()
{
    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
}
