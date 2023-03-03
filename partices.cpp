/*
//<----------Clock Math---------->

#include <bits/stdc++.h>

using namespace std;

int main() {
	int H, M;
	cin >> H >> M;
	double deg=0.5*(60*H-11*M);
	if(deg>180){
		deg=360-deg;
	}
	cout << fixed << setprecision(7) << deg;

	return 0;
}


*/


/*
#include<bits/stdc++.h>
using namespace std;
int main(){
int a;
cin>>a;
if(a%)




return 0;
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

int main()
{
 int t;
 cin>>t;

while(t--)
 {
     int X,P,Q,fine;
   cin>>X>>P>>Q;
   int tp=P-Q;
    fine=X*tp;
    cout<<fine<<endl;
  }

 return 0;
}
*/


/*
//<------------------Devision---------------------->
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    for(int i=1;i<=N;i++){
        if(N%i==0){
            cout<<i<<endl;
        }
    }




return 0;
}
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
string A,B;
int c,d;

cin>>A>>B;
c=A;
d=B;
if(A==B){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}




return 0;
}
