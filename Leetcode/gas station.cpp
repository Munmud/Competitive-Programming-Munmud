#include<bits/stdc++.h>
using namespace std ;



    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = -1 ;
        int n = gas.size() ;
        
        for (int i = 0 ; i<n ; i++)
        {
            gas.push_back(gas[i]) ;
            cost.push_back(cost[i]) ;
        }

        
        
        int sum = 0 ;
        int cnt = 0 ;
        
        for (int i = 0 ; i< 2*n ; i++)
        {
            if (start == -1){
                start = i ;
            }
            
            sum+= ( gas[i] - cost[i] ) ;
            cnt ++ ;
            
            
            
            if(sum < 0) {
                start = -1 ;
                sum = 0 ;
                cnt = 0 ;
            }

            if (cnt == n) return start ;

            cout << sum << " " << cnt << endl ;
            
        }
        cout << endl ;
        
        return -1 ;
        
    }

    int main ()
    {
        vector <int> a{1,2,3,4,5} , b{3,4,5,1,2} ;
        int t =  canCompleteCircuit(a , b)  ;
        cout << endl << t << endl ;
    }

