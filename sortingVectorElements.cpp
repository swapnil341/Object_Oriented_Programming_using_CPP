#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int arr[] = {2,3,1,5,4};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(int));
	
	sort(v.begin(),v.end());
	
	//print the vector
	int val ;
	//for(val= 0 ; arr+val < arr+sizeof(arr)/sizeof(int); val++){
  for(val = 0 ; val < v.size() ; val++){
		cout<<v[val]<<" ";
	}
	return 0 ;
}
