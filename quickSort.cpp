#include <bits/stdc++.h>
int partition(vector<int>& arr, int s, int e) {

    int pivot = arr[s];
    int cnt = 0;

    for(int i=s+1; i<=e; i++){
        if(arr[i] < pivot) {
            cnt++;
        }
    }

    //place pivot at right position
    int pivotIndex = s+cnt;

    swap(arr[pivotIndex], arr[s]);

    // solve left and right part

    int i=s, j=e;
    while(i<pivotIndex && j> pivotIndex) {
        while(arr[i]<pivot) {
            i++;
        }
        while(arr[j] > pivot) {
            j--;
        }

        if(i<pivotIndex && j>pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;

}

int solve(vector<int>& arr, int s, int e) {

    // base case
    if(s>=e) {
        return 0;
    }

    //partition
    int p = partition(arr, s, e);

    solve(arr, s, p-1);
    solve(arr, p+1, e);

}

vector<int> quickSort(vector<int> arr)
{
    solve(arr, 0, arr.size()-1);
    return arr;
}
