
#include <bits/stdc++.h>
using namespace std;

const int N = 510 ;

vector <int> graph[N];
int ans ;

int shortest_cycle(int n) 
{ 
    ans = INT_MAX; 
  
    for (int i = 0; i < n; i++) { 
  
        vector<int> dist(n, INT_MAX ); 
        vector<int> par(n, -1); 
        queue<int> q; 
  
        dist[i] = 0; 
        q.push(i); 
  
        while (!q.empty()) { 
  
            int x = q.front(); 
            q.pop(); 
  
            for (int child : graph[x]) { 
  
                if (dist[child] == INT_MAX ) { 
                    dist[child] = 1 + dist[x]; 
                    par[child] = x; 
                    q.push(child); 
                } 
  
                else if (par[x] != child ) {
                    ans = min(ans, dist[x] + dist[child] + 1); 
                }
                    
            } 
        } 
    }
} 

void _main_main()
{
    
    int n , m ; cin >> n >> m ;

    for (int i = 0; i < n; i++) graph[i].clear() ;
    for (int i = 0; i < m; i++) {
        int x , y ; cin >> x >> y ;
        graph[x].push_back(y) ;
        graph[y].push_back(x) ;
    }

    shortest_cycle(n) ;
    if (ans == INT_MAX) cout << "impossible\n" ;
    else cout << ans << "\n" ;




}



int main ()
{
    int testCase = 1 ; cin >> testCase ;
    for (int i = 0; i < testCase; i++){
        cout << "Case " << i+1 << ": " ;
        _main_main() ;
    }
        
}
