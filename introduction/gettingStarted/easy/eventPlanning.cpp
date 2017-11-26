#include <iostream>
#include <iomanip>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
    int N,B,H,W;

    while(scanf("%d %d %d %d\n",&N,&B,&H,&W))
    {
        int bestPrice=-1;
        vector<int> beds;
        vector<int> :: iterator i;
        int p;
        while(H--)
        {
            scanf("%d\n",p );
            char ch = 'a';
            int temp;
            while(ch!='\n')
            {
                scanf("%d%c",&temp,&ch);
                beds.push_back(temp);
            }

            for(i=beds.begin(); i!=beds.end(); ++i)
            {
                if( *i >= N ) bestPrice = N * p;
            }
        }
        if(bestPrice<=B) printf("%d\n",bestPrice );
        else printf("stay home\n");
    }
    return 0;
}
