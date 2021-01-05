#include <bits/stdc++.h>
using namespace std ;

struct node
{
    node * next[27] ;
    bool end ;
    node ()
    {
        for (int i = 0 ; i<27 ; i++)
            next[i] = NULL ;
        end = false ;
    }

} *root;

void addWord (string s)
{
    node * curr = root ;
    for (int i = 0 ; i<s.size() ; i++){
        int idx = s[i] - 'a' ;
        if ( curr->next[idx] == NULL )
            curr->next[idx] = new node() ;

        curr = curr->next[idx] ;
    }
    curr->end = true ;
}

vector <string> ans ;
string temp ;
const int fx[]={+1,-1,+0,+0};
const int fy[]={+0,+0,+1,-1};
#define BOUNDARY(i, j, row , column)      ((i >= 0 && i < row) && (j >= 0 && j < column))
int n , m ;

void go(int i , int j , vector<vector<char>>& board , node * curr)
{
    char ch = board[i][j] ;
    temp += ch ;
    // cout << "Temp " << temp << endl ;
    board[i][j] = '{' ;

    if (curr->end) ans.push_back(temp) ;

    for (int p = 0 ;p<4 ; p++)
    {
        int xx = i + fx[p] ;
        int yy = j + fy[p] ;

        if (BOUNDARY(xx,yy,n,m))
        {
            int id = board[xx][yy] - 'a' ;
            if (curr->next[id] != NULL)
            {
                go(xx , yy , board , curr->next[id]) ;
            }
        }
    }
    temp.pop_back() ;
    board[i][j] = ch ;

}


vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
    root = new node() ;
    for (string s : words) addWord(s) ;
    

    n = board.size() ;
    if (n == 0) return ans ;
    m = board[0].size() ;
    if (m == 0) return ans ;

    for (int i = 0 ; i<n ; i++)
    {
        for (int j = 0 ; j<m ; j++)
        {
            int id = board[i][j] - 'a' ;
            if (root->next[id] != NULL)
            go(i,j,board,root->next[id]) ;
        }
    }

    return ans ;

    
}

int main ()
{
    vector<vector<char>> board {
        {'o','a','a','n'},
        {'e','t','a','e'},
        {'i','h','k','r'},
        {'i','f','l','v'}} ;
     vector<string> words {"oath","pea","eat","rain"} ;
     vector <string> ss = findWords(board , words) ;
     for (auto i : ss) cout << i << endl ;

}