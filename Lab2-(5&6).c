#include <stdio.h>
int interactiveLinearSearch(int A[], int n, int x);
int recursiveLinearSearch(int A[],int i, int n, int x);
void display(int A[], int n);
void printResult(int flag);

int main(){
    int n=10;
    int A[10] = {14,23,55,12,98,65,47,5,89,32};
    int x,flag;
    display(A,n);
    //INTERECTIVE LINEAR SEARCH
    printf("Search for an item with interactive loop: ");
    scanf("%d",&x);
    flag = interactiveLinearSearch(A,n,x);
    printResult(flag);

    //RECURSSIVE LINEAR SEARCH
    printf("Search for an item with recursive function: ");
    scanf("%d",&x);
    flag = recursiveLinearSearch(A,0,n,x);
    printResult(flag);
    return 0;
}
int interactiveLinearSearch(int A[], int n,int x)
{
    int i;
    for (i=0; i<n; i++){
        if(A[i] == x){
            return i;
        }
    }
    return -1;
}
int recursiveLinearSearch(int A[], int i, int n, int x)
{
    if(i>=n)
        return -1;

    if(A[i] == x){
        return i;
    }
    recursiveLinearSearch(A,i+1,n,x);
}


void display(int A[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d\t",A[i]);
    }
    printf("\n");
}

void printResult(int flag){
    if(flag != -1)
        printf("Item found at index of %d\n",flag);
    else
        printf("Item not found\n");
}

