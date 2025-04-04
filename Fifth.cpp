class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9), col(9), box(9);

    for (int r = 0; r < 9; r++) {
        for (int c = 0; c < 9; c++) {
            char n = board[r][c];
            if (n == '.') continue;
            
            int b = (r / 3) * 3 + (c / 3);
           if (row[r].count(n) || col[c].count(n) || box[b].count(n)) {
                return false;
            }
          row[r].insert(n);
            col[c].insert(n);
            box[b].insert(n);
        }
    }
    
    return true;
    }
};
