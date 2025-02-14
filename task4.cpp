#include <iostream>
#include <string>
using namespace std;

class StationeryShop {
private:
    string items[100];
    double prices[100];
    int itemCount;

public:
    StationeryShop() {
        itemCount = 0;
    }

    void addItem(string itemName, double price) {
        if (itemCount < 100) {
            items[itemCount] = itemName;
            prices[itemCount] = price;
            itemCount++;
        } else {
            cout << "Item list is full!" << endl;
        }
    }

    void showItems() const {
        if (itemCount == 0) {
            cout << "No items available!" << endl;
            return;
        }
        cout << "Items available for sale:" << endl;
        for (int i = 0; i < itemCount; i++) {
            cout << i + 1 << ". " << items[i] << " - $" << prices[i] << endl;
        }
    }

    void editItemPrice(int index, double newPrice) {
        if (index >= 0 && index < itemCount) {
            prices[index] = newPrice;
            cout << "Price updated successfully!" << endl;
        } else {
            cout << "Invalid item index!" << endl;
        }
    }

    void generateReceipt() {
        int itemIndex, quantity;
        double total = 0.0;

        cout << "Enter the number of items purchased: ";
        int n;
        cin >> n;

        string receipt = "Receipt:\n";
        for (int i = 0; i < n; i++) {
            cout << "Enter item number: ";
            cin >> itemIndex;
            cout << "Enter quantity: ";
            cin >> quantity;

            if (itemIndex > 0 && itemIndex <= itemCount) {
                double itemTotal = prices[itemIndex - 1] * quantity;
                receipt += items[itemIndex - 1] + " x " + to_string(quantity) + " - $" + to_string(itemTotal) + "\n";
                total += itemTotal;
            } else {
                cout << "Invalid item number!" << endl;
            }
        }

        receipt += "Total: $" + to_string(total) + "\n";
        cout << receipt;
    }
};

int main() {
    StationeryShop shop;
    int choice;
    string itemName;
    double price;
    int itemIndex;
    
    do {
        cout << "\n1. Add Item\n2. Show Items\n3. Edit Item Price\n4. Generate Receipt\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter item name: ";
                cin.ignore();
                getline(cin, itemName);
                cout << "Enter item price: ";
                cin >> price;
                shop.addItem(itemName, price);
                break;

            case 2:
                shop.showItems();
                break;

            case 3:
                shop.showItems();
                cout << "Enter item number to edit price: ";
                cin >> itemIndex;
                cout << "Enter new price: ";
                cin >> price;
                shop.editItemPrice(itemIndex - 1, price);
                break;

            case 4:
                shop.generateReceipt();
                break;

            case 5:
                cout << "Exiting program!" << endl;
                break;

            default:
                cout << "Invalid choice, please try again!" << endl;
        }
    } while (choice != 5);

    return 0;
}

