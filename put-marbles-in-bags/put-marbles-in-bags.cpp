class Solution {
 public:
  long long putMarbles(vector<int>& weights, int k) {

    vector<int> A;  
    long long min = 0;
    long long max = 0;

    for (int i = 0; i + 1 < weights.size(); ++i)
      A.push_back(weights[i] + weights[i + 1]);

    sort(A.begin(), A.end());

    for (int i = 0; i < k - 1; ++i) {
      min += A[i];
      max += A[A.size() - 1 - i];
    }

    return max - min;
  }
};
