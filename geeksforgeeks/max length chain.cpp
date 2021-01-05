// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
//Your code here
    sort(p , p+n , [] (struct val a , struct val b){
        if (a.first == b.first) 
            return a.second<b.second ;
        return a.first <b.first ;
    }) ;
    
    int mx = 0 ;
    int arr[n+5] ;
    memset(arr , 0 , sizeof(arr)) ;
    
    for(int i = 1 ; i<n ; i++)
    {
        cout << arr[i] << endl ;
        for (int j = 0 ; j<i ; j++)
        {
            if (p[i].first > p[j].second)
                arr[i] = max(arr[i] , arr[j]+1) , mx = max(mx , arr[i]) ;
        }
        
    }
    
    cout << "mx = " << mx << endl ;
    return mx ;
}