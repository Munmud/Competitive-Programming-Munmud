#include <bits/stdc++.h>
using namespace std ;

struct node
{
    node * next[26] ;
    bool end ;
    node()
    {
        for (int i = 0 ; i<26 ; i++) next[i] = NULL ;
        end = false ;
    }
}*root ;

int from[1005] ;
string s ;

void add()
{
    node* curr = root ;
    for (int i = 0 ; i<s.size() ; i++)
    {
        int id = s[i]-'a' ;
        if (!curr->next[id]) curr->next[id] = new node() ;
        curr= curr->next[id] ;
    }
    curr->end  = true ;
}

bool go(int i )
{
    
    if (i == s.size()) return true ;
    if (from[i] == 0) return false ;
    // cout << i << endl ;

    node * curr = root ;
    
    for (int j = i ; j<s.size() ; j++ )
    {
        int id = s[j]-'a' ;
        if (!curr->next[id]){
            from[i] = 0 ;
            return false ;
        } 
        curr = curr->next[id] ;
        if (curr->end && go(j+1) ) return true ;
    }
    from[i] = 0 ;
    return false ;
    
}

int main()
{
    int tt ; cin >> tt ;
    // cout << tt << endl ;
    while (tt--)
    {
        
        int n ; cin >> n ;
        root = new node() ;
        
        while (n--)
        {
            cin >> s ;
            add() ;
            // cout << s << endl ;
        }
        memset(from , -1 , sizeof(from) ) ;
        cin >> s ;
        if (go(0)) cout << 1 << endl ;
        else cout << 0 << endl ;
    }
    
}