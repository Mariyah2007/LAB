#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int totalseats = 500;
    int availableseats = totalseats;
    double totalincome = 0.0;
    int choice;

    while (true) {
        cout << "Menu selections" << endl;
        cout << "************" << endl;
        cout << "1. Purchase ticket" << endl;
        cout << "2. Display Information" << endl;
        cout << "3. Exit" << endl;
        cout << "************" << endl;
        cout << "Enter your choice please: ";
        cin >> choice;

        if (choice == 1) {
            int ticketno;
            cout << "How many tickets you want: ";
            cin >> ticketno;

            if (ticketno > availableseats) {
                cout << "Sorry, the available seats are " << availableseats << endl;
                continue;
            }

            int sophomores, juniors;
            cout << "How many Sophomores: ";
            cin >> sophomores;
            cout << "How many Juniors: ";
            cin >> juniors;

            if (sophomores + juniors != ticketno) {
                cout << "There has been a mismatch in the ticket number" << endl;
                continue;
            }

            double totalcost = (sophomores * 100) + (juniors * 50);
            if (ticketno > 3) {
                totalcost = 0.7 * totalcost;  // 30% discount
            }

            availableseats -= ticketno;
            totalincome += totalcost;

            cout << "Purchase successful. Total cost: $" << fixed << setprecision(2) << totalcost << endl;

        } else if (choice == 2) {
            cout << "Free seats: " << availableseats << endl;
            cout << "Income: $" << fixed << setprecision(2) << totalincome << endl;

        } else if (choice == 3) {
            cout << "***************" << endl;
            break;

        } else {
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}
