
void BFS(int ssx,int ssy,int eex,int eey,int nn,int mm)
{  
    while(!Q.empty()) Q.pop();
    memset(vis,0,sizeof(vis));
    vis[ssx][ssy]=1;
    Q.push(Node(ssx,ssy));
    while(!Q.empty())
    {
        Node node=Q.front();Q.pop();
        int r=node.r,c=node.c;
        for(int d=0;d<4;d++)
        {
            int nr=r+dr[d];
            int nc=c+dc[d];
            if (maze[nr][nc]=='X'){
                vis[nr][nc]=1;
            }
            if(nr>=0&&nr<nn&&nc>=0&&nc<mm&&vis[nr][nc]==0)
            {   
                vis[nr][nc]=1;
                Q.push(Node(nr,nc));
                pre[nr][nc]=Node(r,c);
                if(nr==eex&&nc==eey){
                    flag=true;
                    return;
                }
                else{
                    flag=false;
                }
            }
       
        }
    }
}
