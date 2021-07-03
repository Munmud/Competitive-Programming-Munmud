#include <bits/stdc++.h>
using namespace std ;
 
int numSubarrayProductLessThanK(vector<int>& nums, int k) {
    int tt = 1 ;
    list <int> li ;
    int ans = 0 ;
    int i = 0 ;
    while (i != nums.size())
    {
        if (tt * nums[i] <k)
        {
            li.push_back(nums[i]) ;
            ans+= li.size() ;
            tt *= nums[i] ;
            i++ ;
        }
        else if (li.size() )
        {
            tt /= *li.begin() ;
            li.erase(li.begin()) ;
        }
        else {
            i++ ;
        }
        cout << "ans = " << ans << endl ;
    }
    return ans ;
    
}

int main () {
    vector<int> nums {10 , 5 , 2 , 6} ;
    cout << numSubarrayProductLessThanK( nums, 100)  ;
    
}

