#include <bits/stdc++.h>
#include <vector>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;

int arr [45] = {0};

int main ()
{
    int n, i, count=0, x, p ;

    cin >> n;

    p = n;

    while (n--){
        cin >> x;

        if (x==4){
            arr[4]++;
        }
        else if ( x==8 ){
            if( arr[4] ){
                arr[4]--;
                arr[8]++;
            }
        }
        else if (x==15){
            if( arr[8] ){
                arr[8]--;
                arr[15]++;
            }
        }
        else if (x==16){
            if( arr[15] ){
                arr[15]--;
                arr[16]++;
            }
        }
        else if (x==23){
            if( arr[16] ){
                arr[16]--;
                arr[23]++;
            }
        }
        else if (x==42){
            if( arr[23] ){
                arr[23]--;
                count++;
            }
        }
    }

    cout << p - count * 6 ;
}
