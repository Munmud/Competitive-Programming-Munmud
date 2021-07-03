// #include <bits/stdc++.h>
// #include <set>
// #include <map>
// #include <vector>
// #include <iterator>
// using namespace std;

// int main (){
//     int testCase, n, x, y, l, r, ans;
//     multiset <pair< int, int > > s;
//     multiset < pair<int, int > >::iterator it;

//     cin >> testCase;

//     while ( testCase-- ){

//         cin >> n;

//         ans=1;

//         while ( n-- ) {

//             cin >> x >> y ;
//             s.insert ( make_pair( x , y ) );
//         }

//         it = s.begin() ;
//         r = it->second ;

//         for(++it ; it != s.end() ; it++ ){
//             //cout<< it->first << " " << it->second << endl;
//             if (it -> second < r){
//                 ans=0;
//                 break;
//             }else r = it->second;
//         }
//         r=0;
//         l=0;

//         if (ans){
//             cout << "YES" <<endl;
//             for( it = s.begin() ; it != s.end() ; it++ ){

//                 if (it->first >l){
//                     while(l != it->first){
//                         cout << "R" ;
//                         l++;
//                     }

//                 }
//                 if (it->second >r){
//                     while(r != it->second){
//                         cout << "U" ;
//                         r++;
//                     }
//                 }
//             }
//             cout << endl;


//         }
//         else cout << "NO" << endl;
//         s.clear();
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string str ;
    int cnt = 0 ;
	
	// Unlimited Input
	while(getline(cin, str))
	{
        cnt++ ;
        cout << cnt << endl ;

        // Initial State
		int st = 1 ;
		for (int i = 0 ; i<str.size() ; i++)
		{
            // একটা একটা করে ক্যারেক্টার প্রিন্ট করছি

			if (str[i] == 34)
			{
				if (st == 1) cout << (char)96<< (char)96 ;
				else cout << (char)39 << (char)39 ;
				
				st = (st==1 ? 2 : 1) ; // Change State 1 to 2 or 2 to 1
            }
			else cout << str[i] ;

		}
	}
	return 0;
}

 
