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
          if(ch=='('||ch=='{'||ch=='[')
          {
              st.push(ch);
          }
          else if(ch==')')
          {
              if(st.size()==0||st.top()!='(')
              {
                  cout<<"FALSE"<<endl;
                  return 0;
              }
              else
              {
                  st.pop();
              }
          }
          else if(ch=='}')
          {
              if(st.size()==0||st.top()!='{')
              {
                  cout<<"FALSE"<<endl;
                  return 0;
              }
              else
              {
                  st.pop();
              }
          }
          else if(ch==']')
          {
              if(st.size()==0||st.top()!='[')
              {
                  cout<<"FALSE"<<endl;
                  return 0;
              }
              else
              {
                  st.pop();
              }
          }
      }
      if(st.size()==0)
      {
          cout<<"TRUE"<<endl;
      }
      else
      {
          cout<<"FALSE"<<endl;
      }

      return 0;
  }
