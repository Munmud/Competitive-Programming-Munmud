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
    node *next[3] ;
    bool mark  ;
    node()
    {
        FORN(i,3) next[i] = NULL ;
        mark = false ;
    }
};
node *root ;
int sht(char ch) {
    return ch - 97 ;
}
string s ;

void addWord() 
{
    node *curr = root ;

    FORN(i,s.size())
    {
        int idx = sht(s[i]) ;
        if(!curr->next[idx] ){
            curr->next[idx] = new node() ;
        }
        curr = curr->next[idx] ;
    }
    curr->mark = true ;
}

bool check(node *curr , int pos , bool flag)
{
    if (pos == s.size())
    {
        if (flag == true && curr->mark) return true ;
        return false ;
    }

    int idx = sht(s[pos]) ;
    if (flag)
    { 
        if (curr->next[idx] != NULL && check(curr->next[idx] , pos+1 , flag)) return true ;
    }
    else {
        if (curr->next[idx] != NULL && check(curr->next[idx] , pos+1 , flag)) return true ;
        else {
            FORN(i,3)
            {
                if (i != idx && curr->next[i] != NULL && check(curr->next[i] , pos+1 , true)) return true ;
            }
        }

    }
    return false ;
}

void letsGetStarted()
{
    int n ,m  ;
    cin >> n >> m ;
    root  = new node() ;

    FORN(i,n){
        cin >> s ;
        addWord() ;
    }
    FORN(i,m)
    {
        cin >> s ;
        if (check(root , 0 , false)) cout <<"YES\n" ;
        else cout << "NO\n" ;
        
    }

}



int main ()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int testCase = 1 ;//cin >> testCase ;
    for (int i = 0; i < testCase; i++)
        letsGetStarted() ;
}
