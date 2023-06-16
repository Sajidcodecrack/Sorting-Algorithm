#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8};
    int targetSum = 10;
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    unordered_set<int> complements;

    bool foundPairs = false;

    cout << "Pairs with the sum " << targetSum << " are:" << endl;
    for (int i = 0; i < arrSize; i++) {
        int complement = targetSum - arr[i];
        if (complements.find(complement) != complements.end()) {
            foundPairs = true;
            cout << arr[i] << " + " << complement << " = " << targetSum << endl;
        }
        complements.insert(arr[i]);
    }

    if (!foundPairs) {
        cout << "No pairs found with the sum " << targetSum << endl;
    }

    return 0;
}
