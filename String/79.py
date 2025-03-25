class Solution:
    def exist(self, board: List[List[str]], word: str) -> bool:
        def check(i, j, idx):
            if i < 0 or j < 0 or i >= len(board) or j >= len(board[0]) or board[i][j] != word[idx]:
                return False
            elif idx == len(word) - 1:
                return True
            elif board[i][j] == word[idx]:
                temp = board[i][j]
                board[i][j] = '.'
                res = check(i + 1, j, idx + 1) or check(i, j + 1, idx + 1) or check(i - 1, j, idx + 1) or check(i, j - 1, idx + 1)
                board[i][j] = temp
            return res

        for i in range(len(board)):
            for j in range(len(board[0])):
                if check(i, j, 0) == True:
                    return True
        return False
