// https://leetcode.com/problems/n-queens/

class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));

        NQueen(ans, 0, board);
        return ans;
    }

    void NQueen(vector<vector<string>>& ans, int row, vector<string>& board) {
        if (row == board.size()) {
            ans.push_back(board);
            return;
        }

        for (int col = 0; col < board.size(); col++) {
            if (isSafe(board, row, col)) {
                board[row][col] = 'Q';
                NQueen(ans, row + 1, board);
                board[row][col] = '.'; // Backtrack by marking it empty
            }
        }
    }

    bool isSafe(vector<string>& board, int row, int col) {
        // Check this column on top
        for (int i = 0; i < row; i++) {
            if (board[i][col] == 'Q') {
                return false;
            }
        }

        // Check upper-left diagonal
        for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        // Check upper-right diagonal
        for (int i = row, j = col; i >= 0 && j < board.size(); i--, j++) {
            if (board[i][j] == 'Q') {
                return false;
            }
        }

        return true;
    }
};
