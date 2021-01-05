#include <bits/stdc++.h>
using namespace std;
int n, s[100003], x, ans=1, a=INT_MIN, b=INT_MIN, t, p=1, q=1, i ;

int check(int i){
    if ( s[i-1] > s[i] && b==INT_MIN && a==INT_MIN ){
            a=s[i-2];
            p=i-1;
            //cout << "p=" << p << endl;
        }
        else if ( s[i-1] < s[i] && a!=INT_MIN && b==INT_MIN){
            b=s[i-1];
            q=i-1;
            //cout << "q=" << q << endl;
            if (a>b || b>s[p] || s[p]>s[i]){
                ans=0;
            }

        }
        else if (s[i-1]> s[i] && a!=INT_MIN && b!=INT_MIN){
            ans=0;
        }
        //else if (a!=INT_MIN && b==INT_MIN && i== n-1)
           // q=i;

}

int main()
{
    cin >> n;
    s[0]=0;
    n++;

    for ( i=1; i<n ; i++){

        cin >> x;
        s[i] = x;

        check(i);

    }
    s[i]= INT_MAX;
    check(i);

    if (ans){
        cout << "yes" << endl;
        cout << p << " " << q << endl;
    }
    else cout << "no" << endl;




}
