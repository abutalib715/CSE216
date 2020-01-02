#include<stdio.h>
int main(){
    int a[]={21,52,78,41,23,15,44,12,95,89};
    int n=10;
    printf("Insertion Sort In Ascending Order\n");
    insertionSortAsc(a,n);
    printf("Insertion Sort In Descending Order\n");
    insertionSortDesc(a,n);
    return 0;
}
void display(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}

void insertionSortAsc(int A[],int n){
    int i,j,B[n];

    for(i=0; i<n; i++){
        j=i-1;
        while(B[j]>A[i] && j>=0){
            B[j+1]=B[j];
            j--;
        }
        B[j+1]=A[i];
    }
    display(B,n);
}
void insertionSortDesc(int A[],int n){
    int i,j,B[n];

    for(i=0; i<n; i++){
        j=i-1;
        while(B[j]<A[i] && j>=0){
            B[j+1]=B[j];
            j--;
        }
        B[j+1]=A[i];
    }
    display(B,n);
}
