#include<bits/stdc++.h>
using namespace std;
int main() {
     int n[3],s=0;
   for(int i=0;i<3;i++)
   {
       cin>>n[i];
       s +=n[i];
   }
   cout<<s;
    return 0;
}

/*
Expected Input 1
127
Output
10

Expected Input 2
444
Output
12
*/
