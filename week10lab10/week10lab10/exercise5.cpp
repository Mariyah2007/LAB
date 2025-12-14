#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maximumSubarrayRecursion(vector<int>& array, int i, int currentMax, int globalMax,
                             int currentStart, int& bestStart, int& bestEnd) {
if (i == array.size())
return globalMax;
if (array[i] > currentMax + array[i]) {
currentMax = array[i];
currentStart = i;
} else {
currentMax += array[i];
    }
if (currentMax > globalMax) {
 globalMax = currentMax;
bestStart = currentStart;
bestEnd = i;
    }
return maximumSubarrayRecursion(array, i + 1, currentMax, globalMax, currentStart, bestStart, bestEnd);
}
int maximumSubarray(vector<int>& arr, int& start, int& end) {
    if (arr.empty()) return 0;
    start = end = 0;
    return maximumSubarrayRecursion(arr, 1, arr[0], arr[0], 0, start, end);
}
int main() {
vector<int> array = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
int start, end;
int maxSum = maximumSubarray(array, start, end);
cout << "Maximum subarray sum = " << maxSum << endl;
cout << "Subarray: { ";
for (int i = start; i <= end; i++)
cout << array[i] << " ";
cout << "}" << endl;
}
