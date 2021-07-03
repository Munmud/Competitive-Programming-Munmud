#include <bits/stdc++.h>
using namespace std;

int main (void){
    char s[200001];
    cin >> s ;

    int n, x, y, a, b, ans=0, arr[100002], c ;

    arr [0] = 0;
    c= strlen(s);

    for ( int i = 1 ; i < c ; ++i) {

        if ( s[i-1] == s[i] ){
            ans++;
        }
        arr[i] = ans;
    }

    cin >> n ;

    while ( n-- ){

        cin >> x >> y ;
        cout << arr[y-1] - arr[x-1] << endl ;

    }

}
