//.................Equalize the array.................//

#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,count=1;
    int arr[1000];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int compare=INT_MIN;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1])
            count++;
        else
            count=1;
        if(count>compare)
            compare=count;
    }
    int ans=n-compare;
    cout<<ans<<endl;
    return 0;
}