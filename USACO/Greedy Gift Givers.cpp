/*
ID: moontas2
PROG: gift1
LANG: C++                 
*/
#include <fstream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");

    int n ; fin >>n ;
    map <string ,int> mp ;
    string s , rr ;
    vector <string> v;
    for (int i = 0 ; i<n ; i++)
    {
        fin >> s ;
        v.emplace_back(s) ;
        mp[s] = 0 ;
    }

    for (int i = 0 ; i<n ; i++)
    {
        fin >> s ;
        int sum , num  ; fin >> sum >> num ;
        int cnt = 0 ;
        if (num != 0 ) cnt = sum / num ;
        for (int j = 0 ; j < num ; j++)
        {
            fin >> rr ;
            mp[rr] += cnt ;
        }
        if(cnt != 0)
            mp[s] = mp[s] - (cnt*num) ;
    }

    for (auto i : v) 
    {
        fout << i<< " " << mp[i] <<  endl ;
    }
    return 0;
}