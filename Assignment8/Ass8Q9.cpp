template <typename T>
class Arithmetic {
    T a, b;
public:
    Arithmetic(T x, T y) : a(x), b(y) {}
    T add()      { return a + b; }
    T subtract() { return a - b; }
    T multiply() { return a * b; }
    T divide()   { return a / b; }
};

int main() {
    Arithmetic<double> obj(10.0, 2.0);
    cout << obj.add() << endl;
    cout << obj.divide() << endl;
}