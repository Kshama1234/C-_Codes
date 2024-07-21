#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i =0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapAlternate(int arr[], int n) {
    for(int i =0; i<n; i+=2) {
        if(i+1 < n) {
            swap(arr[i], arr[i+1]);
        }
    }
}


int main() {
    int even[6] = {2,1,4,3,6,5};
    int odd[5] = {-1,-2,1,0,2};

    swapAlternate(even, 6);
    printArray(even, 6);
    cout<<endl;


    swapAlternate(odd, 5);
    printArray(odd, 5);
}
