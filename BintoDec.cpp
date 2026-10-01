#include<iostream>
using namespace std;
string dectobin(int n){
    if(n<=0){
        return to_string(n);

    }
    return dectobin(n/2)+to_string(n%2);
}
int main(){
    int n;
    cout<<"Enter the number that to be converted into binary:"<<endl;
    cin>>n;
    cout<<dectobin(n)<<endl;
}
