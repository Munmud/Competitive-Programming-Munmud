#include <bits/stdc++.h>

#define ll          long long int
#define xx          first
#define yy          second
#define pii         pair<int,int>
#define pll         pair <long long int,long long int>
#define all(x)      x.begin(),x.end()

#define pb(x)       push_back(x)
#define ppb(x)      pop_back(x)
#define pf(x)       push_front(x)
#define ppf(x)      pop_front(x)

#define sv(a)       sort(a.begin(),a.end())
#define zero(arr,a) memset(arr,a,sizeof arr)

using namespace std;

long long int price [200005] ;


int  main (void){

    vector < pair<long long int, long long int > > one, two, three ;
    vector < pair<long long int,long long int > >::iterator it1 , it2 , it3 ;

    long long int n , i, x, testcase ;

    cin >> n ;

    for ( i = 0 ; i < n ; i++ ) {

        cin >> x ;

        price[i] = x ;
    }
    for ( i = 0 ; i < n ; i++ ) {

        cin >> x ;

        if ( x == 1 )
            one.push_back( { price[i] , i } );
        else if ( x == 2 )
            two.push_back( { price[i] , i } );
        else three.push_back( { price[i] , i } );
    }
    for ( i = 0 ; i < n ; i++ ) {

        cin >> x ;

        if ( x == 1 )
            one.push_back( { price[i] , i } );
        else if ( x == 2 )
            two.push_back( { price[i] , i } );
        else three.push_back( { price[i] , i } );
    }

    sort(one.begin(),one.end());
    sort(two.begin(),two.end());
    sort(three.begin(),three.end());

    it1 = one.begin();
    it2 = two.begin();
    it3 = three.begin();

    cin >> testcase ;

    while ( testcase-- ) {

        cin >> x;

        if ( x == 1 ) {

                if ( it1 != one.end()){
                    while( it1 != one.end()) {

                        if (price[ it1->second ]) {

                            price [ it1->second ] = 0;
                            cout << it1->first << " ";
                            it1++;
                            break;
                        }
                        else it1++;if (it1 == one.end())cout << "-1" << " " ;
                    }

                }



                else cout << "-1" << " " ;

        }
        else if ( x == 2 ) {

                if ( it2 != two.end()) {
                    while ( it2 != two.end()) {
                        if (price[ it2->second ]){
                            price [ it2->second ] = 0;
                            cout << it2->first << " ";
                            it2++;
                            break;
                        }
                        else it2++;if (it2 == two.end())cout << "-1" << " " ;
                    }

                }


                else cout << "-1" << " " ;
        }
        else {
                if ( it3 != three.end()){
                    while ( it3 != three.end()) {
                    if (price[ it3->second ]){
                        price [ it3->second ] = 0;
                        cout << it3->first << " ";
                        it3++;
                        break;
                    }
                    else it3++;
                    if (it3 == three.end())cout << "-1" << " " ;
                }

                }

                else cout << "-1" << " " ;

        }
    }



}
