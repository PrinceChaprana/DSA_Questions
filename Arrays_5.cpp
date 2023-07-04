//include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>

using namespace std;

/*
	Union of two sorted arrray
	arr = {1,2,2,4,7,7};
	arr2 = {1,3,4,5,5,6,6}
	output:
		{1,2,3,4,5,6,7}
*/
void display(vector<int>& arr){
	for(int i=0;i<arr.size();i++){
			cout<<arr[i]<<" ";
		}
	cout<<endl;
}

void brute(){
	//using set array
	//TC = O(N1logN1 )+O(n2logn2)+(O(no of unique elements))
	//SC = O(st)

	vector<int> arr = {1,2,2,4,7,7};
	vector<int> arr2 = {1,3,4,5,5,6,6};
	set<int> st;
	for(int i=0;i<arr.size();i++){
		st.insert(arr[i]);
	}
	for(int i=0;i<arr2.size();i++){
		st.insert(arr2[i]);
	}
	vector<int> un;
	for(int it:st){
		un.push_back(it);
	}
	display(un);

}

void better(){
	

}

void optimize(){
	//2 pointer therom
	//TC = O(n1 + n2)
	//SC = O(1)
	vector<int> arr = {1,2,2,4,7,7};
	vector<int> arr2 = {1,3,4,5,5,6,6};
	vector<int> un;
	int n1 = arr.size();
	int n2 = arr2.size();

	int i=0,j=0;
	while(i<n1 && j<n2){
		if(arr[i]<arr2[j]){
			if(un.size()==0 || un.back()!=arr[i]){
				un.push_back(arr[i]);
			}
			i++;
		}else{
			if(un.size()==0 || un.back()!=arr2[j]){
				un.push_back(arr2[j]);
			}
			j++;
		}
	}
	while(i<n1){
		if(un.size()==0 || un.back()!=arr[i]){
				un.push_back(arr[i]);
			}
		i++;
	}
	while(j<n2){
		if(un.size()==0 || un.back()!=arr2[j]){
				un.push_back(arr2[j]);
			}
		j++;
	}

	display(un);
	
}



int main(){

	brute();
	better();
	optimize();

	return 0;
}