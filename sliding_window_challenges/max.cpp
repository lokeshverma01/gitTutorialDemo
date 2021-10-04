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

#include<iostream>
using namespace std;

int main(){
	int n=4, k=2, ans=0,sum=0;
	int arr[4]={100,200,300,400};
	
	for(int i=0;i<k;i++){
		sum+=arr[i];
		
	}

	ans=sum;
	int i=0,m=k;
	while(m<n){
		sum= sum-arr[i]+arr[m];

		ans= max(ans,sum);
		i++;
		m++;
	}
	cout<<ans<<endl;
}
