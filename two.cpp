// Maximum and minimum of an array using minimum number of comparisons
#include<iostream>
#include<limits.h>
using namespace std;

int setmin (int A[], int N){
    int min = INT_MAX;
    for(int i = 0; i< N; i++){
        if(A[i] < min){
            min = A[i];
        }
    }
    return min;
}


int setmax (int A[], int N){
    int max = INT_MIN;
    for ( int i = 0; i<N; i++){
        if (A[i] > max){
            max = A[i];
        }
    }
    return max;
}

int main(){
    int A[] = {1,2,3,4,5,6,7};
    int N = 7;
    cout<<"maximum number "<<setmax(A,N)<<endl;
    cout<<"minimum number "<<setmin(A,N)<<endl;
}