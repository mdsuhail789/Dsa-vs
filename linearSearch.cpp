#include<iostream>
#include<vector>
using namespace std;



// Function to perform linear search
 int lenearsearch(vector<int>v, int t){
    for(int val: v){
        if(val == t){
            return 1;
        }

    
    }
    return -1;
 }



int main(){
   vector<int>vec ={1,2,3,4,5};
   int target =4;
 cout<<lenearsearch(vec, target);
 

   
}




