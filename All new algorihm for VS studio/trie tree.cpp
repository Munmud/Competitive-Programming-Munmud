
#include <bits/stdc++.h> 
using namespace std; 

/* ------------- trie tree start here-------------------*/

// initiall 'a-z' is considered 
const int ALPHABET_SIZE = 26; 

struct node {
    bool endmark;
    node* next[ALPHABET_SIZE + 1];
    node()
    {
        endmark = false;
        for (int i = 0; i < ALPHABET_SIZE; i++)
            next[i] = NULL;
    }
} * root;

void inst(string str)
{
	int len = str.size() ;
    node* curr = root;
    for (int i = 0; i < len; i++) {
        int id = str[i] - 'a';
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
    }
    curr->endmark = 1;
}

bool srch(string str)
{
	int len = str.size() ;
    node* curr = root;
    for (int i = 0; i < len; i++) {
        int id = str[i] - 'a';
        if (curr->next[id] == NULL)
            return false;
        curr = curr->next[id];
    }
    return curr->endmark;
}

void del(node* cur)
{
    for (int i = 0; i < ALPHABET_SIZE; i++)
        if (cur->next[i])
            del(cur->next[i]);
    delete (cur);
}

/* ------------- trie tree end here-------------------*/


int main() 
{ 

	string keys[] = {"the", "a", "there", "answer", "any", "by", "bye", "their" }; 
	int n = sizeof(keys)/sizeof(keys[0]); 

	root = new node(); 

	
	for (int i = 0; i < n; i++) 
		inst(keys[i]); 


	srch("the")? cout << "Yes\n" : cout << "No\n"; 
	srch("these")? cout << "Yes\n" : cout << "No\n"; 
	cout << 1 << endl ;

	return 0; 
} 
