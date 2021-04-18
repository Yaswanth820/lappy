#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s[100];
        int i,x[100];
        for(i=0;i<n;i++) cin>>s[i]>>x[i];
        int maxE=x[0],maxI;
        for(i=0;i<n;i++){
            if(maxE<x[i]) {
                maxE=x[i];
                maxI=i;
            }
        }
        cout<<maxE<<endl;
        cout<<s[maxI]<<endl;
    }
}
/*
1
3
jyothsna 10
prasanna 15
vara 8
*/
