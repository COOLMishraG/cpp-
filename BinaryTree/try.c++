#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
using namespace std;
int maxBestSum(const vector<int>& arr, int N, int K) {
    vector<int> prefixSum(N + 1, 0);
    for (int i = 1; i <= N; ++i) {
        prefixSum[i] = prefixSum[i - 1] + arr[i - 1];
    }
    vector<vector<int>> dp(N + 1, vector<int>(K + 1, INT_MAX));
    dp[0][0] = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= K; ++j) {
            for (int k = 0; k < i; ++k) {
                int segmentSum = prefixSum[i] - prefixSum[k];
                dp[i][j] = min(dp[i][j], max(dp[k][j - 1], segmentSum));
            }
        }
    }
    return dp[N][K];
}
int main() {
    int N, K;
    cout << "Enter the size of the array: ";
    cin >> N;
    vector<int> arr(N);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the value of K: ";
    cin >> K;
    int result = maxBestSum(arr, N, K);
    cout << "Minimum bestSum: " << result << endl;
    return 0;
}
