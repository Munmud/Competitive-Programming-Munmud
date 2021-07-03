#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n, i, space, j;

    cin >> n ;

    n++;

    space = n;

    while ( space-- ){
        for ( i = 0 ; i < space ; i++ ){
            cout << " " << " " ;
        }


        for (i=0; i < n-space && space != n-1 ;i++){
            cout << i << " ";
        }
        for (i-=2;i>0;i--){
            cout << i << " ";
        }

        cout << 0 ;

        //cout << "space = " << space;


        cout << endl;

    }
    //cout << space;
    space++;

    while (space<n-1){
        space++;
        for ( i = 0 ; i < space ; i++ ){
            cout << " " << " " ;
        }


        for (i=0; i < n-space && space != n-1 ;i++){
            cout << i << " ";
        }
        for (i-=2;i>0;i--){
            cout << i << " ";
        }

        cout << 0 ;
        cout << endl;
    }
}
