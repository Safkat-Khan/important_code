#include <iostream>
using namespace std;



int main(){
int input[100], output[100], c, i;



cout << "Enter number of arrays\n";
cin >> c;



cout << "Enter " << c << " numbers \n";



for(i = 0; i < c; i++){
cin >> input[i];
}



for(i = 0; i < c; i++){
output[i] = input[c-i-1];
}
cout << "Reversed Array\n";
for(i = 0; i < c; i++){
cout << output[i] << " ";
}
return 0;
}
