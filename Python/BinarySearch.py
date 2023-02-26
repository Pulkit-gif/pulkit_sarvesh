import BubbleSort


def BinarySearch(arr, low, high, x):
    if high >= low:
        mid = (high + low) // 2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return BinarySearch(arr, low, mid - 1, x)
        else:
            return BinarySearch(arr, mid + 1, high, x)
    else:
        return -1


def main():
    ar = [12, 77, 98, 45, 8, 5, 44, 36, 15, 50]
    arr = BubbleSort.BubbleSort(ar)
    print(arr)
    pos = BinarySearch(arr, 0,len(arr)-1, 50)
    print("Position:: ",pos)


if __name__ == '__main__':
    main()
