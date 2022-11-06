if __name__ == '__main__':
    
    dstud = {}
    for _ in range(int(input())):
        name = input()
        score = float(input())
        dstud[name] = score
    
    grouped = {}
    for k, v in sorted(dstud.items(), key=lambda x: x[1]):
        grouped[v] = [k] if v not in grouped.keys() else grouped[v] + [k]
    print("\n".join(sorted(grouped[list(grouped.keys())[1]])))
    
    