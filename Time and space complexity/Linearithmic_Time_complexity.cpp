problem:01

for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    sort(a,a+n); //O(NlogN)

O(NlogN)

problem:02

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   for(int i=1;i<n;i++){  // O(N)
    for(int j=1;j<=n;j*=2){ //O(logN)
        cout <<"hi"<<endl;
    }
   }
   return 0;
}
O(NlogN)
problem:03
for(int i = 0; i < n; i++) {
    sort(a, a + n);
}
O(N*NlogN)