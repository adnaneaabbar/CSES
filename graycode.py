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

n = readInt()
res = [0]
for i in range(1, 2**n):
    # prev xor current
    res.append(res[-1] ^ ( i & -i))

for c in res:
    ans = bin(c).lstrip('0b')
    ans = '0' * (n-len(ans)) + ans
    print(ans)