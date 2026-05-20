#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,a[50],item;
int j;
cout<<"enter the number :"<<endl;
cin>>n;
cout<<"enter the array:"<<endl;
for(j=0; j<n; j++){
cin>>a[j];}
cout<<"kth positin where i want to delete a value of array:"<<endl;
cin>>k;
item=a[k];
for(j=k; j<=n-1; j++){
    a[j]=a[j+1];
}
n--;
cout<<"after deletion:"<<endl;
for(j=0; j<n; j++){
    cout<<" "<<a[j];
}
return 0;
}
