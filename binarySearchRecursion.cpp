#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k) {
    if(s > e) {
        return false;
    }

    int mid = s + (e-s)/2;

    if(arr[mid] == k) {
        return true;
    }

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }

    if(arr[mid] > k) {
        return binarySearch(arr, s, mid-1, k);
    }
}

int main() {
    int arr[6] = {1,3,5,7,9,11};
    int size = 6;
    int k = 16;

    int ans = binarySearch(arr, 0, 5, k);
    if(ans) {
        cout << "Present"<<endl;
    }
    else {
        cout << "Absent" << endl;
    }
    return 0;
}
