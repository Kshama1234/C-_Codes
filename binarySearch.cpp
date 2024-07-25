#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n-1;

    int mid = start + (end-start)/2;

    while(start<=end) {
        if(arr[mid]==key) {
            return mid;
        }

        if(key> arr[mid]) {
            start = mid+1;
        }
        else//(key<arr[mid)
        {
            end = mid-1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main() {
    int even[6] = {2,6,8,12,34,56};
    int odd[5] = {3,5,23,32,67};

    int index_even = binarySearch(even, 6, 8);
     int index_odd = binarySearch(odd, 5, 5);

     cout<<"Index of 8 is: "<<index_even<<endl;
     cout<<"Index of 5 is: "<<index_odd<<endl;

}
