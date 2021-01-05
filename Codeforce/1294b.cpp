#include <bits/stdc++.h>
#include <set>
#include <map>
#include <vector>
#include <iterator>
using namespace std;

int main (){
    int testCase, n, x, y, l, r, ans;
    vector <pair< int,int> > s;
    vector <pair< int,int> >::iterator it;

    cin >> testCase;

    while ( testCase-- ){

        cin >> n;

        ans=1;

        while ( n-- ) {
            cin >> x >> y ;
            s.push_back ( make_pair( x , y ) );
        }

        sort(s.begin(),s.end());
        it = s.begin() ;
        r = it->second ;

        for(++it ; it != s.end() ; it++ ){
            if (it -> second < r){
                ans=0;
                break;
            }
            else r = it->second;
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
