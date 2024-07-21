#include<iostream>
using namespace std;

int nth_term_AP( int n){

    // Basically formula of AP Series is tn = a1+(n-1)*d
    int ans = 3 * n + 7;
    return ans;
}

int main () {

    int n;
    cin>>n;
    cout<<"The term of the series is = "<<nth_term_AP( n)<<endl;
    return 0;
}
