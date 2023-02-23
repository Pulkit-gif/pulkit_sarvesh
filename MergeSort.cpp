#include<iostream>
using namespace std;

void Merge(int A[], int mid, int low, int high){
    int i, j, k, B[10];
    i = k = low;
    j = mid + 1;

    while (i <= mid && j <= high){
        if (A[i] < A[j])
            B[k++] = A[i++];
        else
            B[k++] = A[j++];
    }
    while (i <= mid){
        B[k++] = A[i++];
    }
    while (j <= high){
        B[k++] = A[j++];
    }
    for (int i = low; i <= high; i++)
        A[i] = B[i];
    
}

void MergeSort(int A[], int low, int high){
    if(low<high){
        int mid = (low + high) / 2;
        MergeSort(A, low, mid);
        MergeSort(A, mid+1, high);
        Merge(A, mid, low, high);
    }
}

void printArray(int *A, int n){
    cout<<endl;
    for (int i = 0; i < n; i++)
        cout<< "    "<<A[i];
}


int main(){
    int A[] = {19, 11, 4, 14, 2, 57, 31};
    int size = 7;
    printArray(A, size);
    MergeSort(A, 0, 6);
    printArray(A, size);
    return 0;
}
