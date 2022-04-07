#include <bits/stdc++.h>

using namespace std;



     int pre(char ch)
     {
         if(ch=='+'||ch=='-')
         {
             return 1;
         }
         else if(ch=='*'||ch=='/')
         {
             return 2;
         }
     }

     int main()
     {
         string str;
         getline(cin,str);

         stack<string>postfix;
         stack<char>opt;

         for(int i=0;i<str.length();i++)
         {
             char ch=str.at(i);

             if(ch=='(')
             {
                 opt.push(ch);
             }
             else if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
             {
                 string s=string(1,ch);
                 postfix.push(s);
             }
             else if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
             {
                 while(opt.size()>0&&opt.top()!='('&&pre(ch)<=pre(opt.top()))
                 {
                     string v2=postfix.top();
                     postfix.pop();

                     string v1=postfix.top();
                     postfix.pop();

                     char ch=opt.top();
                     opt.pop();


                     postfix.push(v1+v2+ch);
                 }
                 opt.push(ch);
             }
             else if(ch==')')
             {
                 while(opt.top()!='(')
                 {
                     string v2=postfix.top();
                     postfix.pop();

                     string v1=postfix.top();
                     postfix.pop();

                     char ch=opt.top();
                     opt.pop();


                     postfix.push(v1+v2+ch);
                 }
                 opt.pop();
             }
         }
         while(opt.size()!=0)
         {
              string v2=postfix.top();
              postfix.pop();

              string v1=postfix.top();
              postfix.pop();

              char ch=opt.top();
              opt.pop();


              postfix.push(v1+v2+ch);
         }

         string ans=postfix.top();
         cout<<ans<<endl;

         return 0;
     }

