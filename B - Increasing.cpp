#include <iostream>
#include <vector>
#include <algorithm>

int t = 0; // number of test cases

void isIncreasing(std::vector<std::vector<int>> inputs);


int main() {
    std::cin >> t;

    std::vector<std::vector<int>> inputs = std::vector<std::vector<int>>(t);

    for (int i = 0; i < t; i++) {
        int n = 0; // length of array
        std::cin >> n;

        for (int j = 0; j < n; j++) {
            int num = 0;
            std::cin >> num;
            inputs[i].push_back(num);
        }
    }

    isIncreasing(inputs);

    return 0;
}


void isIncreasing(std::vector<std::vector<int>> inputs) {
    for (int i = 0; i < t; i++) {

        std::sort(inputs[i].begin(), inputs[i].end());
        bool isIncreasing = true;

        for (int j = 1; j < inputs[i].size(); j++) {
            if (inputs[i][j] <= inputs[i][j - 1]) {
                isIncreasing = false;
            }
        }

        (isIncreasing) ? std::cout << "YES" : std::cout << "NO";

        std::cout << std::endl;
    }
}