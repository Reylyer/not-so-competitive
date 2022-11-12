#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'flippingMatrix' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY matrix as parameter.
#

def flippingMatrix(matrix):
    # Write your code here
    n = len(matrix)
    if n == 0:
        return 0

    max_sum = max([matrix[0][0], matrix[0][n-1], matrix[n-1][0], matrix[n-1][n-1]])
    for i in range(1, n//2):
        max_sum += max([matrix[0][i], matrix[n-1][i]])
        max_sum += max([matrix[i][0], matrix[i][n-1]])

    return max_sum + flippingMatrix(matrix[1:-1][1:-1])

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input().strip())

    for q_itr in range(q):
        n = int(input().strip())

        matrix = []

        for _ in range(2 * n):
            matrix.append(list(map(int, input().rstrip().split())))

        result = flippingMatrix(matrix)

        fptr.write(str(result) + '\n')

    fptr.close()
