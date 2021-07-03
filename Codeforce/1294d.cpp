#include <bits/stdc++.h>
using namespace std;

int arr[400001], MEX=0, x;

int checkMex (int p){
    int temp = p % x ;

    if ( arr[temp] == -1 )
        return p;

    else if ( p > arr[temp]){
        return p;
    }
    else {
        p++;
        return checkMex(p);
    }

}


int main ()
{
    int n, q, temp ;

    memset(arr,-1,sizeof arr);

    cin >> n >> x ;

    while ( n-- ) {
        cin >> q;

        temp = q % x ;

        if ( arr[temp] == -1 ){
            arr[temp] = temp ;
        }
        else arr[temp] += x ;

        MEX=checkMex(MEX);

        cout << MEX << endl;
    }
}
