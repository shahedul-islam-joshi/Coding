#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> s;
    int i, k, n;

    // 1. Get the number of elements
    if (!(cin >> n)) return 0;

    // 2. Loop n times (i < n) to push elements
    for (i = 0; i < n; i++) {
        cin >> k;
        s.push(k);
    }

    // 3. Display and remove elements
    while (!s.empty()) {
        cout << "front: " << s.front() << endl;
        s.pop();
    }

    return 0;
}
