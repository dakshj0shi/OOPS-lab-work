#include <iostream>
using namespace std;
// int main(){
//     if((cout<<"Hello")==-1){
//         cout<<"Hello";
    
//     }
//     else{
//         cout<<"world";
//     }
//     return 0;
// }

void printNumbers(int n) {
    cout << n << " ";
    
    if (n != 0) {
        printNumbers(n - 1); 
    }
}

int main() {
    printNumbers(100);
    return 0;
}
