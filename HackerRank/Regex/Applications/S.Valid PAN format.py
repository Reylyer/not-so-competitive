import re

for _ in range(int(input())):
    print("YES" if re.match(pattern=r"^[A-Z]{5}\d{4}[A-Z]$", string=input(),) else "NO")
