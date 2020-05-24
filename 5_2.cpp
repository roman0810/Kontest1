#include <iostream>
#include <cassert>

const int initialSize = 256;

class CStack {
public:
    CStack() : bufferSize(initialSize), top(0) { buffer = new char[initialSize]; };

    ~CStack() { delete[] buffer; }

    void push(char element);

    char pop();

    bool empty();

private:
    char *buffer;
    int bufferSize;
    int top;

    void grow();

};

void CStack::push(char element) {
    if (top == bufferSize) {
        grow();
    }
    buffer[top++] = element;
}

char CStack::pop() {
    assert(top > 0);
    return buffer[--top];
}

bool CStack::empty() {
    return (top == 0);
}

bool type(char c) {
    return (c == ')' || c == ']' || c == '}');
}

void CStack::grow() {
    int newBufferSize = 2 * bufferSize;
    char *newBuffer = new char[newBufferSize];
    for (int i = 0; i < bufferSize; ++i) {
        newBuffer[i] = buffer[i];
    }
    top = bufferSize;
    delete[] buffer;
    buffer = newBuffer;
    bufferSize = newBufferSize;
}

int main() {
    char *string = new char[20000];
    char c = 0;
    int length = 0;

    while (std::cin >> c) {
        string[length++] = c;
    }

    length /= 2;

    int j = 0;
    CStack stack;

    for (int i = 0; i < length; ++i) {
        if (string[i] != string[length + j]) {
            if (stack.empty()) {
                stack.push(string[i]);
            } else {
                c = stack.pop();
                if (string[length + j] == c) {
                    ++j;
                    --i;
                } else {
                    stack.push(c);
                    stack.push(string[i]);
                }
            }
        } else {
            ++j;
        }
    }

    while (!stack.empty()) {
        if (string[length + j] != stack.pop()) {
            std::cout << "NO\n";
            return 0;
        } else {
            ++j;
        }
    }

    std::cout << "YES\n";

    return 0;
}

