#include<iostream>
#include<vector>
using namespace std;

int ar[10] = {10,20,26,45,55,73,99,102};

int BinarySearch(int ar[],int low,int high,int val){
    int mid = (low+high)/2;
    if(ar[mid] == val){
        return mid;
    } else if(val > ar[mid]){
        BinarySearch(ar,mid+1,high,val);
    } else if(val < ar[mid]){
        BinarySearch(ar,low,mid-1,val);
    } else
        return 0;
}

int main(){
    int num = 45;
    int index = BinarySearch(ar,0,10,num);
    cout<<"Element found at "<<(index+1)<<" position";
    return 0;
}