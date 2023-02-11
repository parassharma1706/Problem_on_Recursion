//*****************Reverse an array using recursion********************
#include<bits/stdc++.h>
using namespace std;
void reversing(int i,int arr[],int n){

if(i>=n)
return ;

swap(arr[i],arr[n-1]);
reversing(i+1,arr,n-1);

}
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
	cin>>a[i];
}
for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}
cout<<endl;

reversing(0,a,n);

for(int i=0;i<n;i++){
	cout<<a[i]<<" ";
}
	return 0;
}
