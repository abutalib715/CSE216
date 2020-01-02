#include <stdio.h>

int main(){
    int n=10;
    int A[10] = {14,23,55,12,98,65,47,5,89,32};
    printf("Bubble Sort In Ascending Order\n");
    bubbleSortAsc(A,n);
    printf("Bubble Sort In Descending Order\n");
    bubbleSortDesc(A,n);
    return 0;
}
void bubbleSortAsc(int A[], int n)
{
    int i, j,temp;
    for (i=0; i<n-1; i++){
        for (j=0; j<n-i-1; j++){
            if (A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    display(A,n);
}
void bubbleSortDesc(int A[], int n)
{
    int i, j,temp;
    for (i=0; i<n-1; i++){
        for (j=0; j<n-i-1; j++){
            if (A[j] < A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
            }
        }
    }
    display(A,n);
}

void display(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}
