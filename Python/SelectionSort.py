def SelectionSort(array):
    for i in range(len(array)):
        min_index = i
        for j in range(i+1,len(array)):
            if array[min_index] > array[j]:
                min_index = j
        array[i], array[min_index] = array[min_index], array[i]
        

def main():
    array = [5, 10, 12, 4, 89, 25, 34, 52, 2, 66]
    SelectionSort(array)
    print(array)

if __name__ == '__main__':
    main()
