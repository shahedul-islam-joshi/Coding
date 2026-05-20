#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[]={1,2,3,4,5,6,7,8,9};
int s=sizeof(a)/sizeof(a[0]);
cout<<"size of array:"<<s<<endl;
int item;
cin>>item;
int l=0,h=8;
int m=(l+h)/2;
while((l<=h)&&(a[m]!=item))
{
if(a[m]<item){
l=m+1;
}
else{
h=m-1;}

m=(l+h)/2;}
if(a[m]==item)
{
cout<<"item at:"<<m<<endl;}
else{
cout<<"item not found:"<<-1<<endl;}
return 0;}
