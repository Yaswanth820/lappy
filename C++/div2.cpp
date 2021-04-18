#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int dividend,divisor,q,r,k,mulpf=0,s=0;
        cin>>k;
        cin>>dividend>>divisor;
        q=dividend/divisor;
        r=dividend%divisor;
        while(k!=0 && r!=0){
            mulpf=0;
            dividend=r;
            while(dividend<divisor){
                dividend=dividend*10;
                if(mulpf >= 1) k--;
                mulpf++;
            }
            //cout<<"M::"<<mulpf<<" k::"<<k<<endl;
            q=dividend/divisor;
            r=dividend%divisor;
            //cout<<"q::"<<q<<endl;
            if(k>0) {
                s=s+q;
                k--;
            }
        }
        cout<<s<<endl;
        //cout<<x/y<<endl;
    }
}
