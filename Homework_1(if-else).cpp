
#include<iostream>
using namespace std;
int main() {
    char ch;
    cout<<"enter the value of ch: ";
    cin >> ch;
    if(ch>='A' && ch<='Z') {
        cout<<ch<<" is a uppercase"<<endl;

    }
    else if (ch>='a' && ch<='z') {
        cout<<ch<<" is lowercase"<<endl;
    }

    else {
        cout<<ch << " is numeric"<< endl;
    }


}
