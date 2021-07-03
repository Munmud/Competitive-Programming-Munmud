#include <bits/stdc++.h>
using namespace std ;

/*

General Idea :
একটা ফাইল থেকে যত রকমের সাবসেট জেনারেট করা যায় সব বের করে একটা map এ রাখব... আরেকটা map এ একই সাবসেটের আন্সার রাখব... 
পরে সব কুয়েরির জন্য map থেকে প্রিন্ট করে দিব...

ফাইল নেম ঃ test
সব সাবসেট ঃ t,te,tes,test,e,es,est,s,st,t 

 */

int main ()
{
    int totalFile ;
    cin>> totalFile ;

    map <string , int> mp1 ;
    map <string , string > mp2 ;

    for (int k = 0 ; k<totalFile ; k++) // সব ফাইল কে ট্রাভার্স করছি
    {
        string str ; cin >> str ;
        int len = str.size() ;

        set <string> se ; 
        
/*
একটা সেট নিলাম কারন একটা ফাইলে থেকে সব রকমের সাবসেট যাতে একবার কাউন্ট হয়...
aaaab
a = 1 not 4
aa = 1 
*/

        for (int i = 0 ; i<len ; i++)
        {
            for (int j =i;j<len ; j++)
            {
                string temp = str.substr(i,(j-i+1)) ; // i তম index থেকে j তম index পর্যন্ত স্ট্রিং বের করলাম
                // cout << temp << endl ;
                se.insert(temp) ;
            }
        }

/*
ফাইল নেম ঃ moon
se set e ase : m,o,n,mo,oo,on,moo,oon,moon 
*/

        for (auto i : se){
            mp1[i]++ ;
            mp2[i] = str ;
        } 
    }

    int q ; cin>> q ;
    while(q--)
    {
        string str ; cin >> str ;
        int ans = mp1[str] ;
        cout << ans << " " << (ans == 0 ? "-" : mp2[str]) << "\n" ;
    }


    
}