if __name__ == "__main__":
    n = int(input())
    arr = map(int, input().split())
    arr = list(arr)
    maxx = float("-inf")
    minn = float("-inf")
    for x in arr:
        if x > maxx:
            minn = maxx
            maxx = x
        elif maxx > x > minn:
            minn = x
    print(minn)
