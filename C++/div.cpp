#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        int dividend,divisor,olddiv,q,r,s=0,c=0;
        cin>>dividend>>divisor;
        int a[1000],i,d[500];
        //float x=203,y=200;
        olddiv=dividend;
        while(k!=0 && dividend%divisor!=0){
            q=dividend/divisor;
            r=dividend%divisor;
                dividend=r;
                while(dividend<divisor){ //till >dividend
                    dividend=dividend*10;
                    k--;
                    c++;
                }
                s=s+dividend/divisor;

        }
        cout<<s<<endl;
        //cout<<x/y<<endl;
    }
    //cout<<dividend/divisor<<endl;
}
