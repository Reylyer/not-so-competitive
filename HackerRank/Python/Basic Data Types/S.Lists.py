if __name__ == '__main__':
    N = int(input())
    arr = []
    for _ in range(N):
        _input = input().split()
        
        if _input[0] == "print":
            print(arr)
        elif _input[0] == "insert":
            arr.insert(int(_input[1]), int(_input[2]))
        elif _input[0] == "remove":
            arr.remove(int(_input[1]))
        elif _input[0] == "append":
            arr.append(int(_input[1]))
        elif _input[0] == "sort":
            arr.sort()
        elif _input[0] == "pop":
            arr.pop()
        elif _input[0] == "reverse":
            arr.reverse()
        
        