#include <iostream>
#include <string>

using namespace std;

     void StringCompression1(string str)
     {
         int i=0;
         while(i<str.length())
         {
             while(i<str.length()&&str[i]==str[i+1])
             {
                 i++;
             }
             cout<<str[i];
             i++;
         }
         cout<<endl;
     }
     void StringCompression2(string str)
     {
         int i=0;
         while(i<str.length())
         {
             int count=1;
             while(i<str.length()&&str[i]==str[i+1])
             {
                 i++;
                 count++;
             }
             cout<<str[i];
             if(count>1)
             {
                 cout<<count;
             }
             i++;
         }


     }

int main()
{
    string str;
    cout<<"ENTER THE VALUE OF STRING:"<<endl;
        getline(cin,str);
    StringCompression1(str);
    StringCompression2(str);

}
