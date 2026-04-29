class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
            int n = image.size();
    for (int i = 0; i < n; i++) {
        int left = 0, right = n - 1;
        while (left <= right) {
            if (left == right) {
                image[i][left] = image[i][left] == 0 ? 1 : 0;
                break;
            }
            int tmp = image[i][left];
            image[i][left] = image[i][right] == 0 ? 1 : 0;
            image[i][right] = tmp == 0 ? 1 : 0;
            left++;
            right--;

        }

    }
    return image;
    }
};