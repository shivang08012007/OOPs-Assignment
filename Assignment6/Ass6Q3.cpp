#include <iostream>
using namespace std;

class Account {
    const long accNo;
    long transID;
    string type;
    double balance;

public:
    Account(long a, double b) : accNo(a) {
        balance = b;
        transID = 0;
    }

    long depositAmount(const long to, const long from, const double amt) {
        balance += amt;
        type = "credit";
        return ++transID;
    }

    long creditAmount(const long to, const long from, const double amt) {
        balance -= amt;
        type = "debit";
        return ++transID;
    }

    void displayDetails() const {
        cout << accNo << " " << balance << " " << type << endl;
    }
};

int main() {
    Account a1(101, 1000);

    a1.depositAmount(101, 102, 500);
    a1.creditAmount(101, 102, 200);

    a1.displayDetails();
}
