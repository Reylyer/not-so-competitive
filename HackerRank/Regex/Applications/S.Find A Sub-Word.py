import re

text = "\n".join([ input() for _ in range(int(input()))])

for _ in range(int(input())): 
    sub_word = input()
    print(len(re.findall(pattern=f"(\\w{sub_word}\\w)", string=text,)))
    # print(re.findall(pattern=f"(\\w{sub_word}\\w)", string=text,))