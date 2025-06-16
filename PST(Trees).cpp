// #include<bits/stdc++.h>
// using namespace std;
// int fun(int a[],int c,int d){
//     if(c==d)
//     return 0;
//  return a[c]+fun(a,c+1,d);
 
// }
// int main(){
//     int n;
//     cin>>n;
//     int q;
//     cin>>q;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     while(q--){
//         int c,d;
//         cin>>c>>d;
//       int ans= fun(a,c-1,d);
//       cout<<ans;
        
//     }
    
// }
//The time complexity of above program is O(q*n)
//Reducing it to O(q)-uisng the prfix sum

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//      int n;
//     cin>>n;
//     int q;
//     cin>>q;
//     int a[n+1];
//     a[0]=0;
//     for(int i=1;i<=n;i++){
//         cin>>a[i];
//     }

//     for(int i=2;i<=n;i++){
//         a[i]+=a[i-1];
//     }
//     while(q--){
//         int c,d;
//         cin>>c>>d;
//   //     cout<<a[d-1]-a[c-2];
//   // cout<<a[d-1];
// }
// }
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n, q;
//     cin >> n >> q;
//     vector<int> a(n), prefix(n + 1, 0);

//     for (int i = 0; i < n; ++i) {
//         cin >> a[i];
//         prefix[i + 1] = prefix[i] + a[i];
//     }

//     while (q--) {
//         int c, d;
//         cin >> c >> d;
       
//         cout << prefix[d] - prefix[c - 1] << endl;
//     }

//     return 0;
// }

//MAX ELEMNTIN A GIVEN RANGE
#include<bits/stdc++.h>
using namespace std;
vector<int> createTree(vector<int> & a,int n,int l,int r,int i){
  vector<int>s(4*n);
  int i=1;
  if(l==r)
  {
      s[i]=a[l];
      return;
  }
  int mid=(l+r)/2;
  createTree(a,n,l,r,i+1);
  createTree(mid+1,r,2*i+2);
  s[i]=max(s[i*2+1],s[i*2+2]);
}
// int maxElement(int a[],int n,int l,int r,int s ,int e){
//     l=0;
//     r=n-1;
//   int   mid=(l+r)/2;
//   if(r<s || l>e)
//   return 0;
//   else if(l>=s && r<=e)
//   return a[mid];
    
//     while(l<r){
//         mid=(l+r)/2;
//       return max( maxElement(a,n,l,mid,s,e),maxElement(a,n,mid+1,r,s,e));
        
//     }
    
// }
int main(){
    int n;
    cin>>n;
    // int q;
    // cin>>q;
   vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int length=4*n;
    int i=1;
    vector<int>s(length);
     createTree(a,,n,l,r,i);
    // int l=0,r=0;
    // while(q--){
    //     int s,e;
    //     cin>>s>>e;
    //     cout<<maxElement(a,n,l,r,s,e);
    // }
}
