#include <bits/stdc++.h>
#include<stack>
using namespace std;

int precedence(char op){
    if(op=='+' || op=='-') return 1;
    if(op=='*' || op=='/') return 2;
    if(op=='^') return 3;
    return 0;
}

bool isRightAssociative(char op){
    return op=='^';
}

int main() {
    string Q,P;
    cout<<" Enter Infix expression"<<endl;
    cin>>Q;
    
    
    stack<char> S;
    for(int i=0;i<Q.length();i++){
        char ch = Q[i];
        if(isalnum(ch)){
            P=P+ch;
        }
        else if(ch=='('){
            S.push(ch);
        }
        else if(ch==')'){
            while(!S.empty() && S.top()!='('){
                P=P+S.top();
                S.pop();
            }
            if(!S.empty()){
                S.pop();  
            }
        }
        else{
            
            while(!S.empty() && S.top()!='(' && 
                  (precedence(S.top()) > precedence(ch) || 
                   (precedence(S.top()) == precedence(ch) && !isRightAssociative(ch)))){
                P=P+S.top();
                S.pop();
            }
            S.push(ch);
        }
    }
    
    while(!S.empty()){
        P=P+S.top();
        S.pop();
    }
    
    cout<<"Postfix expression: "<<P<<endl;
    
    return 0;
}   