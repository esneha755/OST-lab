
#include <iostream> 
using namespace std;

    
#define MAX 4  // size of stack

class Stack {
    int arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    // Push operation
    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack Overflow\n";
        } else {
            arr[++top] = x;
            cout << x << " pushed into stack\n";
        }
    }

    // Pop operation
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
        } else {
            cout << arr[top--] << " popped from stack\n";
        }
    }

    // Peek operation
    void peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
        } else {
            cout << "Top element is: " << arr[top] << endl;
        }
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.peek();   // shows 30
    s.pop();    // removes 30
    s.peek();   // shows 20
    return 0;
}
