#include<stdio.h>
#include<iostream>
#include<vector>
#include<queue>
using namespace std;


int main(){
    vector <int> adj_list[10];
    int n,e,x,y,i,j;
    freopen("inp_list.txt","r", stdin);

    scanf("%d %d",&n,&e);

    //GRAPH INPUT
    for(i=0;i<e;i++){
        scanf("%d %d",&x,&y);
        adj_list[x].push_back(y);
        adj_list[y].push_back(x);
    }

    //GRAPH TRAVERSE
    for(i=0;i<n;i++){
            printf("%d => ",i);
        for(j=0;j<adj_list[i].size();j++){
            printf("%d ",adj_list[i][j]);
        }
        printf("\n");
    }


    int P[8],L[8],V[8];

    for(int i=0;i<n;i++){
        L[i]=0;
        P[i]=0;
        V[i]=0;
    }

    int s=0,u,ad;
    queue <int> q;

    L[s]=0;
    P[s]=-1;
    V[s]=1;
    q.push(s);

    while(!q.empty()){
        u=q.front();
        q.pop();
        //printf("%d\t",u);
        for(i=0;i<adj_list[u].size();i++){
            ad=adj_list[u][i];
            if(V[ad]==0){
                P[ad]=u;
                L[ad]=L[u]+1;
                V[ad]=1;
                q.push(ad);
            }
        }
        V[u]=2;
    }

    for(i=0;i<n;i++){
        printf("Node %d, Level %d, Parent %d\n",i,L[i],P[i]);
    }
    return 0;
}

