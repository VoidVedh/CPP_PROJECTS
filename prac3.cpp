//print :
// a
// bc
// def
// ghij
#include<iostream>
using namespace std;
int main(){
    int n = 5;
    char c = 'a';
    for(int i = 0 ; i < n ; i++){
        for (int j = 0 ;j<i ; j++){
            cout<<c;
            c++;
        }
        cout<<endl;

    }
    return 0;
}
