
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

struct node
{
    int time , st , ed , isIn ;
    node(int _time , int _st , int _ed , int _isIn) : time(_time) , st(_st) , ed(_ed) , isIn (_isIn) {}

    bool operator < (const node &bb) const {
        if (time  == bb.time) return isIn < bb.isIn ;
        return time < bb.time ;
    }
};

int n  ;
bool check(int n, vector<int>& sa, vector<int>& ea, vector<int>& sb, vector<int>& eb)
{
	multiset<int> s, e;
	vector<node> v;
 
	for (int i = 0; i < n; i++)
	{
		v.emplace_back(sa[i], sb[i], eb[i], 1);
		v.emplace_back(ea[i] + 1, sb[i], eb[i], 0);
	}
 
	sort(ALL(v));
 
	for (auto i : v)
	{
		if (i.isIn)
		{
			if (!s.empty())
			{
				int maxS = *s.rbegin();
				int minE = *e.begin();
 
				if (maxS > i.ed || minE < i.st)
					return false;
			}
 
			s.insert(i.st);
			e.insert(i.ed);
		}
		else
		{
			s.erase(s.find(i.st));
			e.erase(e.find(i.ed));
		}
	}
 
	return true;
}

void _main_main()
{
    cin >> n ;
    vector<int> sa(n), ea(n), sb(n), eb(n);
    FORN(i,n){
        cin >> sa[i] >> ea[i] >> sb[i] >> eb[i] ;
    }

    if (check(n, sa, ea, sb, eb) && check(n, sb, eb, sa, ea)) cout << "YES" << nl ;
    else cout << "NO" << nl ;


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
