#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> acts = { "Swimming", "Running", "Football" };
int Count = 0;

void R(int day, int n, string lastActivity, vector<string> schedule) {
    if (day == n) {
        for (int i = 0; i < n; i++) {
            cout << schedule[i] << (i == n - 1 ? '\n' : ' ');
        }
        Count++;
        return;
    }

    for (string activity : acts) {
        if (activity != lastActivity) {
            schedule[day] = activity;
            R(day + 1, n, activity, schedule);
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<string> schedule(n);
    R(0, n, "", schedule);

    cout << endl <<"Count: " << Count << endl;
    return 0;
}
