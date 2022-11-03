import re
from sys import stdin

creg = r"(int main\s*\()"
jreg = r"(import java.*|public static void main|System.out)"

sc = stdin.read()


if re.findall(jreg, sc):
    print("Java")
elif re.findall(creg, sc):
    print("C")
else:
    print("Python")
