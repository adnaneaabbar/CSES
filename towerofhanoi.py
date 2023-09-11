# import sys

'''
Adnane Aabbar
github : @adnaneaabbar
'''
mul = lambda: map(int, input().strip().split())
seq = lambda: list(map(int, input().strip().split()))
mulstr = lambda: map(str, input().strip().split())
seqstr = lambda: list(map(str, input().strip().split()))
readInt = lambda: int(input())
readLine = lambda: input().strip()

# USACO Guide input handling
# sys.stdin = open("input.in", "r")
# sys.stdout = open("output.out", "w")
# sys.stdin = open("measurement.in", "r")
# sys.stdout = open("measurement.out", "w")

moves =  []

def hanoi(n, start, end, _with):
    if n == 0:
        return
    hanoi(n - 1, start, _with, end)
    moves.append((start, end))
    hanoi(n - 1, _with, end, start)

n = readInt()
hanoi(n, 1, 3, 2)
print(len(moves))
for i in range(len(moves)):
    print(moves[i][0], moves[i][1])