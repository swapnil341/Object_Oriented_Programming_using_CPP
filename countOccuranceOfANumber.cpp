#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int arr[] = {4,5,4,56,8,6,8,1,2,5,1,54,9,8,6,4,5,9,6,4,5,6,2,5};
	vector<int> v(arr,arr+sizeof(arr)/sizeof(int));
	int target,targetCount =0; 
	for(int i =0 ; i< v.size();i++)
		cout<<v[i]<<" ";
	cout<<"\nEnter Target: ";
	cin>>target ;
	targetCount = count(v.begin(),v.end(),target);

	cout<<"Occurance of "<<target<<" is : "<<targetCount<<endl;
	return 0;
}
