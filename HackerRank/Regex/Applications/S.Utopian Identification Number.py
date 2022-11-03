import re

regex = r"^[a-z]{0,3}\d{2,8}[A-Z]{3,}$"

for _ in range(int(input())):
    print("VALID" if re.findall(regex, input()) else "INVALID")