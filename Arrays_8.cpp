//include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>

using namespace std;

/*
	Longest subarray with sum k positive
	arr = {1,0,1,1,1,0,0,1,1,0};
	output: 3

*/
void display(vector<int>& arr){
	for(int i=0;i<arr.size();i++){
			cout<<arr[i]<<" ";
		}
	cout<<endl;
}

void brute(){
	//using flag
	//TC = O(n^2)
	//SC = O(st)


}

void better(){
	

}

void optimize(){
	//Sum therem
	//TC = O(n1)
	//SC = O(1)
	vector<int> arr = {1,2,3,7,3,1,9,5,2};
	int k = 6;
	int left = 0,right = 0;
	int sum = arr[0];
	int maxlen = -1;
	while(right<arr.size()){
		while(sum>k){
			sum-=arr[left];
			left++;
		}
		
		
		if(sum==k)
			maxlen = max(maxlen,right-left + 1);
		if(sum<arr.size())
			sum+=arr[right];
		right++;
	}

	cout<<maxlen<<endl;
}


int main(){

	brute();
	better();
	optimize();

	return 0;
}