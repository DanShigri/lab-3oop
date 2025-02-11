#include <iostream>
#include <string>
using namespace std;
class BoardMarker {
private:
    string company;
    string color;
    bool refillable;
    bool inkStatus;
public:
    BoardMarker(string c, string clr, bool ref) {
        company = c;
        color = clr;
        refillable = ref;
        inkStatus = true;
    }

    string getCompany() { return company; }
    string getColor() { return color; }
    bool isRefillable() { return refillable; }
    bool isInkEmpty() { return !inkStatus; }
    void setCompany(string c) { company = c; }
    void setColor(string clr) { color = clr; }
    void setRefillable(bool ref) { refillable = ref; }
    void setInkStatus(bool status) { inkStatus = status; }
    void write() {
        if (inkStatus) {
            cout << "Writing with the " << color << " marker from " << company << "..." << endl;
            inkStatus = false;
        } else {
            cout << "Ink is empty! Cannot write." << endl;
        }
    }

    void refill() {
        if (refillable) {
            inkStatus = true;
            cout << "Marker refilled successfully!" << endl;
        } else {
            cout << "This marker is not refillable!" << endl;
        }
    }

    void displayMarker() {
        cout << "Board Marker Details:" << endl;
        cout << "Company: " << company << endl;
        cout << "Color: " << color << endl;
        cout << "Refillable: " << (refillable ? "Yes" : "No") << endl;
        cout << "Ink Status: " << (inkStatus ? "Ink available" : "Ink empty") << endl;
    }
};
int main() {
    string company, color;
    bool refillable;
    cout << "Enter board marker company: ";
    getline(cin, company);
    cout << "Enter marker color: ";
    getline(cin, color);
    cout << "Is the marker refillable? (1 for Yes, 0 for No): ";
    cin >> refillable;
    BoardMarker marker(company, color, refillable);
    marker.displayMarker();
    cout << "\nAttempting to write..." << endl;
    marker.write();
    cout << "\nAttempting to write again..." << endl;
    marker.write();
    cout << "\nTrying to refill the marker..." << endl;
    marker.refill();
    cout << "\nAttempting to write after refilling..." << endl;
    marker.write();
    return 0;
}
