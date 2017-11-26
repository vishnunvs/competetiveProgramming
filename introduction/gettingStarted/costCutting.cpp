#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]) {
    int N,i=0;
    int s1,s2,s3;
    scanf("%d",&N);

    while(N--)
    {
        i++;
        scanf("%d %d %d",&s1,&s2,&s3);

        int maximum = max(max(s1,s2),max(s2,s3));
        int minimum = min(min(s1,s2),min(s2,s3));
        int median;

        if(s1>minimum && s1<maximum) median = s1;
        if(s2>minimum && s2<maximum) median = s2;
        if(s3>minimum && s3<maximum) median = s3;

        printf("case %d: %d\n",i,median);
    }
    return 0;
}
