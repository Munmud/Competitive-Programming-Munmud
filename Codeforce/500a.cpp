#include <bits/stdc++.h>
using namespace std;
class transportation
{
private:
    int nodeNumber;
    int targetNode;
    int *p;
    int *arra;
public:
    void get_nodeNumber(){
        int x;
        cin>>x;
        nodeNumber=x;
    }
    void get_targetNode(){
        int x;
        cin>>x;
        targetNode=x;
    }
    void get_array(){
        p=new int[nodeNumber];
        for(int i=1;i<nodeNumber;i++)
            cin>>p[i];
    }
    void create_array_for_dfs()
    {
        arra= new int [nodeNumber+1];
        int i;
        for(i=0;i<=nodeNumber;i++)
            arra[i]=0;
    }
    void check(int position)
    {


        arra[position]=1;
        if (position>=nodeNumber)
            return;
        //cout<<position<<" ";
        int temp;
        temp=position+p[position];
        //cout<<temp<<" "<<endl;
        if (temp==position)
            return;
        if(temp>nodeNumber)
            return;
        else check(temp);

    }
    int check_ans()
    {
        if(arra[targetNode]==1)
            return 1;
        else return 0;
    }
};

int main ()
{
    int i;
    transportation l;

    l.get_nodeNumber();
    l.get_targetNode();
    l.get_array();

    l.create_array_for_dfs();

    l.check(1);

    if(l.check_ans())
        printf ("YES");
    else printf ("NO");



}
