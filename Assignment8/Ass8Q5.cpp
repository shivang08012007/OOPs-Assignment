// i) Single parameter
template <typename T>
void process(T a) {
    cout << "Single param: " << a << endl;
}

// ii) Two parameters of the same type
template <typename T>
void process(T a, T b) {
    cout << "Two same-type params: " << a << ", " << b << endl;
}

// iii) Two parameters of different types
template <typename T1, typename T2>
void process(T1 a, T2 b) {
    cout << "Two different-type params: " << a << ", " << b << endl;
}

int main() {
    process(5);
    process(3, 7);
    process(3, 4.5);
}