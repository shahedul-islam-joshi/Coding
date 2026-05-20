#include<bits/stdc++.h>
using namespace std;
int main()
{
int k;
int m,n;
int temp;
int i,p, data[50];
cout<<"enter a number:"<<endl;
cin>>p;
cout<<"ENTER a array:"<<endl;
for(i=0; i<p; i++){
    cin>>data[i];
}
for(k=0; k<p-k; k++){
    for(i=0; i<p-k; i++){
        if(data[i]>data[i+1]){
            temp=data[i];
            data[i]=data[i+1];
            data[i+1]=temp;
        }
    }
}
for(n=0; n<p; n++){
    cout<<" "<<data[n];
}
return 0;
}
