#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
    vector <long long int> v;
    long long int n, i, j, k, temp=0, a=0, b=1, ans=0 ;

    cin >> n;

    v.push_back(a);
    v.push_back(b);

    while ( temp < n) {

        temp = a + b ;
        a = b;
        b = temp;
        v.push_back( temp );
    }

    for ( i=0 ; i < v.size() ; i++ ){

        for ( j=i ; j < v.size() ; j++ ) {

            for ( k=i ; k < v.size() ; k++ ) {

                if ( v[i] + v[j] + v[k] == n){

                    ans=1;
                    break;
                }
            }
            if (ans) break;
        }
        if (ans) break;
    }
    if(ans){
        cout << v[i] << " " << v[j] << " " << v[k] << endl;
    }
    else cout << "I'm too stupid to solve this problem" << endl;
}
