#include<iostream>
using namespace std;
int main() {
    int n;
    cout<< "Enter the number = ";
    cin >> n;

    bool isPrime = 1;

    /*for(int i=2; i<n ; i++) {
        if (n%i == 0) {
            //cout << "Not a Prime number"<<endl;
            isPrime = 0;
            break;
        }
    }
*/
    if(isPrime == 0) {
        cout << "Not a Prime number"<<endl;
    }

    else {
        cout << " Prime number"<<endl;
    }

}
