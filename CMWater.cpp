#include<iostream>
#include<vector>

using namespace std;

int  main(){
     vector<int>height ={1,8,6,2,5,4,8,3,7};
     int n = height.size();
     int maxWater = 0; //ans
     for(int i =0;i<n;i++){
        for(int j =i+1; j<n;j++){
            int w = j-i;
            int ht =min(height[i],height[j]);
            int currWater = w*ht;
            maxWater =max(currWater,maxWater);
        }
     }
     cout<< maxWater;
}