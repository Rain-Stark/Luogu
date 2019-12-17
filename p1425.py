def main():
    s = input().split()
    a = int(s[0])
    b = int(s[1])
    c = int(s[2])
    d = int(s[3])
    minute = c * 60 + d - a * 60 - b
    m = minute % 60
    h = int(minute / 60)
    print(h, m)


if __name__ == '__main__':
    main()