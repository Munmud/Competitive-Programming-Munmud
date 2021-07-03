#include<bits/stdc++.h>
using namespace std ;

int main ()
{
    string s = "  this   is  a sentence " ;
    stringstream ss(s) ;
    while (ss >> s) cout << s << endl ;
}