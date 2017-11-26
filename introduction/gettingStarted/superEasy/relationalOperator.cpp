#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]) {

    int N;
    scanf("%d",&n);
    int a[N][2];

    while(N--)
    {
        scanf("%d %d",&(a[i][0]),&(a[i][1]));
    }
    while(N--)
    {
        if(abs(a[i][0])<abs(a[i][1]))
        {
            //printf("%c\n",'<');
            cout<<'<'<<endl;
        }
        if(abs(a[i][0])>abs(a[i][1]))
        {
            //printf("%c\n",'>');
            cout<<'>'<<endl;
        }
        if(abs(a[i][0])==abs(a[i][1]))
        {
            //printf("%c\n",'=');
            cout<<'='<<endl;
        }
    }
    return 0;
}
