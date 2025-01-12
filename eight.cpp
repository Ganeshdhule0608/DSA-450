//Kadane's algorithm
//maximum sum of subarray

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int maximumSumofSubarray(vector<int> &arr ){
    int maxsum = INT_MIN;
    int currsum = 0;

    for(int i = 0; i<arr.size(); i++){
        currsum +=arr[i];
    
    if(currsum>maxsum){
        maxsum = currsum;
    }

    if(currsum < 0){
        currsum = 0;
        
    }
    }
    return maxsum;
}

int main(){

    vector<int> arr = {2,3,-8,7,-1,2,3};

   

    cout<<"maximum sum of subarray "<<  maximumSumofSubarray(arr) <<endl;
    

}