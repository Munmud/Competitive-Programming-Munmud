#include <bits/stdc++.h >
using namespace std;

struct edge
{
    int u , v , w ;
    edge(int _u , int _v , int _w)
    {
        u = _u ;
        v = _v ;
        w = _w ;
    }
    bool operator < (const edge &p) const{
        return w < p.w ;
    }
};

int parent[10000] ;
vector <edge> e ;
int find_parent(int r)
{
    return (parent[r] == r ? r : find_parent(parent[r])) ;
}

int mst(int n)
{
    sort(e.begin() , e.end()) ;
    for(int i = 1 ; i<=n ; i++) parent[i] = i ;

    int cnt = 0 , s = 0 ;
    for (int i = 0 ; i<e.size() ; i++)
    {
        int u = find_parent(e[i].u) ;
        int v = find_parent(e[i].v) ;

        if (u!=v)
        {
            parent[u] = v ;
            cnt++ ;
            s+= e[i].w ;
            if (cnt == n-1) break ;
        }
    }
    return s ;
}


int main ()
{
    int n , m ;
    cin >> n >> m ;
    for (int i = 0 ; i< m ; i++)
    {
        int u , v, w ;
        cin >> u >> v >> w ;
        e.push_back(edge(u,v,w)) ;
    }
    mst(n) ;
}
    