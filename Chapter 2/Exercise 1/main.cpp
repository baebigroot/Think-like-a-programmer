#include <iostream>
/*
    Exercise 2-1:
    Produce the following output with nothing but the hash mark (#), the space
    ( ), and the newline character (\n):
    ########
     ######  
      ####   
       ##

*/
using namespace std;

int main()
{
    int hashNum = 8, space;
    for (int i = 0; i < 4; i++) {
        for (space = 0; space < i; space++) {
            cout << " ";
        }
        for (int j = hashNum; j > 0; j--) {
            cout << "#";
        }
        cout << endl;
        hashNum -= 2;
    }
    return 0;
}

