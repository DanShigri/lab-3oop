#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double radius;
    double pi = 3.14159;

public:
    void setRadius(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }

    double getArea() const {
        return pi * radius * radius;
    }

    double getDiameter() const {
        return radius * 2;
    }

    double getCircumference() const {
        return 2 * pi * radius;
    }
};

int main() {
    double r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    Circle c;
    c.setRadius(r);

    cout << "Area: " << c.getArea() << endl;
    cout << "Diameter: " << c.getDiameter() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;

    return 0;
}

