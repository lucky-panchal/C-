#include <iostream>
using namespace std;

int main() {
    for(int i=0;i<4;i+=1){
        for(int j=4;j>i;j--){
            cout << " ";
        }
        for(int k=0;k<=i;k++){
            cout << "*";
        }
        for(int l=0;l<i;l++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}   