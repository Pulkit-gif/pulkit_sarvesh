import BubbleSort


def BinarySearch(arr, low, high, x):
    if high >= low:
 
        mid = (high + low) // 2
 
        # If element is present at the middle itself
        if arr[mid] == x:
            return mid
 
        # If element is smaller than mid, then it can only
        # be present in left subarray
        elif arr[mid] > x:
            return BinarySearch(arr, low, mid - 1, x)
 
        # Else the element can only be present in right subarray
        else:
            return BinarySearch(arr, mid + 1, high, x)
 
    else:
        # Element is not present in the array
        return -1


def main():
    ar = [12, 77, 98, 45, 8, 5, 44, 36, 15, 50]
    ar = BubbleSort.BubbleSort(ar)

    #pos = BinarySearch(ar, 0,len(ar)-1, 8)
    print(ar)


if __name__ == '__main__':
    main()
