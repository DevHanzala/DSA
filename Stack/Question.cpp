#include <iostream>
using namespace std;

// Question: Create 2 stacks in an array
class TwoStack {
    // properties
    int *arr;
    int top1;
    int top2;
    int size;

public:
    // constructor
    TwoStack(int s) {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s]; // memory allocation
    }

    // push in stack 1
    void push1(int num) {
        // ensure there is at least one empty space
        if (top2 - top1 > 1) {
            top1++;
            arr[top1] = num;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    // push in stack 2
    void push2(int num) {
        if (top2 - top1 > 1) {
            top2--;
            arr[top2] = num;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    // pop from stack 1
    int pop1() {
        if (top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        } else {
            cout << "Stack underflow" << endl;
            return -1;
        }
    }

    // pop from stack 2
    int pop2() {
        if (top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        } else {
            cout << "Stack underflow" << endl;
            return -1;
        }
    }
};

int main() {
    TwoStack st(5);
    st.push1(1);
    st.push2(10);
    st.push1(2);
    st.push2(20);

    cout << "Popped from stack 1: " << st.pop1() << endl; // Should output 2
    cout << "Popped from stack 2: " << st.pop2() << endl; // Should output 20

    return 0;
}
