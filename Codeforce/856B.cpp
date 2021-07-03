
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

#define MAXN 1000005
#define INF 1000000000
#define MOD1 1000000007
#define MOD2 1000000009

ll n,t;
struct node
{
	ll hash,pre,len;
}a[MAXN];
string str ;
bool cmp(node x,node y)
{
	return x.len>y.len;
}
 
void _main_main()
{
    ll tt=0;
		cin >> n ;
		set<ll> s;
		for(ll i=0;i<n;++i)
		{
			cin >> str ;
			ll len=str.size();
			ll s1=0,s2=0,s3=0,s4=0;
			for(ll j=0;j<len;j++)
			{
				s1=(s1*97+str[j])%MOD1;
				s2=(s2*97+str[j])%MOD2;
				if(j>0) 
				{
					s3=(s3*97+str[j])%MOD1;
				 	s4=(s4*97+str[j])%MOD2;
				 	a[tt].pre=s3*MOD1+s4;
				}
				else a[tt].pre=-1;
				a[tt].hash=s1*MOD1+s2;
				s.insert(a[tt].hash);
				a[tt].len=j;
				tt++;
			}
		}   
		sort(a,a+tt,cmp);
		for(ll i=0;i<tt;i++)
			if(s.count(a[i].hash)) s.erase(a[i].pre);
		cout << s.size() << nl ;
 
}
 
 
 
int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        
        _main_main() ;
    }
        
}