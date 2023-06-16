#include <iostream>
#include <unordered_set>
#include <vector>
#include <utility>

using namespace std;

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 2, 4, 6, 8};
    int targetSum = 10;
    unordered_set<int> complements;
    vector<pair<int, int>> pairs;

    for (int num : arr) {
        int complement = targetSum - num;
        if (complements.find(complement) != complements.end()) {
            pairs.push_back(make_pair(num, complement));
        }
        complements.insert(num);
    }

    if (pairs.empty()) {
        cout << "No pairs found with the sum " << targetSum << endl;
    } else {
        cout << "Pairs with the sum " << targetSum << " are:" << endl;
        for (const auto& pair : pairs) {
            cout << pair.first << " + " << pair.second << " = " << targetSum << endl;
        }
    }

    return 0;
}
