    #include <bits/stdc++.h>
    using namespace std ;

    bool isOneBitCharacter(vector<int>& v) {
        for (int i = 0 ; i<v.size() ; i++){
            if (v[i] == 1) i++ ;

            if (i == v.size()-1) return true ;
        }
        return false ;
        
    }