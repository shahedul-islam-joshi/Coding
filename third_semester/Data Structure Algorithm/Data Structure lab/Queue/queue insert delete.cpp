#include<bits/stdc++.h>
using namespace std;
int main(){
queue<int>s;

int i,k,n;
cin>>n;
for(i=0; i<=n; i++){
//scanf("%d",&k);
cin>>k;
s.push(k);}
while(!s.empty()){
//printf("%d\n",s.front());
cout<<"front:"<<s.front()<<endl;
s.pop();}
return 0;
}
