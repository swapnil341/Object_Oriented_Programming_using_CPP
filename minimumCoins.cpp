#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
void sortVector(vector<int> &arr){
    sort(arr.begin(),arr.end(),greater<int>()) ;
}

int main() {
    vector<int> coins = {1, 5, 10, 25} ;  
    vector<int> resArr ;
    int amount = 63 ;
    int pos = 0,coinCount = 0 ;
    sortVector(coins);
    
    while(amount >0){
        if(amount >= coins[pos]){
            resArr.push_back(coins[pos]);
            amount -= coins[pos]; 
            coinCount++ ;
        }else{
            pos++ ;
        }
    }
    cout<<"Minimum coins required: "<<coinCount<<endl;
    cout<<"Coins Used { ";
    for(int i : resArr){
        cout<<i<<" " ;
    }
    cout<<" }"<<endl;
    return 0;
}
