N = 5
L = 1
R = 30
# length of A = 32
A = [12, 15, 7, 9, 5, 11, 2, 31, 3, 21, 8, 19, 6, 29, 10, 25, 13, 17, 4, 23, 14, 27, 1, 18, 16, 30, 20, 28, 24, 26, 22, 32]
print(sum(A[L : R + 1]) % 100)
while 1:
	i, j = map(int, input().split())
	l = 2 ** i * j
	r = 2 ** i * (j + 1) - 1
	print(sum(A[l : r + 1]) % 100)