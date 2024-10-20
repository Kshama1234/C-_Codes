from collections import deque

def min_moves(M, N, grid, src, dest, move_rule):
    directions = [
        (move_rule[0], move_rule[1]),  
        (move_rule[1], -move_rule[0]), 
        (-move_rule[1], move_rule[0]), 
        (-move_rule[0], -move_rule[1]) 
    ]
    
    queue = deque([(src[0], src[1], 0)]) 
    visited = set()
    visited.add(src)
    
    while queue:
        x, y, moves = queue.popleft()
        
        if (x, y) == dest:
            return moves
        
        for dx, dy in directions:
            new_x, new_y = x + dx, y + dy
            
            if 0 <= new_x < M and 0 <= new_y < N and grid[new_x][new_y] == 0 and (new_x, new_y) not in visited:
                visited.add((new_x, new_y))
                queue.append((new_x, new_y, moves + 1))
    
    return -1  
M = 6
N = 6
grid = [
    [0, 0, 0, 0, 1, 0],
    [0, 0, 1, 0, 0, 1],
    [0, 1, 0, 1, 0, 0],
    [1, 1, 1, 0, 0, 0],
    [1, 0, 0, 0, 0, 1],
    [1, 0, 0, 1, 1, 0]
]
src = (0, 0)
dest = (4, 4)
move_rule = (0, 2)

result = min_moves(M, N, grid, src, dest, move_rule)
print(result) 
