template <typename T>
class Queue {
    T arr[100];
    int front = 0, rear = -1;
public:
    void enqueue(T val) { arr[++rear] = val; }
    void dequeue() {
        if (front <= rear) front++;
        else cout << "Queue empty\n";
    }
    T getFront() { return arr[front]; }
};

int main() {
    Queue<int> q;
    q.enqueue(1); q.enqueue(2);
    cout << q.getFront() << endl;
    q.dequeue();
    cout << q.getFront() << endl;
}