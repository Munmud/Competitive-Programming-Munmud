#include <bits/stdc++.h>
using namespace std ;

#define wa2(x , y)          cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa(x)               cout << (#x) << " is " << (x) << endl

struct node
{
    node *next[26] ;
    int idx ;
    node()
    {
        for (int i =0 ; i<26 ; i++)
            next[i] = NULL ;
        idx = -1 ;
    }
} ;


node * root ;
vector<vector<int>> ans ;
int iindex ;

void add(int a)
{
    if (iindex == a) return ;
    vector <int> temp{iindex,a} ;
    ans.push_back(temp) ;
}

void addWord(string &s ,  int idd)
{
    node * curr = root ;
    for (int i = s.size()-1 ; i>=0 ; i--)
    {
        int id = s[i] -'a' ;
        if (!curr->next[id])curr->next[id] = new node() ;
        curr = curr->next[id] ;
    }
    curr->idx = idd ;
}

bool is_ok(string s)
{
    if (s == "") return true ;
    int n = s.size() -1 ;
    int i = 0 ;
    while (i<n)
    {
        if (s[i++] != s[n--]) return false ;
    }
    return true ;
}

void find_all(node * curr , string s)
{
    if (curr->idx != -1 && is_ok(s)){
        add(curr->idx) ;
    }
    for (int i =0 ; i<26 ; i++){
        if (curr->next[i]){
            char ch = 'a' + i ;
            s+= ch ;
            find_all(curr->next[i] , s) ;
            s.pop_back() ;
        }
    }
    
}

void is_any(string &s )
{
    node * curr = root ;
    for(int i = 0 ; i<s.size() ; i++)
    {
        int id = s[i] - 'a' ;
        if (!curr->next[id]) return ;
        curr = curr->next[id] ;

        if (curr->idx != -1 ){
            if (is_ok(s.substr(i+1 , s.size()-i))){
                wa2(curr->idx , iindex) ;
                add(curr->idx);
            }
                
        }
    }
    for (int i = 0 ; i<26 ; i++){
        if (curr->next[i]){
            string temp ;
            temp+= ('a'+i) ;
            find_all(curr->next[i] , temp);
        }
            
    }
    
}

vector<vector<int>> palindromePairs(vector<string>& words) {
    
    root = new node() ;
    
    for (int i = 0 ; i<words.size() ; i++)
        addWord(words[i] , i) ;
    
    for (int i = 0 ; i<words.size() ; i++){
        iindex = i ;
        is_any(words[i] ) ;
    }
         
    
    return ans ;

}


int main ()
{
    vector<string> words{"abcd","dcba","lls","s","sssll"} ;
    vector<vector<int>> sol = palindromePairs(words) ;
    for (auto i : sol)
    {
        cout << i[0] << " " << i[1] << endl ;
    }
    
}