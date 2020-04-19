#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1;
    cin >> s2;
    string k;
    string g;
    string res;
    int c,v=0;


    if(s1.length() > s2.length())
    {
        for(int i =0 ; i<(s1.length() - s2.length()) ; i++)
        {
            k=k+'0';
        }
        k=k+s2;
        s2=k;

    }
     for(int i = s1.length()-1 ; i>=0 ; i--)
     {
         c =s1[i]-'0' + s2[i]-'0' +v;
         if(c > 9)
         {
             v = c/10;
             int f = c%10;
             g=f+'0';
             res=res+g;

         }
         else if(c <= 9)
         {

             g=(c+'0');
             cout << "g=" <<g << endl;
             res=res+g;
             c=0;
         }
         c=0;
     }

res=res+'1';
for(int i = res.length()-1;i>=0;i--)
{
    cout << res[i];
}

    return 0;
}
