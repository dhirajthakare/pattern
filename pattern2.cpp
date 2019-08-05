#include<iostream>
using namespace std;
int main(){
int n,i,j,k,m;
cout<<"Enter the pattern row size";
cin>>n;
m=n-1;
for(i=0;i<n;i++) {
for(j=0;j<=m;j++)
cout<<" ";
m=m-1;
for(k=0;k<=i;k++)
cout<<"* ";
cout<<endl;
}
return 0;
}

/* output
if n=5
     * 
    * * 
   * * * 
  * * * * 
 * * * * * 
 like that
*/
