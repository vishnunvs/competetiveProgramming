#include <iostream>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int N,xc,yc,x,y,count;
    while (scanf("%d",&N),(N!=0))
    {
        /* code */
        count = 0;
        N = N+1;
        while((N)--)
        //while(scanf("%d %d",&x,&y) == 2)
        {
            scanf("%d %d",&x,&y);
            if(count == 0)
            {
                xc = x;
                yc = y;
                count++;
            }
            else
            {
                    if(x==xc || y==yc) printf("divisa\n");
                    if(x>xc && y>yc) printf("NE\n");
                    if(x>xc && y<yc) printf("SE\n");
                    if(x<xc && y>yc) printf("NO\n");
                    if(x<xc && y<yc) printf("SO\n");
            }
        }
    }
    return 0;
}
