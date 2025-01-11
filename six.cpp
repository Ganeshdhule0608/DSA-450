// Union of Arrays with Duplicates


#include<iostream>
#include<set>
using namespace std;

int unionsetcount(int arr[], int n, int brr[], int m){
    set<int>unionSet;


for(int i = 0; i<n; i++){
    unionSet.insert(arr[i]);

}

for(int i = 0; i<m; i++){
    unionSet.insert(brr[i]);
}
    return unionSet.size();
}

int main(){

    int a[] = {1,2,3,4,5};
    int x = sizeof(a) / sizeof(a[0]);
    int b[] = {6,6,7,8};
    int y = sizeof(b) / sizeof(b[0]);

    cout << unionsetcount(a,x,b,y)<<endl;
}