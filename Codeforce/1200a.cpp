#include <bits/stdc++.h>
using namespace std;

int p[10];
       void left ()
       {
           for (int i=0;i<10;i++)
            if(p[i]==0){
                p[i]=1;
                break;
            }
       }
       void right ()
       {
           for (int i=9;i>=0;i--)
            if(p[i]==0){
                p[i]=1;
                break;
            }
       }
       void roomKhali(char x)
       {
           int y=(int)x;
           //cout<<endl<<y<<endl;
           p[y-48]=0;
       }
       void display()
       {
           for (int i=0;i<10;i++)
            cout<<p[i];
       }

int main()
{
    int n;

    cin>>n;
    char x;

    getchar();
    for(int i=0;i<n;i++)
    {
        x=getchar();
        if (x=='L')
        {
            left();
        }
        else if (x=='R')
        {
            right();
        }
        else {
            roomKhali(x);
        }
       // cout<<x<<" ";
    }
    getchar();

    display();

}
