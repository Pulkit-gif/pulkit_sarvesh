#include<iostream>
#include<vector>
using namespace std;

int main(){
    int ar[10] = {3,15,78,2,45,19,8,12,40,55};
    int size = 10,temp = 0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(ar[j]>ar[j+1]){
                temp = ar[j+1];
                ar[j+1] = ar[j];
                ar[j] = temp;
            }
        }
    }

    for(int item : ar)
        cout<<" "<<item;
    return 0;
}