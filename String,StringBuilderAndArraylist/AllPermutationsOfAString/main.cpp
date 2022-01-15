#include <iostream>
#include <string>

using namespace std;

    int Factorial(int n)
    {
        int val=1;
        for(int i=2;i<=n;i++)
        {
            val*=i;
        }
      return(val);
    }

    void AllPerm(string str)
    {
        int n=str.length();
        int f=Factorial(n);

        for(int i=0;i<f;i++)
        {
            string ans=str;
            int temp=i;
            for(int div=n;div>=1;div--)
            {
                int q=temp/div;
                int r=temp%div;

                cout<<ans[r];
                ans.erase(r,1);

                temp=q;

            }
            cout<<ans<<endl;
        }
    }

int main()
{
     string str;
     cout<<"ENTER THE STRING:"<<endl;
        getline(cin,str);
     AllPerm(str);

}
