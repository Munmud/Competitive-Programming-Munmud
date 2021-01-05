/*
ID: moontas2
PROG: ride
LANG: C++                 
*/
#include <fstream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a, b;
    fin >> a >> b;
    int aa = 1 , bb =1 ;
    for (int i = 0 ; i<a.size() ; i++){
        aa = (aa * (a[i]-'A'+1))%47 ;
    }
    for (int i = 0 ; i<b.size() ; i++){
        bb = (bb * (b[i]-'A'+1))%47 ;
    }
    if (aa == bb)
        fout << "GO" << endl;
    else fout << "STAY" << endl ;
    return 0;
}