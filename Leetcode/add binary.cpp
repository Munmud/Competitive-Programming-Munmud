#include <bits/stdc++.h>
using namespace std ;

string addBinary(string a, string b) {
    string ans ;
    int temp = 0 ;
    
    reverse(a.begin() , a.end()) ;
    reverse(b.begin() , b.end()) ;

    int pos = 0 ;

    while (pos <a.size() || pos < b.size() || temp)
    {
        // cout << "POS = " << pos << endl; 
        int sum = temp ;
        temp = 0 ;
        if (pos<a.size()) sum+= a[pos]-48 ;
        if (pos<b.size()) sum+= b[pos]-48 ;

        if (sum == 0) ans+='0' ;
        else if (sum == 1) ans+="1" ;
        else if (sum == 2) ans+="0" , temp = 1  ;
        else if (sum == 3) ans+="1" , temp = 1  ;
        pos++ ;
    }

    reverse(ans.begin() , ans.end()) ;

    return ans  ;

    
}


int main ()
{
    cout << addBinary("110" , "100") ;
}