#include<iostream>
using namespace std;

bool search(int arr[], int n, int key ) {
    for(int i=0; i<n; i++) {
        if (arr[i] == key) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int arr[10] = { 1, -78, 45, 90, 4, -67, 34, -12, 23, 56 };

    cout<< "Enter the element to search: " << endl;
    int key;
    cin>>key;

    bool found = search(arr, 10, key);

    if( found ) {
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"key is not found "<<endl;
    }
}
