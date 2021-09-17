#include<bits\stdc++.h>
using namespace std;

vector<int> fibv(10000,-1);

int fib(int n){
    if(fibv[n]!=-1)
        return fibv[n];

    else
    {
        if(n<=1)
        {
            fibv[n]=n;
            return n;
        }
        else
            return fib(n-1)+fib(n-2);
    }
}

int32_t main(){
    int n; cin>>n;
    cout<<fib(n);
}