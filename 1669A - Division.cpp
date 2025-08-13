#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // number of test cases

    while (t--) {
        int rating;
        cin >> rating;

        if (rating >= 1900) {
            cout << "Division 1\n";
        } else if (rating >= 1600) {
            cout << "Division 2\n";
        } else if (rating >= 1400) {
            cout << "Division 3\n";
        } else {
            cout << "Division 4\n";
        }
    }

    return 0;
}

