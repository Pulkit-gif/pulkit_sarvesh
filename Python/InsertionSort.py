def InsertionSort(array):
    for i in range(1, len(array)):
        key = array[i]
        j = i-1
        while j >= 0 and key < array[j]:
            array[j+1] = array[j]
            j -= 1
        array[j+1] = key

def main():
    array = [5, 10, 12, 4, 89, 25, 34, 52, 2, 66]
    InsertionSort(array)
    print(array)

if __name__ == '__main__':
    main()
