#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int l = 0, r = m * n - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;

        if (target == matrix[mid / m][mid % m])
        {
            return true;
        }
        else if (target > matrix[mid / m][mid % m])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> matrix = {{1, 2, 5, 7},
                                   {10, 11, 16, 20},
                                   {23, 30, 34, 60}};
    int target = 3;
    cout << searchMatrix(matrix, target) << endl;
    return 0;
}