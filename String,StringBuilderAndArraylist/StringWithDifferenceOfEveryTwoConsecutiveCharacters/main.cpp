#include <iostream>
#include <string>

using namespace std;

int main()
{
      string str;
      cout<<"ENTER THE VALUE OF STRING:"<<endl;
         getline(cin,str);

      for(int i=0;i<str.length();i++)
      {
          int diff=str[i+1]-str[i];
          if(i<str.length()-1)
          {
              cout<<str[i]<<diff;
          }
          else
          {
              cout<<str[i];
          }
      }


}
