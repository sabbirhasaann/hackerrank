def count_substring(string, sub_string):
    count = 0
    s_chars = list(string)
    l_chars = list(sub_string)
    for i in range(len(s_chars) - len(sub_string) + 1):
        flag = True
        l = i
        for j in range(len(l_chars)):
            if s_chars[l] != l_chars[j]:
                flag = False
                break
            l = l + 1
        if flag:
            count = count + 1

    return count


if __name__ == "__main__":
    string = input().strip()
    sub_string = input().strip()

    count = count_substring(string, sub_string)
    print(count)
