#include<bits/stdc++.h>
using namespace std;
int main(){
stack<int>s;
int n,i,k,s1=0;
cout<<"Enter the num:"<<endl;
cin>>n;
cout<<"stack element:"<<endl;
for(i=0; i<n; i++){
cin>>k;
s.push(k);}
cout<<"top:"<<endl;
for(i=0; i<n; i++){
cout<<s.top()<<endl;
s.pop();}
for(i=0; i<n; i++){
s1=s1+s.top();
s.pop();
}
cout<<s1;
return 0;}

