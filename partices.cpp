/*
#include<iostream>
#include<cstring>
using namespace std;

int main()
{

string s;

cin>>s;

reverse(s.begin(),s.end());
cout<<s;



    return 0 ;
}
*/

/*
#include <algorithm>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "Journal Dev reverse example";
    reverse(str.begin(), str.end());
	cout<<"\n"<<str;
    return 0;
}
*/

/*
#include<algorithm>
#include<iostream>
#include<cstring>

using namespace std;

int main(){

string s;

cin>>s;
string p=s;
reverse(s.begin(),s.end());

if(s==p){
    cout<<"yes"<<endl;
}
else{
    cout<<"no"<<endl;
}

return 0;


}
*/


#include<iostream>
#include<math.h>

using namespace std;
int main(){

double H,M,deg;
cin>>H>>M;
cout<<H<<" "<<M<<endl;
deg=0.5*(11*M-60*H);
cout<<"First Deg = "<<deg<<endl;
if(deg<180){
    deg=360-deg;
}
cout<<deg;


return 0;
}


