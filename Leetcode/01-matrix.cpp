    #include <bits/stdc++.h>
    using namespace std;

    struct node
    {
        int d , x ,y ;
        node(int dist ,int xx , int yy){
            d = dist ;
            x = xx ;
            y = yy ;
        }
    };

    vector<vector<int> > updateMatrix(vector<vector<int> >& matrix) {

        int n = matrix.size() ;
        int m = matrix[0].size() ;
        vector<vector<int> > v ;

        bool visit[n+5][m+5] ;
        memset(visit , false , sizeof(visit)) ;

        queue < node > q ;

        for (int i = 0 ; i<n ; i++){
            vector <int> temp ;
            for (int j = 0 ; j<m ; j++){
                temp.push_back(INT_MAX)  ;
                if (matrix[i][j] == 0 ){
                    temp[j] = 0 ;
                    q.push( node(0,i,j) ) ;
                }
            }
            v.push_back(temp) ;
        }



        const int fx[]={+1,-1,+0,+0};
        const int fy[]={+0,+0,+1,-1};
        #define BOUNDARY(i, j, row , column)      ((i >= 0 && i < row) && (j >= 0 && j < column))

        while( !q.empty()){
            auto it = q.front() ;
            q.pop() ;

            if (it.d > v[it.x][it.y]) continue ;

            for (int i = 0 ; i< 4 ; i++){
                int xx = fx[i]+it.x ;
                int yy = fy[i]+it.y ;
                if (BOUNDARY(xx , yy , n , m)){
                    if (it.d+1 <v[xx][yy]) {
                        v[xx][yy] = it.d+1 ;
                        q.push(node( it.d+1 , xx , yy )) ;
                    }
                }
            }
        }
        
        return v ;
        
    }

    int main ()
    {
        vector< vector <int> > v {{0,0,0},{0,1,0},{1,1,1}} ;
        v = updateMatrix(v) ;

        int n = v.size() ;
        int m = v[0].size() ;

        for (int i = 0 ; i<n ; i++ ){
            for (int j = 0 ; j<m ; j++){
                cout << v[i][j] << " " ;
            }
            cout << endl ;       
        }
    }