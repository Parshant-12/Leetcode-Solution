#include <iostream>
#include <vector>
#include <math.h>
#define ll long long int
using namespace std;
class Solution {
public:
    bool check(ll h,vector<int>&workerTimes,ll T){
        ll total_h = 0;
        for(int i=0;i<workerTimes.size();i++){
            total_h+= (sqrt(1+(4* ( (2*T)/workerTimes[i]) ))-1)/2;
        }
        if(total_h>=h){
            return true;
        }
        else{
            return false;
        }
    }
    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {
        ll low=0,high=10e16;
        ll ans=10e16;
        while(low<=high){
            ll mid = (low+high)/2;
            if(check(mountainHeight,workerTimes,mid)){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};