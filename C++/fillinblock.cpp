#include<iostream>
using namespace std;

int f(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else if(n==2) return 5;
    else if(n==3) return 11;
    else if(n==4) return 36;
    else return f(n-1) + 4*f(n-2) + 2*f(n-3) + *f(n-4);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<f(n)<<endl;
    }
}
