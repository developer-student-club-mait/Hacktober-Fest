#include<iostream>
using namespace std;
int main()
   {
       int n1,n2,i=1,count=0;
       cin>>n1>>n2;
       while(count<10)
       {
           int num=3*i+2;
           i++;
           if(num%n2==0)
           {

           }

           else
           {
               cout<<num<<endl;
               count++;
           }
       }
       return 0;
   }
