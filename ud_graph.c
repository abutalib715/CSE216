#include<stdio.h>
int main(){
    int n,e,x,y,w,mat[5][5],i,j;
    freopen("inp.txt","r", stdin);

    scanf("%d %d",&n,&e);
    //MATRIX INITIALIZE WITH ZERO
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            mat[i][j]=0;
        }
    }
    //GRAPH INPUT
    for(i=0;i<e;i++){
        scanf("%d %d %d",&x,&y,&w);
        mat[x][y]=w;
        mat[y][x]=w;
    }

    //GRAPH TRAVERSE
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
