#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        long long int n,m,k,i,j,no=0,sumE=0;
        cin>>n>>m>>k;   //READ n m k
        long long int a[n][m],mat[n+1][m+1];
        long long int min_i=min(m,n),t_i,t_j,x=2;
        for(i=0;i<m+1;i++) {mat[0][i]={0};}     //INITIALISE TO ZERO
        for(j=0;j<n+1;j++) {mat[j][0]={0};}
        for(i=0;i<n;i++){   //READ MAT
            for(j=0;j<m;j++){
                cin>>a[i][j];
                if(a[i][j]>=k) {
                    no++;
                }
            }
        }

        for(i=1;i<=m;i++){
            mat[1][i]=a[0][i-1];
        }

        for(i=2;i<=n;i++){
            for(j=1;j<=m;j++){
                mat[i][j]=a[i-1][j-1]+mat[i-1][j];
            }
        }

        for(i=1;i<=n;i++){
            for(j=2;j<=m;j++){
                mat[i][j]=mat[i][j]+mat[i][j-1];
            }
        }

        double avgg=0.0;
        while(min_i >= x){
            for(i=x;i<=n;i++){
                sumE=0;
                for(j=x;j<=m;j++){
                    avgg = 0.0;    //FLOAT avg
                    t_i=i-x+1; t_j=j-x+1;
                    sumE = mat[i][j] - mat[t_i-1][j] - mat[i][t_j-1] + mat[t_i-1][t_j-1];   //find sumE
                    avgg=(1.0*sumE)/(x*x*1.0); //convert to double
                    if(avgg>=k) no++;
                }
            }
            x++;
        }
        cout<<no<<endl; //OUTPUT
    }
}
/*
1
3 3 4
2 2 3
3 4 5
4 5 5
*/
