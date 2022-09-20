#include <iostream>
using namespace std;
#include "Stack.h"

int main() {
    Stack AnhStack(7);

    AnhStack.push(-1112);
    AnhStack.push(35);
    AnhStack.push(-1);
    AnhStack.push(12);
    AnhStack.push(100);
    AnhStack.push(745);
    AnhStack.Print();
    AnhStack.pop();
    AnhStack.pop();
    AnhStack.Print();
    AnhStack.push(3);
    AnhStack.Print();
    cout << "The top element is " << AnhStack.peek() << endl;
    cout << "The stack size is " << AnhStack.size() << endl;
    AnhStack.pop();
    if (AnhStack.isEmpty()) {
        cout << "The stack is empty\n";
    }
    else {
        cout << "The stack is not empty\n";
    }

    return 0;
}
