#include <iostream>
#include <string>
using namespace std;
class WaterBottle {
           private:
             string company;
    string color;
             double capacityLiters;
    int capacityMilliliters;
public:
    WaterBottle(string c, string clr, double capL) {
     company = c;
      color = clr;
        capacityLiters = capL;
       capacityMilliliters = capL * 1000;
    }
    string getCompany() { return company; }
    string getColor() { return color; }
    double getCapacityLiters() { return capacityLiters; }
    int getCapacityMilliliters() { return capacityMilliliters; }

    void setCompany(string c) { company = c; }
    void setColor(string clr) { color = clr; }
    void setCapacity(double capL) {
        capacityLiters = capL;
        capacityMilliliters = capL * 1000;
    }

    void drinkWater(int amountDrankMl) {
        if (amountDrankMl > capacityMilliliters) {
            cout << "Not enough water in the bottle! You can only drink " << capacityMilliliters << " ml." << endl;
            capacityMilliliters = 0;
            capacityLiters = 0;
        } else {
            capacityMilliliters -= amountDrankMl;
            capacityLiters = capacityMilliliters / 1000.0;
        }
        cout << "Updated Water Capacity: " << capacityLiters << " L (" << capacityMilliliters << " ml)" << endl;
    }

    void displayBottle() {
        cout << "Water Bottle Details:" << endl;
        cout << "Company: " << company << endl;
        cout << "Color: " << color << endl;
        cout << "Water Capacity: " << capacityLiters << " L (" << capacityMilliliters << " ml)" << endl;
    }
};
int main() {
    string company, color;
    double capacityLiters;
    int amountDrankMl;
    cout << "Enter water bottle company: ";
    getline(cin, company);
    cout << "Enter water bottle color: ";
    getline(cin, color);
    cout << "Enter water capacity (in liters): ";
    cin >> capacityLiters;
  WaterBottle bottle(company, color, capacityLiters);
    bottle.displayBottle();
   cout << "\nEnter amount of water drank (in ml): ";
    cin >> amountDrankMl;
    bottle.drinkWater(amountDrankMl);
    return 0;
}
