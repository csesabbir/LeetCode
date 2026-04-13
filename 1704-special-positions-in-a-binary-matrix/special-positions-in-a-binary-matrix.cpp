class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int cnt = 0;
    for (int i = 0; i < mat.size(); i++) {
        for (int j = 0; j < mat[i].size(); j++) {
            if (mat[i][j] == 1) {
                bool flag = true;
                for (int k = 0; k < mat.size() && flag; k++) {
                    if ((i != k) && mat[k][j] == 1) {
                        flag = false;
                    }
                }
                for (int k = 0; k < mat[i].size() && flag; k++) {
                    if((k != j) && mat[i][k] == 1) {
                        flag = false;
                    }
                }
                if (flag) {cnt++;}
            }
        }
    }
    return cnt;
    }
};