#include<iostream>
#include<bits/stdc++.h>
//#include<vector>
using namespace std;
int Search(vector<int> arr, int element){
    int size=arr.size();
    int count=0,flag=0;
    for(int i=0;i<size;i++){
        count++;
        if(arr[i]==element){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"PRESENT "<<count<<endl;
    }
    else
    cout<<"NOT PRESENT "<<count<<endl;

}
int main() {
    int t;
    cin>>t;
    while(t--){
         vector<int>arr;
        int n,i,element;
        cin>>n;
        for(i=0;i<n;i++){
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
        cin>>element;
        Search(arr,element);
    }
}