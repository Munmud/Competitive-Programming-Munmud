#include <bits/stdc++.h>
using namespace std ;


class Solution {
    map <string , map <string , double> > mp ;
    map <string , bool > visit ;
    string dest ;
    double num ;
public:

    bool go( string a)
    {
        if (a == dest) return true ;
        visit[a] = true ;
        for (auto i : mp[a])
        {
            if (visit[i.first] == false){
                if (go(i.first)){
                    num*= i.second ;
                    return true ;
                }
            }
        
        }
        return false ;
    }


    vector<double> calcEquation( vector<vector<string>>& eq, vector<double>& val, vector<vector<string>>& qr) {
        int n = eq.size() ;
        vector<double> ans ;
        
        for (int i = 0 ; i<n ; i++)
        {
            string a = eq[i][0] ;
            string b = eq[i][1] ;
            double tt = val[i] ;
            double tp = 1/val[i] ;

            mp[a].insert({b,tt}) ;
            mp[b].insert({a,tp}) ;

            visit[a] = false;
            visit[b] = false;
        }

        for (auto ii : qr)
        {
            string a = ii[0] ;
            string b = ii[1] ;

            for (auto & jj : visit) jj.second = false ;
            dest = b;
            num = 1.0 ;
            if (visit.find(a) == visit.end() || visit.find(b) == visit.end()){
                ans.push_back(-1) ;
            }
            else if(go(a)) {
                ans.push_back(num) ;
            }
            else ans.push_back(-1) ;
        }

        return ans ;
    }
};

int main ()
{
    vector<vector<string>> eq {{"a","b"},{"b","c"}} ;
    vector<double> val{2.0,3.0} ;
    vector<vector<string>> qr { {"a","c"},{"b","a"},{"a","e"},{"a","a"},{"x","x"} } ;

    Solution b ;
    vector<double> ans = b.calcEquation(eq ,val,qr) ;

}