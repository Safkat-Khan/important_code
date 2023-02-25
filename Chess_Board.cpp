//Chess Board Codes

#include <iostream>
using namespace std;

/*int main(){​​​​​​​
    int r,c,input;
    cout<<"Enter Choice: 1. Bishop 2. Queen: ";
    cin >> input;
    cout<< "Enter row: ";
    cin>> r;
    cout<< "Enter col: ";
    cin >> c;
    cout<< "Open Paths: ";
    for(int i=0;i<8;i++){​​​​​​​
        for(int j =0;j<8;j++){​​​​​​​
            if(input == 1){​​​​​​​
                if(i-j == r-c || i+j ==r+c){​​​​​​​
                    cout <<i<<","<<j<< " ";
                }​​​​​​​
            }​​​​​​​
            else{​​​​​​​
                if(i-j == r-c || i+j ==r+c || r==i || j==c){​​​​​​​
                    cout <<i<<","<<j<< " ";
                }​​​​​​​
            }​​​​​​​
        }​​​​​​​
    }​​​​​​​
    return 0;
}​​​​​​​*/


int main(){​​​​​​​
    char chess[8][8];
    for(int i=0;i<8;i++){​​​​​​​
        for(int j=0;j<8;j++){​​​​​​​
            if((i+j)%2 == 0){​​​​​​​
                chess[i][j] = 'B';
            }​​​​​​​
            else chess[i][j] = 'W';
            cout <<chess[i][j]<< " ";
        }​​​​​​​
        cout <<endl;
    }​​​​​​​
    int r,c;
    cout << "Enter row: ";
    cin >> r;
    cout << "Enter col: ";
    cin >> c;
    //cout<< "Open Paths: ";
    for(int i=0;i<8;i++){​​​​​​​
        for(int j=0;j<8;j++){​​​​​​​
            if(i-j == r-c || i+j == r+c || r==i || j==c){​​​​​​​
                chess[i][j] ='*';
                //cout<< i <<","<<j<<" ";
            }​​​​​​​
        }​​​​​​​
    }​​​​​​​
    chess[r][c]='@';
    for(int i=0;i<8;i++){​​​​​​​
        for(int j=0;j<8;j++){​​​​​​​
            cout << chess[i][j]<< " ";
        }​​​​​​​
        cout << endl;
    }​​​​​​​
}​​​​​​​




