#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[]) {

    int n;
    scanf("%d",&n);
    int a[n][2];

    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&(a[i][0]),&(a[i][1]));
    }
    for(int i=0; i<n; i++)
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
