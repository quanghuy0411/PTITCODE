#include<bits/stdc++.h>
using namespace std;
int n,k,ok=1;
int a[101];
void ktao()
{
for(int i=1;i<=n;i++) a[i]=i;
}
void sinh()
{
int j=n-1;
while(a[j]>a[j+1]&&j>0){  j--;}
if(j==0) ok=0;
else{
int i=n;
while(a[j]>a[i])i--;
swap(a[i],a[j]);
reverse(a+j+1,a+n+1);
}
}
void in()
{
for(int i=1;i<=n;i++ ) cout<<a[i]; cout<<"\n";
}
int main()
{
int t;
cin>>t;
while(t--)
{
ok=1;
cin>>n;
int b[n+1];
for(int i=1;i<=n;i++) { cin>>b[i]; }
int cnt=1,ans=1;
ktao();
while(ok)
{

int dem=0;
for(int i=1;i<=n;i++) if(a[i]==b[i])++dem;

if(dem==n) {ans=cnt; break;}
++cnt;
sinh();
}
cout<<ans<<endl;
}
}
