#include <bits/stdc++.h>
using namespace std ;


/*----------- decimal to binary start here --------*/
string decToBinary(int n) 
{ 
    string s ;
    // Size of an integer is assumed to be 32 bits 
    for (int i = 31; i >= 0; i--) {  
        if ( (1ll<<i) & n) 
            s+= "1"; 
        else
            s+= "0"; 
    } 
    return s ;
} 
/*----------- decimal to binary end here --------*/


int main ()
{
    string s = decToBinary(10) ;
    cout << s << endl ;
}