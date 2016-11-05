#include<iostream>
using namespace std;
int main(){
int t,n,num;
cin>>t;
for(int i = 0; i<t; i++){
   cin>>n;
   int t = n;
   int sum = 0;
   while(n != 0){
     cin>>num;
     sum = sum + num;
     n--;
   }
   double ave = sum/t;
   cout<<"Case "<< i+1 <<": " <<ave<<endl;

}
return 0;
}
