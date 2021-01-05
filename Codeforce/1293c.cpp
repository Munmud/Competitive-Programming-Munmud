#include <bits/stdc++.h>
#include <fstream>
#include <set>
using namespace std;

int main ()
{
    set < pair<pair<int,int> , pair<int,int> > > maze;

    bool visit[3][1000001];
    memset(visit,false,sizeof visit);

    int n,testCase,x,y;
    cin>>n>>testCase;
    while (testCase--){

        cin>>x>>y;

        if (visit[x][y]==false){
                visit[x][y]=true;
            if(x==1){
                if (visit[2][y-1]){
                    maze.insert({{1,y},{2,y-1}});
                }
                if (visit[2][y]){
                    maze.insert({{1,y},{2,y}});
                }
                if (visit[2][y+1]){
                    maze.insert({{1,y},{2,y+1}});
                }
            }
            else{
                if (visit[1][y-1]){
                    maze.insert({{1,y-1},{2,y}});
                }
                if (visit[1][y]){
                    maze.insert({{1,y},{2,y}});
                }
                if (visit[1][y+1]){
                    maze.insert({{1,y+1},{2,y}});
                }
            }

        }
        else{
            visit[x][y]=false;
            if (x==1){
                if(maze.count({{1,y},{2,y}}))
                    maze.erase({{1,y},{2,y}});
                if(maze.count({{1,y},{2,y-1}}))
                    maze.erase({{1,y},{2,y-1}});
                if(maze.count({{1,y},{2,y+1}}))
                    maze.erase({{1,y},{2,y+1}});
            }
            else{
                if(maze.count({{1,y},{2,y}}))
                    maze.erase({{1,y},{2,y}});
                if(maze.count({{1,y-1},{2,y}}))
                    maze.erase({{1,y-1},{2,y}});
                if(maze.count({{1,y+1},{2,y}}))
                    maze.erase({{1,y+1},{2,y}});
            }
        }


        if (maze.empty()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
