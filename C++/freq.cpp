#include <bits/stdc++.h>
using namespace std;

string mostFrequent(string arr[], int n){
	sort(arr, arr + n);
	int max_count = 1, curr_count = 1;
	string res;
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1])
			curr_count++;
		else {
			if (curr_count > max_count) {
				max_count = curr_count;
				res = arr[i - 1];
			}
			curr_count = 1;
		}
	}
	if (curr_count > max_count){
		max_count = curr_count;
		res = arr[n - 1];
	}
	return res;
}
string leastFrequent(string arr[], int n){
    sort(arr, arr + n);
    int min_count = n+1, curr_count = 1;
    string res;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            curr_count++;
        else {
            if (curr_count < min_count) {
                min_count = curr_count;
                res = arr[i - 1];
            }
            curr_count = 1;
        }
    }
    if (curr_count < min_count){
        min_count = curr_count;
        res = arr[n - 1];
    }
    return res;
}
int main()
{
    string a[20];
    int n,i,maxc=0,minc=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<endl;
	string t1=mostFrequent(a, n);
	string t2=leastFrequent(a, n);
    for(i=0;i<n;i++){
        if(a[i]==t1) maxc++;
        if(a[i]==t2) minc++;

    }
    cout<<t1<<" "<<maxc<<endl;
    cout<<t2<<" "<<minc<<endl;
	return 0;
}
