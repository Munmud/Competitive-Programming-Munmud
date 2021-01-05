#include <bits/stdc++.h>
using namespace std;

class socks
{
private:
    int m;
    int n;
public:
    void get_m()
    {
        int x;
        cin>>x;
        m=x;
    }
    void get_n()
    {
        int x;
        cin>>x;
        n=x;
    }
    int ge_n()
    {
        return n;
    }
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
    socks vasya;
    vasya.get_n();
    vasya.get_m();
    cout<<vasya.ans(vasya.ge_n());

    return 0;
}
