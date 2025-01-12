// Write a program to cyclically rotate an array by one.

#include<iostream>
#include<vector>
using namespace std;

void rotatearraybyone(vector<int> &arr){
    int lastelement = arr.back();

    for (int i = arr.size() - 1; i > 0; i--){
        arr[i] = arr[i - 1];
    }

    arr[0] = lastelement;

}

int main(){
    vector<int> arr = {1,2,3,4,5};
    rotatearraybyone(arr);
    cout<<"Rotated array"<<endl;
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
