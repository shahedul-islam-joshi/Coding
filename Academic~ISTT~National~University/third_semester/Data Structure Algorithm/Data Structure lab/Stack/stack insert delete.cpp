#include<bits/stdc++.h>
using namespace std;
int main(){
stack<int>s;

int i,k;
for(i=0; i<=2; i++){
//scanf("%d",&k);
cin>>k;
s.push(k);}
while(!s.empty()){
//printf("%d\n",s.top());
cout<<"top:"<<s.top()<<endl;
s.pop();}
return 0;
}
