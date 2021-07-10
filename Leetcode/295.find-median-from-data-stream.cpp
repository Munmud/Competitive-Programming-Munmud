#include<bits/stdc++.h>
using namespace std ;

/*
 * @lc app=leetcode id=295 lang=cpp
 *
 * [295] Find Median from Data Stream
 */

// @lc code=start


class MedianFinder {
public:
    /** initialize your data structure here. */
    int sz ;
    priority_queue<int> mx ;
    priority_queue<int, vector<int>, greater<int> > mn ;

    MedianFinder() {
        sz = 0 ;
        while(!mx.empty()) mx.pop() ;
        while(!mn.empty()) mn.pop() ;
    }
    
    void addNum(int num) {
        if (sz == 0) mx.push(num) ;
        else if (mx.top() > num) mx.push(num) ;
        else mn.push(num) ;
        sz++ ;

        if (sz&1){
            if ((int)mx.size()-(int)mn.size() > 1){
                mn.push(mx.top()) ;
                mx.pop() ;
            }
            if ((int)mx.size()-(int)mn.size() < 1){
                mx.push(mn.top()) ;
                mn.pop() ;
            }
        }
        else{
            if ((int)mx.size()-(int)mn.size() > 0){
                mn.push(mx.top()) ;
                mx.pop() ;
            }
            if ((int)mx.size()-(int)mn.size() < 0 ){
                mx.push(mn.top()) ;
                mn.pop() ;
            }

        }
    }
    
    double findMedian() {
        if (sz&1) return (double)mx.top() ;
        else return ((double)(mx.top() + mn.top()) )/2.0 ;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
// @lc code=end

