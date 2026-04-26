#include <iostream>
using namespace std;

class Speedometer {
public:
    int speed;
    void setSpeed(int s) {
        speed = s;
    }
    void showSpeed() {
        cout << "Speed: " << speed << " km/hr" << endl;
    }
};

class FuelGauge {
public:
    int fuel;
    void setFuel(int f) {
        fuel = f;
    }
    void showFuel() {
        cout << "Fuel Level: " << fuel << "%" << endl;
    }
};

class Thermometer {
public:
    int temp;
    void setTemp(int t) {
        temp = t;
    }
    void showTemp() {
        cout << "Temperature: " << temp << " C" << endl;
    }
};

int main() {
    Speedometer s;
    FuelGauge f;
    Thermometer t;

    s.setSpeed(60);
    f.setFuel(70);
    t.setTemp(90);

    s.showSpeed();
    f.showFuel();
    t.showTemp();

    return 0;
}

