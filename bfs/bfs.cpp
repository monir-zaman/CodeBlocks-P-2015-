/// BFS
#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<stack>

using namespace std;
vector<int>graph[100];
int n , parent[100];

void bfs(int src)
{
    int u, i, v;
    queue<int>q;
    q.push(src);
    int visited[100] = {0}, level[100];
    visited[src] = 1;
    level[src] = 0;

    while(!q.empty())
    {
        u = q.front();
        for(i=0 ; i<graph[u].size() ; i++)
        {
            v = graph[u][i];

            if(!visited[v])
            {
                level[v] = level[u] + 1;
                parent[v] = u;
                visited[v] = 1;
                q.push(v);
            }
        }
        q.pop();
    }
//    for(i=1; i<=n; i++)
//        printf("%d to %d distance is %d , parent : %d\n", src, i, level[i], parent[i]);
}

int main()
{
    int i, j, e, x, y, v;
    scanf("%d", &n);
    scanf("%d", &e);

    for(i=0 ; i<e ; i++)
    {
        scanf("%d %d",&x,&y);
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    while(scanf("%d", &v) == 1)
    {
        stack<int>pt;
        bfs(v);
        scanf("%d",&x);
        printf("path : ");
        y = x;
        //printf("%d",y);
        pt.push(y);
        while(y!=v)
        {
            //printf("%d",parent[y]);
            y = parent[y];
            pt.push(y);

        }
        while(!pt.empty())
        {
            cout<<pt.top();
            pt.pop();
        }
        printf("\n");
    }
    return 0 ;
}

///input
/*
7 11
1 2
1 3
1 4
1 5
2 5
3 4
3 5
3 6
3 7
5 7
6 7
*/

