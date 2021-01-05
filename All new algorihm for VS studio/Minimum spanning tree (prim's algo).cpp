#include <bits/stdc++.h>
using namespace std ;

typedef pair <int , int> PII ;
vector <PII> v[1000] ;

struct node
{
    int u , cost ;
    node() ;
    node(int _u , int _cost)
    {
        u = _u ;
        cost = _cost ;
    }
};

bool operator < (node a , node b)
{
    return a.cost > b.cost ;
}

priority_queue <node> pq ;
int cost[1000] ;
int taken[1000] ;

int prim (int n , int start)
{
    for (int i = 0 ; i<n ; i++)
    {
        cost[i] = INT_MAX ;
        taken[i] = 0 ;
    }

    cost[start] = 0 ;
    pq.push(node(start,0)) ;
    int ans = 0 ;

    while (!pq.empty())
    {
        node x = pq.top() ;
        pq.pop() ;

        if (taken[x.u]) continue ;
        taken[x.u] = 1 ;
        ans+= x.cost ;

        for (auto vc : v[x.u])
        {
            if(taken[vc.first]) continue ;
            if (vc.second < cost[vc.first]){
                pq.push(node(vc.first , vc.second)) ;
                cost[vc.first] = vc.second ;
            }
        }
    }
    return ans ;
}

int main ()
{

}