// /* practice witi Dukkia */
// #include <bits/stdc++.h>
// using namespace std ;
 
// #define K	18
// #define M	100

// #define wa2(x , y)              cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
// #define wa(x)                   cout << (#x) << " is " << (x) << endl
 
// int main() {
// 	static int dd[K];
// 	static long long dp[1 << K][M];
// 	long long n;
// 	int m, i, k, b, r, used;

// 	// wa(dp[0][0]) ;
 
// 	scanf("%lld%d", &n, &m);
// 	k = 0;
// 	while (n > 0) {
// 		dd[k++] = n % 10;
// 		n /= 10;
// 	}
// 	used = 0;
// 	for (i = 0; i < k; i++)
// 		if (dd[i] != 0 && (used & 1 << dd[i]) == 0) {
// 			// wa2(i,used) ;
// 			used |= 1 << dd[i];
// 			// wa2(1<<i , dd[i]%m) ;
// 			dp[1 << i][dd[i] % m] = 1;
// 		}
// 	for (b = 0; b < 1 << k; b++)
// 		for (r = 0; r < m; r++) {
// 			long long x = dp[b][r];
 
// 			if (x != 0) {
// 				wa2(b,r) ;
// 				used = 0;
// 				for (i = 0; i < k; i++)
// 					if ((b & 1 << i) == 0 && (used & 1 << dd[i]) == 0) {
// 						used |= 1 << dd[i];
// 						dp[b | 1 << i][(r * 10 + dd[i]) % m] += x;
// 						wa2(b | 1 << i,(r * 10 + dd[i]) % m) ;
// 					}
// 			}
// 		}
// 	printf("%lld\n", dp[(1 << k) - 1][0]);
// 	return 0;
// }


/*
Moontasir Mahmood 
Information and Communication Engineering 
University of Rajshahi 
https://github.com/Munmud 
moontasir042@gmail.com 
 */


#include <bits/stdc++.h>

#define setinf(ar)              memset(ar,126,sizeof ar)
#define MEM(a, b)               memset ( a, (b), sizeof(a) )
#define MAX(a, b)               ((a) > (b) ? (a) : (b))
#define MIN(a, b)               ((a) < (b) ? (a) : (b))
#define ABS(X)                  ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X)                    ( (X) * (X) )
#define SZ(V)                   (int )V.size()
#define FORN(i, n)              for(int i = 0; i < n; i++)
#define FORAB(i, a, b)          for(int i = a; i <= b; i++)
#define ALL(V)                  V.begin(), V.end()
#define ALLR(V)                 V.rbegin(), V.rend()
#define IN(A, B, C)             ((B) <= (A) && (A) <= (C))
#define AIN(A, B, C)            assert(IN(A, B, C))

#define wa2(x , y)              cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa(x)                   cout << (#x) << " is " << (x) << endl
#define nl                      "\n"


#define ll                      long long int
#define xx                      first
#define yy                      second
#define pb(x)                   push_back(x)
#define PI                      acos(-1.0)

#define PII                     pair<int, int>
#define PLL                     pair<long long int, long long int>
#define VI                      vector <int>
#define VL                      vector <long long int>

#define BOUNDARY(i, j, r , c)   ((i >= 0 && i < r) && (j >= 0 && j < c))
#define max3(x, y, z)           MAX(MAX(x, y), MAX(y, z))

#define front_zero(n)           __builtin_clzll(n)
#define back_zero(n)            __builtin_ctzll(n)
#define total_one(n)            __builtin_popcountll(n)

using namespace std;


template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p ) {
	return os << "(" << p.first << ", " << p.second << ")";
}
template <class T>
ostream & operator << (ostream & os, vector <T> const& x) {
	os << "{ ";
	for(auto& y : x) os << y << " ";
	return os << "}";
}
template <class T>
ostream & operator << (ostream & os, set <T> const& x) {
	os << "{ ";
	for(auto& y : x) os << y << " ";
	return os << "}";
}
template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v ) {
	os << "[";
	typename multiset< T > :: const_iterator it;
	for ( it = v.begin(); it != v.end(); it++ ) {
		if( it != v.begin() ) os << ", ";
		os << *it;
	}
	return os << "]";
}
template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v ) {
	os << "[";
	typename map< F , S >::const_iterator it;
	for( it = v.begin(); it != v.end(); it++ ) {
		if( it != v.begin() ) os << ", ";
		os << it -> first << " = " << it -> second ;
	}
	return os << "]";
}
/*---------------------------------- x ------------------------------------*/

const ll MOD = 1e9+7 ;
const int N = 5050 ;

/*-----------------------Bitmask------------------*/
ll Set(ll N,ll pos){return N=N | (1<<pos);}
ll reset(ll N,ll pos){return N= N & ~(1<<pos);}
bool check(ll N,ll pos){return (bool)(N & (1<<pos));}
/*------------------------------------------------*/

ll arr[(1<<18)+5][105] ;
void _main_main()
{
	ll n ,m ;
	cin >> n >> m ;
	vector <ll> digit ;
	while (n){
		digit.pb(n%10) ;
		n/=10 ;
	}
	n = SZ(digit) ;


	ll mask = 0 ;
	FORN(i,n)
	{
		if (check(mask,digit[i])) continue ;
		if (digit[i] == 0) continue ; 
		mask = Set(mask , digit[i]) ;
		arr[1<<i][digit[i]%m] = 1 ;
		// wa2(1<<i,digit[i]%m) ;
	}

	for (ll i = 0 ; i< 1<<n ; i++) 
		for (ll j = 0 ; j<m ; j++)
			if (arr[i][j] !=0){
				// wa2(i,j) ;
				mask = 0 ;
				for (ll k = 0 ; k<n ; k++){
					// wa2( i & (1<<k), check(mask , digit[k])) ;
					if ( !(i & (1<<k)) && !check(mask , digit[k]) ){
						
						mask = Set(mask,digit[k]) ;
						arr[i | 1<<k][(j*10+digit[k])%m] += arr[i][j] ;
						// wa2(i | 1<<k,(j*10+digit[k])%m) ;
					}
				}
			}
	cout << arr[(1<<n) - 1][0] << nl ;

}



int main ()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int testCase = 1 ;//cin >> testCase ;
	for (int i = 0; i < testCase; i++){
		
		_main_main() ;
	}
		
}

