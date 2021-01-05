#include <bits/stdc++.h>
#include <set>
#include <map>
#include <vector>
#include <iterator>
using namespace std;

int main (){
    int testCase, n, x, y, l, r, ans;
    multiset <pair< int, int > > s;
    multiset < pair<int, int > >::iterator it;

    cin >> testCase;

    while ( testCase-- ){

        cin >> n;

        ans=1;

        while ( n-- ) {

            cin >> x >> y ;
            s.insert ( make_pair( x , y ) );
        }

        it = s.begin() ;
        r = it->second ;

        for(++it ; it != s.end() ; it++ ){
            //cout<< it->first << " " << it->second << endl;
            if (it -> second < r){
                ans=0;
                break;
            }else r = it->second;
        }
        r=0;
        l=0;

        if (ans){
            cout << "YES" <<endl;
            for( it = s.begin() ; it != s.end() ; it++ ){

                if (it->first >l){
                    while(l != it->first){
                        cout << "R" ;
                        l++;
                    }

                }
                if (it->second >r){
                    while(r != it->second){
                        cout << "U" ;
                        r++;
                    }
                }
            }
            cout << endl;


        }
        else cout << "NO" << endl;
        s.clear();
    }
}
