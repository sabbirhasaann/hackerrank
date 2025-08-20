if __name__ == "__main__":
    students = []
    for _ in range(int(input())):
        name = input()
        score = float(input())
        students.append((name, score))

    scores = sorted(set(score for _, score in students))
    min2 = scores[1]

    result = [name for name, score in students if score == min2]
    for name in sorted(result):
        print(name)
