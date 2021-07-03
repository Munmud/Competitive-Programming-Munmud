
#include <bits/stdc++.h>
using namespace std;

class candle
{
private:
    int m;
    int n;
public:
    void get_m() { cin>>m; }
    void get_n() { cin>>n; }
    int ge_n() { return n; }
    int ans(int x)
    {

        if (!x)return x;
        static int an=0;an+=x;
        static int rem=0;
        static int temp=0;
        temp=x/m;
        rem+=x%m;
        ans(temp);

        if (!temp)
        {
            if (rem>=m)
            {
                temp=rem/m;
                rem=rem%m;
                ans(temp);
            }
            return an;
        }
    }
};
int main ()
{
    candle Vasily ;
    Vasily.get_n();
    Vasily.get_m();
    cout<<Vasily.ans(Vasily.ge_n());

    return 0;
}
