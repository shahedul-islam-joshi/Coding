#include<bits/stdc++.h>
using namespace std;
int main(){int i,k;
stack<int>s;
for(i=0; i<=7; i++){
cin>>k;
s.push(k);
}
for(i=0; i<=7; i++){
if(s.top()%2==0){
cout<<"Even is:"<<" "<<s.top()<<endl;
//s.pop();
}
s.pop();
}
for(i=0; i<=7; i++){
 if(s.top()%2!=0){
    cout<<"Odd is:"<<" "<<s.top()<<endl;
    //s.pop();
}
s.pop();
}
return 0;}
