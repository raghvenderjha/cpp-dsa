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

        stack<string>prefix;
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
                prefix.push(s);
                postfix.push(s);
            }
            else if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
            {
                while(opt.size()>0&&opt.top()!='('&&pre(ch)<=pre(opt.top()))
                {
                    string pfv2=prefix.top();
                    prefix.pop();

                    string pfv1=prefix.top();
                    prefix.pop();

                    string ptfv2=postfix.top();
                    postfix.pop();

                    string ptfv1=postfix.top();
                    postfix.pop();

                    char ch=opt.top();
                    opt.pop();


                    prefix.push(ch+pfv1+pfv2);
                    postfix.push(ptfv1+ptfv2+ch);
                }
                opt.push(ch);

            }
            else if(ch==')')
            {
                while(opt.top()!='(')
                {
                    string pfv2=prefix.top();
                    prefix.pop();

                    string pfv1=prefix.top();
                    prefix.pop();

                    string ptfv2=postfix.top();
                    postfix.pop();

                    string ptfv1=postfix.top();
                    postfix.pop();

                    char ch=opt.top();
                    opt.pop();


                    prefix.push(ch+pfv1+pfv2);
                    postfix.push(ptfv1+ptfv2+ch);
                }
                opt.pop();
            }
        }
        while(opt.size()!=0)
        {
                    string pfv2=prefix.top();
                    prefix.pop();

                    string pfv1=prefix.top();
                    prefix.pop();

                    string ptfv2=postfix.top();
                    postfix.pop();

                    string ptfv1=postfix.top();
                    postfix.pop();

                    char ch=opt.top();
                    opt.pop();


                    prefix.push(ch+pfv1+pfv2);
                    postfix.push(ptfv1+ptfv2+ch);
        }

        string anspf=prefix.top();
        string ansptf=postfix.top();
        cout<<"PREFIX"<<"="<<anspf<<endl;
        cout<<"POSTFIX"<<"="<<ansptf<<endl;

        return 0;
    }

