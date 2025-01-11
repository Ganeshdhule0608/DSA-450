// kth largest and smallest

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int kthLargest(vector<int> &arr, int k){
    sort(arr.begin(), arr.end());
    return arr[arr.size() - k];
}

int kthSmallest(vector<int> &arr, int k){
    sort(arr.begin(), arr.end());
    return arr[k-1];
}

int main(){
    vector<int> arr = {12,13,34,55,66,2};
    int k = 3;
    cout<<"kth smallest no "<<kthSmallest(arr, k)<<endl;
    cout<<"kth largest no "<<kthLargest(arr, k)<<endl;
}
