#include <stdio.h>
int palindrome(int n){
	int t,s=0,r;
	t=n;
	while(t!=0){
		r=t%10;
		s=s*10+r;
		t=t/10;
	}
	if(s==n) return 1;
	else return 0;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int num,i;
		scanf("%d", &num);
		i=num+1;            			// Reading input from STDIN
		while(palindrome(i)!=1){
			i++;
		}
		printf("%d",i);
	}

}
