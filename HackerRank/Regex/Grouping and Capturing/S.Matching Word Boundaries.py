Regex_Pattern = r'\b[aiueoAIUEO][a-zA-Z]*\b'	# Do not delete 'r'.

import re

print(str(bool(re.search(Regex_Pattern, input()))).lower())