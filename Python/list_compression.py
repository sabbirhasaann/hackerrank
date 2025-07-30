if __name__ == "__main__":
    x = int(input())
    y = int(input())
    z = int(input())
    n = int(input())

    mat = [
        [i, j, k]
        for i in range(x + 1)
        for j in range(y + 1)
        for k in range(z + 1)
        if i + j + k != n
    ]

    print(mat)


# if __name__ == "__main__":
#     x = int(input())
#     y = int(input())
#     z = int(input())
#     n = int(input())
#     mat = []
#     for i in range(x + 1):
#         for j in range(y + 1):
#             for k in range(z + 1):
#                 list1 = []
#                 list1.append(i)
#                 list1.append(j)
#                 list1.append(k)
#                 if i + j + k != n:
#                     mat.append(list1)
#     print(mat)
