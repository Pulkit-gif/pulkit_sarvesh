def swap(x,y):
    x = x + y
    y = x - y
    x = x - y

def BubbleSort(ar):
    size = len(ar)
    for x in range(size):
        for y in range(size-x-1):
            if ar[y] > ar[y+1]:
                temp = ar[y]
                ar[y] = ar[y+1]
                ar[y+1] = temp
    return ar

def main():
    ar = [12,77,98,45,8,5,44,36,15,50]
    BubbleSort(ar)
    print(ar)

if __name__ == '__main__':
    main()