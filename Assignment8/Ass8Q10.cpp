template <typename T>
class Array {
    T arr[100];
    int size;
public:
    void input(int n) {
        size = n;
        for (int i = 0; i < size; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Array<int> a;
    a.input(5);
    a.display();
}