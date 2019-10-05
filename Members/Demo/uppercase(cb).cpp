#include<iostream>
using namespace std;
int main()
   { char i;
   cin>>i;
      if(i>='a' && i<='z')
      {
          cout<<"lowercase"<<endl;
      }
      else if(i>='A' && i<='Z')
      {
          cout<<"UPPERCASE"<<endl;
      }

      else
      {
         cout<<"Invalid"<<endl;
      }
        return 0;
   }
