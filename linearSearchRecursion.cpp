#include<iostream>
using namespace std;

int linearSearch(int arr[], int size, int k) {
    if(size == 0) {
        return false;
    }

    if(arr[0] == k) {
        return true;
    }

    int remainingPart = linearSearch(arr+1, size-1, k);
    return remainingPart;
}


int main() {
    int arr[5] = {3,4,5,6,7};
    int size = 5;
    int key   = 4;

    int ans = linearSearch(arr, size, key);

    if(ans) {
        cout << "Present"<<endl;
    }

    else{
        cout << "absent"<<endl;
    }
    return 0;
}
