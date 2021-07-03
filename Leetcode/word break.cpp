#include <bits/stdc++.h>
using namespace std ;

struct node
{
    node * next[26] ;
    bool end ;
    node()
    {
        for (int i = 0 ; i<26 ; i++)
            next[i] = NULL ;
        end = false ;
    }
};
class Solution {
    node * root ;
    vector <int> dp ;
    int n ;
public:
    void addWord(string &s)
    {
        node * curr = root ;
        for (int i = 0 ; i<s.size() ; i++)
        {
            int id = s[i] - 'a' ;
            if (!curr->next[id]) curr->next[id] = new node() ;
            curr = curr->next[id] ;
        }
        curr->end = true ;
    }
    bool check(int i , node *curr , string &s)
    {
        if (i == n) return true ;
        if (dp[i] == 0) return false ;
        
        int from = i ;

        while (i < n && curr->next[s[i]-'a'])
        {
            curr = curr->next[s[i]-'a'] ;
            if (curr->end && check(i+1,root,s))
                return true ;
            i++ ;
        }
        
        dp[from] = 0 ;
        return false ;
        
        
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        root = new node() ;
        
        for (string ss : wordDict) addWord(ss) ;
        n = s.size() ;
        dp.resize(n,-1) ;
        
        if (check(0,root,s)) return true ;
        return false ;
    }
};

int main ()
{
    vector <string> p {"leet" , "code"} ;
    Solution tt ;
    cout << "ans = " << tt.wordBreak("leetcode" , p) << endl ;

}