#include<iostream>
using namespace std;
int main(){
int arr[10],n,pos,item;
cout<<"enter the size of array";
cin>>n;
cout<<"enter elements";
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<"enter pos and item";
cin>>pos>>item;
for(int i=n-1;i>=pos;i--){
 arr[i+1]=arr[i];
 }
arr[pos]=item;
 for(int i=0;i<n+1;i++){
    cout<<"arr["<<i<<"]="<<arr[i]<<endl;
 }
}
