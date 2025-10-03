#include <stdio.h>

int main()
{   
    int l,m;

    scanf("%d %d",&l,&m);

    int tree[10001]={0};

    for(int i=0;i<=l;i++)
    {
        tree[i]=1;
    }
    for(int i=1;i<=m;i++)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        for(int z=x;z<=y;z++)
        {
            tree[z]=0;
        }
    }

    int cnt=0;
    for(int i=0;i<=l;i++)
    {
        if(tree[i]==1)
        {
            cnt++;
        }
    }
    printf("%d",cnt);

   return 0;
}