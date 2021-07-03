#include <bits/stdc++.h>
using namespace std ;

#define wa2(x , y)              cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define wa(x)                   cout << (#x) << " is " << (x) << endl


// string txt = "ABABDABACDABABCABAB";
// string pat = "ABABCABAB" ;

void computeLPSArray(string pat , vector<int> & lps)
{
    int len = 0, i = 1 ;
    lps[0] = 0 ;

    while (i<pat.size()){
        if (pat[i] == pat[len]){
            len++ ;
            lps[i++] = len ;
        }
        else {
            if (len != 0) len = lps[len-1] ;
            else lps[i++] = 0 ;
        }
    }
}

void KMPSearch(string pat , string txt)
{
    int M = pat.size() ;
    int N = txt.size() ;

    vector <int> lps(M) ;
    computeLPSArray(pat , lps) ;

    int i = 0 , j = 0 ;
    while (i<N){
        if (pat[j] == txt[i]) i++ , j++ ;

        if (j == M){
            // cout << "Found Pattern at index " << i-j << endl ;
            j = lps[j-1] ; 
        }

        else if ( i<N && pat[j] != txt[i] ){
            if (j != 0) j = lps[j-1] ;
            else i = i+1 ;
        }
    
    }
}

int main ()
{
    string txt ,  pat ;
    cin >> txt >> pat ;
    KMPSearch(pat,txt) ;
}