/*
                     Moontasir Mahmood
          Information And Communication Engineering
                  University Of Rajshahi

                  https://github.com/Munmud
                  moontasir042@gmail.com
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp> 
#include <ext/pb_ds/detail/standard_policies.hpp>

#define setinf(ar)          memset(ar,126,sizeof ar)
#define MEM(a, b)           memset ( a, (b), sizeof(a) )
#define CLR(a)              memset(a, 0, sizeof(a))
#define MAX(a, b)           ((a) > (b) ? (a) : (b))
#define MIN(a, b)           ((a) < (b) ? (a) : (b))
#define ABS(X)              ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X)                ( (X) * (X) )
#define SZ(V)               (int )V.size()
#define FORN(i, n)          for(int i = 0; i < n; i++)
#define FORAB(i, a, b)      for(int i = a; i <= b; i++)
#define ALL(V)              V.begin(), V.end()
#define ALLR(V)             V.rbegin(), V.rend()
#define IN(A, B, C)         ((B) <= (A) && (A) <= (C))
#define AIN(A, B, C)        assert(IN(A, B, C))

#define wa2(x , y)          cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa(x)               cout << (#x) << " is " << (x) << endl

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>
#define VL                  vector <long long int>
#define BOUNDARY(i, j, row , column)      ((i >= 0 && i < row) && (j >= 0 && j < column))
#define max3(x, y, z)       MAX(MAX(x, y), MAX(y, z))

#define sf(a)               scanf("%lld",&a)
#define sff(a,b)            scanf("%lld %lld", &a , &b)
#define pf(a)               printf("%lld\n",a)
#define pff(a,b)            printf("%lld %lld\n", a , b)

#define front_zero(n)       __builtin_clzll(n)
#define back_zero(n)        __builtin_ctzll(n)
#define total_one(n)        __builtin_popcountll(n)

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> new_data_set; 

// new_data_set p; 
//p.insert(5);
//p.insert(2);
//p.insert(6);
//p.insert(4);
// p.find_by_order(3); // 6
// p.order_of_key(7) //4

#define SIZE                (int)5005
#define MOD                 1000000007

struct node
{
    node * next[10] ;
    bool end ;
    node()
    {
        FORN(i,10) next[i] = NULL ;
        end = false ;
    }
};

void addWord(string &s , node * root)
{
    node * curr = root ;
    for(int i = 0 ; i<s.size() ; i++)
    {
        int id = s[i] - 48 ;
        if (!curr->next[id]) curr->next[id] = new node() ;
        curr = curr->next[id] ; 
    }
    curr->end = true ;
}
bool jjj = false ;

void check(node * curr , bool state)
{
    if (curr->end && state) {
        jjj = true ;
    }
    if (curr->end) state = true ;


    FORN(i,10){
        if (curr->next[i]){
            check(curr->next[i] , state  ) ;
        }
    }
    delete(curr) ;
}

int testCase ;

void letsGetStarted()
{
    node * root = new node() ;
    int n  ;
    cin >> n ;
    jjj = false ;

    FORN(i,n)
    {
        string s ;
        cin >> s ;
        addWord(s , root) ;
    }
    check(root , false) ;
    cout << (jjj ? "NO\n" : "YES\n") ;

    

}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> testCase ;
    for (int i = 1; i <= testCase; i++){
        cout << "Case " << i << ": " ;letsGetStarted() ;
    }
        
}
