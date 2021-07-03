#include <bits/stdc++.h>
using namespace std ;
c

bool check(int a , int b)
    {
        
        if (a == b) return false ;
        stack <int> aa , bb ;
        while (a)
        {
            aa.push(a%10) ;
            a/=10 ;
        }
        while (b)
        {
            bb.push(b%10) ;
            b/=10 ;
        }
        int sz1 = aa.size() ;
        int sz2 = bb.size() ;
        
        while (1)
        {
            
            int x , y ;
            if (aa.empty() == false){
                x = aa.top() ;
                aa.pop() ;
            }
            else x = 0 ;
            if (bb.empty() == false){
                y = bb.top() ;
                bb.pop() ;
            }
            else y = 0 ;
            
            
            if (x > y) return false ;
            if (y > x) return true ;

            if (aa.empty() && bb.empty())
            {
                if (sz1 < sz2) return false ;
                return true ;
            }
            
        } 
        return sz1<sz2  ;
    }
    string largestNumber(vector<int>& nums) {
        string ans ;
        int n = nums.size() ;
        
        for (int i = 0 ; i<n ; i++)
        {
            for (int j = i+1 ; j<n ; j++)
            {
                
                if (check(nums[i] , nums[j])) 
                    swap(nums[i],nums[j]) ;
            }
            
            stack<int> temp ;
            while (nums[i])
            {
                temp.push(nums[i]%10) ;
                nums[i]/=10 ;
            }
            while (!temp.empty())
            {
                ans+= (char) (temp.top() +48) ;
                temp.pop() ;
            }
        }
        return ans ;
        
    }

    int main()
    {
        vector <int> v{3,30,34,5,9} ;
        cout << largestNumber(v) ;

    }