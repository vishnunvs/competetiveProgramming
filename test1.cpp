//#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string temp(10,'$');
    string s,t;
    getline(cin,s);
    cin>>t;
    cout<<"string:"<<temp<<"\tlength: "<<temp.size()<<endl;
    cout<<"string:"<<s<<"\tlength: "<<s.size()<<endl;
    cout<<"string:"<<t<<"\tlength: "<<t.size()<<endl;
    string sum = s+t;
    //sum = s.append(t);
    //standard template library
    cout<<"string:"<<sum<<"\tlength: "<<sum.size()<<endl;
    temp.clear();
    return 0;
}
