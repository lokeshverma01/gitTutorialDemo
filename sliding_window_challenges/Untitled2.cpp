// Given an array of integers Arr of size N and a number K. Return the maximum sum of a subarray of size K.

//  Example 1:

// Input:
// N = 4, K = 2
// Arr = [100, 200, 300, 400]
// Output:
// 700
// Explanation:
// Arr3  + Arr4 =700,
// which is maximum.

#include<bits/stdc++.h>
using namespace std;

int main(){
int n,k,ans=0;

cin>>n;
cin>>k;
int m=k;
int sum=0;

int arr[n];
for(int i=0;i<n;i++)
    cin>>arr[i];


for(int i=0;i<k;i++){
sum +=arr[i];
}
int i=0;
while(m<n){
sum= sum-arr[i]+arr[m];

		ans= max(ans,sum);
		i++;
		m++;

}
cout<<ans;
return 0;

}
