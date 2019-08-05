#include<iostream>
using namesapce std;
int main(){
int n,i,j;
cout<<"Enter the pattern row size";
cin>>n;
for(i=0;i<n;i++) {
cout<<endl;
for(j=0;j<=i;j++)
cout<<"* ";
}
return 0;
}

/*  pattern  output is
  *
  * *
  * * *
  * * * *
  * * * * *
  like that
*/
