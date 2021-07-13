#include<iostream>
using namespace std;
int Linear_search(int arr[], int n, int m){
    int i,k,j;
    int count=0,flag=0;
    for(i=0;i<n;i++){
        count++;
        if(arr[i]==m){
            flag=1;
            
            break;
        }
    }
    if(flag==1)
    cout<<"The element is present"<<"\n";
    else
    cout<<"The element is not present"<<"\n";
    cout<<"No. of times compared="<<count;
    return 0;
}
int main() {
    int n,m;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched:";
    cin>>m;
    Linear_search(arr,n,m);
}
