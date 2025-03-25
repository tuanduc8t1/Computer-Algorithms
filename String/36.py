class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        from collections import defaultdict
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        row = collections.defaultdict(set)
        col = collections.defaultdict(set)
        box = collections.defaultdict(set)
        for x in range(0,9):
            for y in range(0,9):
                val = board[x][y]
                if val != '.':
                    if val in row[x]:
                        return False
                    if val in col[y]:
                        return False
                    if(val in box[(x // 3,y // 3)]):
                        return False
                    row[x].add(val)
                    col[y].add(val)
                    box[(x // 3, y // 3)].add(val) 
        return True
