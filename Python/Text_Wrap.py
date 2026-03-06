import textwrap

def wrap(string, max_width):
    cnt = 0
    s = str()
    
    for c in string:
        cnt+=1
        s += c
        if cnt == max_width:
            s+= '\n'
            cnt = 0
    return s

if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)