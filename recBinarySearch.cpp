#include<iostream>
#include<vector>
using namespace std;

int recBinarySearch(vector<int>arr2,int tar1,int st ,int end){
    
    if(st<=end){
         int mid = st+ (end-st)/2;
if(tar1>arr2[mid]){
    return recBinarySearch(arr2,tar1,mid+1,end);

}
else if(tar1<arr2[mid]){
    return recBinarySearch(arr2,tar1,st,mid-1);

}
else{
    return mid;
}
    }
}    
int main(){
    vector<int>arr1 ={-1,0,3,5,9,12};
    int tar = 12;

   cout<< recBinarySearch(arr1,tar,0,arr1.size()-1);

    return 0;

}