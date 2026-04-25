//logical level :
// print a square : ABC
//                  DEF
//                  GHI

#include<iostream>
using namespace std;
int main(){
    char c = 'A';
    for(int i = 1; i < 4; i ++){
        for(int j = 1 ; j<4;j++){
            cout<<c;
            c++;
        }
        cout<<endl;
    }
    return 0;

}
