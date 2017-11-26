#include <iostream>
#include <iomanip>
#include <cstdio>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
    int N,depreciationRecords;
    double downPay,loanAmount;
    while(scanf("%d %lf %lf %d\n",&N,&downPay,&loanAmount,&depreciationRecords),(N>=0))
    {
        double d[depreciationRecords];
        int month;
        int noOfMonths;
        double owes,worth;
        while(depreciationRecords--)
        {
            scanf("%d %lf\n",&month,d+month);
            worth = loanAmount -
            //how do we calculate depreciation
        }
    }
    return 0;
}
