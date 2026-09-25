#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string color;
    int number;

public:
    Car(string c, int n) {
        color = c;
        number = n;
    }

    ~Car() {
        cout << "destroyed" << endl;
    }

    void display() {
        cout << "Color: " << color << ", Number: " << number << endl;
    }
};

int main() {
    Car c1("Black", 8888);
    Car c2("White", 6666);
    c1.display();
    c2.display();
    return 0;
}