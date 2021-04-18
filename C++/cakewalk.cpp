#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a;
        cin>>a;
        string b="";
        int i,j,flag;
        for(i=0;i<a.length();i++){
            flag=0;
            if(b.length()==0) b=b+a[0];
            else{
                for(j=0;j<b.length();j++){
                    if(a[i]==b[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0) b=b+a[i];
            }
        }
        cout<<b<<endl;
    }
}

/*
2
aasdvasvavda
sajhags
*/
