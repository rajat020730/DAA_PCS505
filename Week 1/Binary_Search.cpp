#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int Binary_search(vector<int>arr, int element){
    int size=arr.size(),flag=0;
    int start=0,end=size-1,mid=size/2,count=0;
    while(start<=end){
        count++;
        if(arr[mid]==element){
            flag=1;
            break;
        }
        else if( element<arr[mid]){
            end=mid-1;
            mid=(start+end)/2;
        }
        else{
            start=mid+1;
            mid=(start+end)/2;
        }
    }
    if(flag==1){
        cout<<"PRESENT "<<count<<endl;
    }
    else
    cout<<"NOT PRESENT "<<count<<endl;
    return 0;
}
int main() {
int t;
cin>>t;
while(t--){
    int n;
    vector<int>arr;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int element;
    cin>>element;
    Binary_search(arr,element);
}
}