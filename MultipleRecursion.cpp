// all posible sequences that reduce from n->0 or negative number
#include<iostream>
using namespace std;
int reduce(int n,int a,int b){
    if(n==0)return 1;
    if(n<0) return 0;
    return reduce(n-a,a,b)+reduce(n-b,a,b);
}
int main(){
    int n,a,b;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;
    cout<<reduce(n,a,b);
    
}