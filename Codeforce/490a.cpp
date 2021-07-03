#include <bits/stdc++.h>
#include <iterator>
#include <vector>
using namespace std;

int teamNumber(int x,int y,int z)
{
    if (x<=y && x<=z)
        return x;
    else if (y<=z&& y<=x)
        return y;
    else return z;
}

int main ()
{
    vector <int> vpro,vmat,vphy;
    int studentNumber,x,programming=0,maths=0,physical=0,teN;
    cin>>studentNumber;

    for (int i=1;i<=studentNumber;i++){
        cin>>x;
        if (x==1){
            programming++;
            vpro.push_back(i);
        }
        else if (x==2){
            maths++;
            vmat.push_back(i);
        }
        else if (x==3){
            physical++;
            vphy.push_back(i);
        }
    }
    //cout<<physical<<" "<<programming<<" "<<maths<<endl ;
    teN=teamNumber(programming,maths,physical);
    cout<<teN<<endl;
    if (!teN)
        return 0;

    for (int i=0;i<teN;i++)
        cout<<vpro[i]<<" "<<vmat[i]<<" "<<vphy[i]<<endl;

    return 0;

}
