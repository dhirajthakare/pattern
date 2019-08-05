#include<iostream>
using namespace std;
int main(){
int n,i;
char p,m,ch,j,k;
cout<<"Enter the pattern row size";
cin>>n;
p='a'-33+n;
for(i='A';i<=p;i++){
for(k='A';k<=i;k++){
ch=k+32;
cout<<k<<ch<<" ";
}
cout<<endl;
}
return 0;
}

/* output is 
if n=5
Aa
Aa Bb 
Aa Bb Cc 
Aa Bb Cc Dd
Aa Bb Cc Dd Ee

like that
*/
