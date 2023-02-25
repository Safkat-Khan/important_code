
#include<iostream>
#include<string>
using namespace std;

void encode(string s, int x)
{
cout<<"Input string:"<<s<<endl;
for(int i=0;i<s.length();i=i+x)
    {
if (i==0 )
    {continue;}
    s[i]=s[i]+2;
    i++;
    }
cout<<"Converted String : "<<s;
    }

int main()
{



encode("I am a Student",2);


}
