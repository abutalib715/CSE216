#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector < pair<int, int> > adj_list[10];
    int n,e,x,y,w,mat[5][5],i,j;
    freopen("inp_list.txt","r", stdin);

    scanf("%d %d",&n,&e);

    //GRAPH INPUT
    for(i=0;i<e;i++){
        scanf("%d %d %d",&x,&y,&w);
        adj_list[x].push_back(make_pair(y,w));
        adj_list[y].push_back(make_pair(x,w));
    }

    //GRAPH TRAVERSE
    for(i=0;i<n;i++){
        printf("%d => ",i);
        for(j=0;j<adj_list[i].size();j++){
            printf("(%d,%d) ",adj_list[i][j].first,adj_list[i][j].second);
        }
        printf("\n");
    }

    return 0;
}
