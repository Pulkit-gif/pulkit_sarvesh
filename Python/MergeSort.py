def MergeSort(array):
    if len(array) > 1:
        mid = len(array) // 2
        Left = array[:mid]
        Right = array[mid:]
        MergeSort(Left)
        MergeSort(Right)
        i = j = k = 0
        while i < len(Left) and j < len(Right):
            if Left[i] <= Right[j]:
                array[k] = Left[i]
                i += 1
            else:
                array[k] = Right[j]
                j += 1
            k += 1

        while i < len(Left):
            array[k] = Left[i]
            i += 1
            k += 1
        while j < len(Right):
            array[k] = Right[j]
            j += 1
            k += 1


array = [5, 10, 12, 4, 89, 25, 34, 52, 2, 66]
MergeSort(array)
print(array)