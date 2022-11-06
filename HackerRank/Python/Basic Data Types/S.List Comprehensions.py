
if __name__ == '__main__':
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())
    print([a for a in [[f, g, h] for f in range(x+1) for g in range(y+1) for h in range(z+1)] if sum(a) != n])