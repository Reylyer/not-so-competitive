Regex_Pattern = r'^\D[^aiueo][^bcDF]\S[^AIUEO][^\.\,]$'	# Do not delete 'r'.

import re

print(str(bool(re.search(Regex_Pattern, input()))).lower())