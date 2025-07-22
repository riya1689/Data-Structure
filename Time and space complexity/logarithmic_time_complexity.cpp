problem:01
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ; cin >> n ;

 

    for(int i =N ;i>1 ;i= i/2 ){

    cout << i << endl ;

    }

   return 0;
}

Input : 100 

 Output : 100 50 25 12 6 3 
Operation Decrease base of logarithmic(decreasing with dividing)
time complexity -> Logarithmic Complexity O(logN)

problem:02
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ; cin >> n ;

 

 for(int i =1 ;i<n ;i=i*2){

 cout << i << endl ;

 } 

   return 0;
}

Input : 100 

Output : 1 4 8 16 32 64
Operation Decrease base of logarithmic
time complexity -> Logarithmic Complexity O(logN)

problem:03
#include<bits/stdc++.h>
using namespace std;
int main()
{
    k=2 ;

 for(int i =0 ;i<n ;i++){

 i*=k ;

 }

   return 0;
}