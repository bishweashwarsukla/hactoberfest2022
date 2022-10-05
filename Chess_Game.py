def findFinalPosition(startPosition, movements):
    rows = ['1', '2', '3', '4', '5', '6', '7', '8']
    columns = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h']
    fp = [startPosition[0], startPosition[1]]
    out = ''
    for i in range(len(movements)):
        a = movements[i]
        if a[0] == 'u':
            b = int(a[1])
            c = rows.index(fp[1]) + 1
            c += b
            c = str(c)
            if c in rows:
                fp[1] = c
            else:
                out = 'Invalid input'
                break
        if a[0] == 'd':
            b = int(a[1])
            c = rows.index(fp[1]) + 1
            c -= b
            c = str(c)
            if c in rows:
                fp[1] = c
            else:
                out = 'Invalid input'
                break
        if a[0] == 'r':
            b = int(a[1])
            c = columns.index(fp[0])
            c += b
            if c < 8:
                fp[0] = columns[c]
            else:
                out = 'Invalid input'
                break
        if a[0] == 'l':
            b = int(a[1])
            c = columns.index(fp[0])
            c -= b
            if c > -1:
                fp[0] = columns[c]
            else:
                out = 'Invalid input'
                break
    if out == '':
        print(str(fp[0]) + str(fp[1]))
    else:
        print(out)