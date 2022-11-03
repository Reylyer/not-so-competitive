import re

regex_ipv4 = r"(\d+?(?=\.|$))"
regex_ipv6 = r"([\dabcdefABCDEF]+?(?=:|$))"

for _ in range(int(input())): 
    ip_in = input()
    nums = re.findall(regex_ipv4, ip_in)
    if len(nums) == 4:
        for num in nums:
            if int(num) > 255:
                break
        else:
            print("IPv4")
            continue
    nums = re.findall(regex_ipv6, ip_in)
    if len(nums) == 8:
        for num in nums:
            if int(num, 16) > int("ffffff", 16):
                break
        else:
            print("IPv6")
            continue
    print("Neither")