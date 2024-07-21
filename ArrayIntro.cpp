#include<iostream>
using namespace std;

void printArray() {

}

int main() {
    int number[15];

    //accessing the array

    cout << "Value at index 14 is "<<number[14]<<endl;

    //Initialize the array
    int second[3] = {5, 7, 11};

    //accessing the array
    cout<<"value at index 2 is "<<second[2]<<endl;

    int third[15] = {2,7};
    int n = 15;
    //print the array
    for (int i=0; i<n; i++) {
        cout<< third[i]<<" ";
    }


}
