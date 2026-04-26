template <typename T>
class Stack {
    T arr[100];
    int top = -1;
public:
    void push(T val) { arr[++top] = val; }
    void pop() {
        if (top >= 0) top--;
        else cout << "Stack underflow\n";
    }
    T peek() { return arr[top]; }
    bool isEmpty() { return top == -1; }
};

int main() {
    Stack<int> s;
    s.push(10); s.push(20);
    cout << s.peek() << endl;
    s.pop();
    cout << s.peek() << endl;
}