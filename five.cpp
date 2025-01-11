// Move all the negative elements to one side of the array 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void moveNegavtive(vector<int>&arr){
    sort(arr.begin(), arr.end());
}

int main(){
    vector<int> arr = {-4,-5,-22,-56,-445,45,22,33,-65};
    moveNegavtive(arr);
    // for(int i = 0; i<arr.size(); i++){
    //     cout<<arr[i]<<" ";

    for(int e : arr)
    cout<< e << " ";
        return 0;
    }

