import re

regex = r"\([\+\-]?([1-9]\d*(?:\.\d+)?)\, [\+\-]?([1-9]\d*(?:\.\d+)?)\)"

for _ in range(int(input())): 
    langlat = re.findall(regex, input())
    if not langlat:
        print("Invalid")
        continue
    lang, lat = langlat[0]
    print("Valid" if float(lang) <= 90 and float(lat) <= 180 else "Invalid")