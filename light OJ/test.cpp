
// Question: In a tree with n nodes, for some reason, the undirected edge of the tree becomes a directed edge, so that it is not a strongly connected graph. At least add a few special paths to make Any two points on the tree can reach each other.
// The special path meets the following conditions:

// Must consist of consecutive edges on the tree
// Must be the reverse side of the directed side on the tree
// Each node on a path appears at most once
// Multiple paths can have common nodes and edges

// Idea: It can be known that reverse edges must be used to fill the gaps so that the entire tree is strongly connected, so n-1 reverse edges must be used. Obviously, because there is no ring, each node on the tree has one and only one path to other nodes.
// So we have to deal with the edge situation of each node.

// Use the num array to record the number of paths that use the reverse side downward under a node, and a negative number means use the reverse side upward.
// Each transfer follows the following principles:

// If the transfer directions of the opposite edges are the same, the number of paths of the children is directly added to the parent node.
// If the transfer direction is different, then reduce the number of paths stored by the parent node, and count the number of paths that can be calculated first in the result.

#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <stack>
#include <string>
#include <math.h>
#include <bitset>
#include <ctype.h>
using namespace std;
typedef pair<int,int> P;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const double PI = acos(-1.0);
const double eps = 1e-9;
const int N = 25000 + 5;
const int mod = 1e9 + 7;
int t,kase = 0;
vector<P> G[N];
int ans = 0;
int vis[N], num[N];
int dfs(int u)
{
    vis[u] = 1;
    for(int i = 0; i < G[u].size(); i++)
    {
        int v = G[u][i].first, type = G[u][i].second;
        if(vis[v]) continue;
        dfs(v);
        if(type == 1)
        {
            if(num[v] < 0)
            {
                num[u] += num[v];
            }
            else
            {
                ans += abs(num[v]) + 1;
                num[u]--;
            }
        }
        else if(type == -1)
        {
            if(num[v] > 0)
            {
                num[u] += num[v];
            }
            else
            {
                num[u]++;
            }
        }
    }
}
int n;
int main()
{
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        for(int i = 0; i < N; i++) G[i].clear();
        for(int i = 0; i < n-1; i++)
        {
            int u,v;
            scanf("%d%d", &u, &v);
            G[v].push_back(make_pair(u,-1));
            G[u].push_back(make_pair(v, 1));
        }
        memset(num, 0, sizeof(num));
        memset(vis, 0, sizeof(vis));
        ans = 0;
        dfs(0);
        if(num[0] > 0)
            ans += num[0];
        printf("Case %d: %d\n", ++kase, ans);
    }
    return 0;
}