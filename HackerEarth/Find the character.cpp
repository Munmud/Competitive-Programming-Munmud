#include <bits/stdc++.h>
using namespace std ;
int main ()
{
	int test ;
	cin >> test ;
	for (int tt = 0 ; tt<test ; tt++)
	{
		string s ;
		int k ;
		cin >> s >> k ;
        // cout << s << " " << k << endl ;

		int n = s.size() ;
		vector <int> arr(n ,1) ;

		string t ;
		for (int i = 0 ; i<n ; i++){
			if ( i!=0) if( s[i] == s[i-1]) arr[i] = arr[i-1]+1 ;

			for (int j = 0 ; j<arr[i]-1 ; j++){
                t+=t ;
                if (t.size() >=200){
                    break ;
                }

            } 

			t+= s[i] ;
            if (t.size() >=200){
                break ;
            } 
		}
        if (k < t.size()) cout << t[k-1] << endl  ;
        else cout << -1 << "\n" ;
		

		

	}
}
