#include <iostream>
using namespace std;

int main() {
    int scores[10];
    int sum = 0;
    int highest, lowest;

    // Input scores
    for (int i = 0; i < 10; i++) {
        cout << "Enter score " << i + 1 << " (0-99): ";
        cin >> scores[i];
        sum += scores[i];

        if (i == 0) {
            highest = lowest = scores[i];
        } else {
            if (scores[i] > highest)
                highest = scores[i];
            if (scores[i] < lowest)
                lowest = scores[i];
        }
    }

    double average = sum / 10.0;

    cout << "\nTotal score: " << sum << endl;
    cout << "Average score: " << average << endl;
    cout << "Highest score: " << highest << endl;
    cout << "Lowest score: " << lowest << endl;

    cout << "\nPass/Fail Results:\n";
    for (int i = 0; i < 10; i++) {
        if (scores[i] >= 70)
            cout << "Student " << i + 1 << ": PASS\n";
        else
            cout << "Student " << i + 1 << ": FAIL\n";
    }

    return 0;
}
