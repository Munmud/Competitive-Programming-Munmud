#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main ( void ) {
    int n, m, sum, lowValue, maxGroup, maxAns=0;

    cin >> n >> m ;

    sum = n + m ;
    maxGroup = sum/3;
    lowValue = min( n , m );
    maxAns = min ( maxGroup , lowValue );

    cout << maxAns ;

}
