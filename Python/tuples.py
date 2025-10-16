if __name__ == "__main__":
    n = int(input())
    integer_list = map(int, input().split())

    t = tuple(integer_list)
    print(hash(t))


# if __name__ == '__main__':
#     n = int(raw_input())
#     integer_list = map(int, raw_input().split())
#     print(hash(tuple(integer_list)))