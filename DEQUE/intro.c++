#include <iostream>
#include <vector>

using namespace std;

long int getMaximumThroughput(vector<int>& throughput, vector<int>& scalingCost, int budget) {
    int n = throughput.size();
    long int maxThroughput = 0;
    
    // Iterate through all possible configurations within the budget
    for (int i = 0; i <= budget / scalingCost[0]; ++i) {
        for (int j = 0; j <= budget / scalingCost[1]; ++j) {
            for (int k = 0; k <= budget / scalingCost[2]; ++k) {
                long int totalCost = i * scalingCost[0] + j * scalingCost[1] + k * scalingCost[2];
                
                if (totalCost <= budget) {
                    long int finalThroughput = min(throughput[0] * (1 + i), min(throughput[1] * (1 + j), throughput[2] * (1 + k)));
                    maxThroughput = max(maxThroughput, finalThroughput);
                }
            }
        }
    }
    
    return maxThroughput;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> throughput(n);
    vector<int> scalingCost(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> throughput[i];
    }
    
    for (int i = 0; i < n; ++i) {
        cin >> scalingCost[i];
    }
    
    int budget;
    cin >> budget;
    
    long int result = getMaximumThroughput(throughput, scalingCost, budget);
    
    cout << result << endl;
    
    return 0;
}