//include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<set>

using namespace std;

/*
	Remove Duplicates from the sorted array
	arr = {1,1,2,2,2,3,3,3,4};
	output = 4;
*/

void brute(){
	//using set
	//TC = O(NlogN + N)
	//SC = O(i)

	vector<int> arr = {1,1,2,2,2,3,3,3,4};
	set<int> sets;
	for(int i=0;i<arr.size();i++){
		sets.insert(arr[i]);	
	}
	//Set store array in ordered form by default

	int i = 0;
	for(auto& it:sets){
		arr[i] = it;
		i++;
	}

	cout<<i<<endl;

}

void better(){

}

void optimize(){
	//using 2 pointers
	//TC: O(N)
	//SC: O(1)
	vector<int> arr = {1,1,2,2,2,3,3,3,4};
	int i=0;
	for(int j=1;j<arr.size();j++){
		if(arr[i]!=arr[j]){
			i++;
			arr[i] = arr[j];
		}
	}

	cout<<i+1<<endl;


}

int main(){

	brute();
	better();
	optimize();

	return 0;
}