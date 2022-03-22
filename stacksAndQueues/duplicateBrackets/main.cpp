#include <bits/stdc++.h>

using namespace std;

  int main()
  {
      string s;
      getline(cin,s);
      stack<char>st;
      for(int i=0;i<s.length();i++)
      {
          char ch=s[i];
          if(ch==')')
          {
              if(st.top()=='(')
              {
                  cout<<"TRUE"<<endl;
                  return 0;
              }
              else
              {
                  while(st.top()!='(')
                  {
                      st.pop();
                  }
                  st.pop();
              }
          }
          else
          {
              st.push(ch);
          }
      }
      cout<<"FALSE"<<endl;

      return 0;
  }





