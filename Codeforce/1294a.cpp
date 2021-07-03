
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n, a, b, c, x, sum, each,a1,b1,c1 ;

    cin >> n;
    while ( n-- ){
        cin >> a >> b >> c >> x ;
        sum = a+b+c+x;

        each = sum/3;

        a1=abs(each - a);
        b1= abs(each - b);
        c1 =abs (each - c);

        if ( sum%3==0 && a1+b1+c1==x && a1>=0 && b1>=0 && c1>=0 ) cout << "YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
