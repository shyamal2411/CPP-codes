#include<bits/stdc++.h> 
using namespace std;

// https://codeforces.com/edu/course/2/lesson/9/2/practice/contest/307093/problem/A
#define int long long 
#define nl "\n"
const int M=1e9+7;
typedef vector<int> vi;
#define f(i,a,n) for(int i=a;i<n;i++)
#define rf(i,a,n) for(int i=n-1;i>=a;i--)
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cin.tie(0);cout.tie(0);
#define read(arr,n) for(int i=0;i<n;i++)cin>>arr[i];
#define pr(arr,n) for(int i=0;i<n;i++)cout<<arr[i];
#define in cin>>
#define out cout<<
#define first fr
#define second sc

void solve(){
int n,s,k,i,p,q,r,count=0,j,flag,ans=0;
 cin>>n>>s;
 vi a(n);
 read(a,n);
 int x=0, l=0;
 for (int i=0;i<n;i++){
     x+=a[i];
     while(x>s){
         x-=a[l++];
            l++;
     }
     ans=max(ans,i-l+1);
 }
cout<<ans;
}


int32_t main(){
    FIO int t; t=1;
    // in t;
    while(t--) solve();
  
return 0;
}