#include<iostream>
using namespace std;
int main()
{
  /* int n;
    cin>>n;
     int i = 1;

     while(i<=n){
           cout<<i<<" ";
           i++;
     }
}*/
int n;
cout<<"Enter numbers: "<<n<<endl;
cin>>n;
int i = 1;
int sum= 0;
while(i<=n){
    sum = sum+i;
    i=i+1;

}
cout<<sum<<endl;
}
