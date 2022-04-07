#include <bits/stdc++.h>

using namespace std;

    int op(int v1,int v2,char ch)
    {
        if(ch=='+')
        {
            return v1+v2;
        }
        else if(ch=='-')
        {
            return v1-v2;
        }
        else if(ch=='*')
        {
            return v1*v2;
        }
        else if(ch=='/')
        {
            return v1/v2;
        }
    }

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

        stack<int>opr;
        stack<char>opt;

        for(int i=0;i<str.length();i++)
        {
            char ch=str.at(i);

            if(ch=='(')
            {
                opt.push(ch);
            }
            else if(isdigit(ch))
            {
                opr.push(ch-'0');
            }
            else if(ch=='+'||ch=='-'||ch=='*'||ch=='/')
            {
                while(opt.size()>0&&opt.top()!='('&&pre(ch)<=pre(opt.top()))
                {
                    int v2=opr.top();
                    opr.pop();

                    int v1=opr.top();
                    opr.pop();

                    char ch=opt.top();
                    opt.pop();

                    int ans=op(v1,v2,ch);
                    opr.push(ans);
                }
                opt.push(ch);

            }
            else if(ch==')')
            {
                while(opt.top()!='(')
                {
                    int v2=opr.top();
                    opr.pop();

                    int v1=opr.top();
                    opr.pop();

                    char ch=opt.top();
                    opt.pop();

                    int ans=op(v1,v2,ch);
                    opr.push(ans);
                }
                opt.pop();
            }
        }
        while(opt.size()!=0)
        {
            int v2=opr.top();
            opr.pop();

            int v1=opr.top();
            opr.pop();

            char ch=opt.top();
            opt.pop();

            int ans=op(v1,v2,ch);
            opr.push(ans);
        }

        int ans=opr.top();
        cout<<ans<<endl;

        return 0;
    }

