def swap_case(s):
    l = list(s)
    for i in range(len(s)):
        a = ord(s[i])
        if a >= 65 and a <= 90:
            l[i] = chr(a + 32)
        elif a >= 97 and a <= 122:
            l[i] = chr(a - 32)
    ms = "".join(l)
    return ms


if __name__ == "__main__":
    s = input()
    result = swap_case(s)
    print(result)


## string.swapcase() --> built in method
