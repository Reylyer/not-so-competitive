#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'plusMinus' function below.
#
# The function accepts INTEGER_ARRAY arr as parameter.
#

def plusMinus(arr):
    positive = sum(map(lambda x : x > 0, arr))
    negative = sum(map(lambda x : x < 0, arr))
    print(round(positive / len(arr), 6))
    print(round(negative / len(arr), 6))
    print(round((len(arr) - positive - negative) / len(arr), 6))
    
if __name__ == '__main__':
    n = int(input().strip())

    arr = list(map(int, input().rstrip().split()))

    plusMinus(arr)
