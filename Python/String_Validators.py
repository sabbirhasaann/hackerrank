def soln():
    s = input()
    flag = False
    for c in s:
        if '0' <= c <= '9' or 'a' <= c <= 'z' or 'A' <= c <= 'Z':
            flag = True
            break
    print(flag)
    flag = False

    for c in s:
        if 'a' <= c <='z' or 'A'<= c <= 'Z':
            flag = True
            break

    print(flag)
    flag = False


    for c in s:
        if '0' <= c <='9':
            flag = True
            break

    print(flag)
    flag = False
        
    for c in s:
        if 'a' <= c <='z':
            flag = True
            break

    print(flag)
    flag = False

    for c in s:
        if 'A'<= c <= 'Z':
            flag = True
            break

    print(flag)

if __name__ == '__main__':
    soln()

    