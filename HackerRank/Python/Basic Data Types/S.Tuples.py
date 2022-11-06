# Enter your code here. Read input from STDIN. Print output to STDOUT
# use pypy3
input()

integer_list = [int(a) for a in input().split()]
t = tuple(integer_list)

print(hash(t))
