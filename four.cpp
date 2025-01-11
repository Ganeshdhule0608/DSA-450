//sort 0 1 2
// dutch national flag problem
//sort colors problem

#include<iostream>
#include<vector>
using namespace std;

void sort012(vector<int> &arr){
    int l = 0, m = 0, h = arr.size() - 1;

    while(m<=h){
        if(arr[m] == 0){
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if (arr[m] == 1){
            m++;
        }
        else{
            swap(arr[m], arr[h]);
            h--;
        }
    }

}

int main(){
    vector<int> arr = {1,0,1,0,2,0,2,1,0};
    sort012(arr);

    cout<<"Sorted array ";
    for(int i = 0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
