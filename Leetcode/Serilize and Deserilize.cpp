#include <bits/stdc++.h>
using namespace std ;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

  struct TreeNode {
     int val;
     TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  };








class Codec {
    string str ;
    int i ;
public:

    string n_st (int num)
    {
        string ss ;
        for (int i = 0 ; i<=31 ; i++)
        {
            if( (1 << i) & num) ss+="1" ;
            else ss+= "0" ;
        }
        return ss ;
    }

    int st_n(string ss) 
    {
        int num = 0 ;
        for (int i = 0 ; i<=31 ; i++)
        {
            if(ss[i] == '1' ) num+= 1 << i ;
        }
        return num ;

    }

    void make(TreeNode * curr)
    {
        
        if (!curr){
            str+= n_st(-1) ;
            return ;
        } 
        str+= n_st(curr->val) ;
        make(curr->left) ;
        make(curr->right) ;

    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        str = "" ;
        make(root) ;
        return str ;
        
    }

    TreeNode * go() 
    {
        int num = st_n(str.substr(i , 32)) ;
        i+=32 ;
        if(num == -1) return NULL ;

        TreeNode * curr = new TreeNode(num) ;
        curr->left = go() ;
        curr->right = go() ;
        return curr ;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        str = data ;
        i = 0 ;
        return go() ;
        
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->

int main()
{
    Codec t ;
    cout << t.n_st(10) << endl ;
    cout << t.st_n("01010000000000000000000000000000") << endl   ;
    cout << t.n_st(10000) << endl ;
    cout << t.st_n("00001000111001000000000000000000") << endl  ;
    cout << t.n_st(-1) << endl ;
    cout << t.st_n("11111111111111111111111111111111") << endl  ;
}