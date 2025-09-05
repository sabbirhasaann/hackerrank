if __name__ == "__main__":
    N = int(input())
    list = []
    for i in range(N):
        query = str(input())
        x = query.split()
        if "insert" in query:
            list.insert(int(x[1]), int(x[2]))
        elif "append" in query:
            list.append(int(x[1]))
        elif "remove" in query:
            list.remove(int(x[1]))
        elif "sort" in query:
            list.sort()
        elif "pop" in query:
            list.pop()
        elif "reverse" in query:
            list.reverse()
        elif "print" in query:
            print(list)
