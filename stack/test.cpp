//In file test.cpp
//Created by Junjie Li, 2014-10-29;
//E-mial: 287150625@qq.com


#include "arrayStack.h"
#include <iostream>

using namespace std;


int main() {
    Stack s;
    cout << s.pop() << " " << s.empty() << endl;
    for (int i = 0; i < MAXLEN; i++) {
        cout << s.push(i) << " " << s.top() << " " << s.empty() << endl;
    }
    cout << s.push(MAXLEN) << " " << s.top() << endl;
    for (int i = 0; i < MAXLEN; i++) {
        // function below called from right to left
        cout << s.pop() << " " << s.top() << " " << s.empty() << endl; 
    }
    cout << s.pop() << " " << s.empty() << endl;
}
