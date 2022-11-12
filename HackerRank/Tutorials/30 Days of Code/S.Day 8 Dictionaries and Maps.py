# Enter your code here. Read input from STDIN. Print output to STDOUT
from sys import stdin
lines = list(reversed(stdin.read().split('\n')))
phone_book = {}

for i in range(int(lines.pop())):
    inp = lines.pop().split()
    phone_book[inp[0]] = inp[1]

while lines:
    q = lines.pop()
    if q in phone_book:
        print(f"{q}={phone_book[q]}")
    else:
        print("Not found")