void merge(std::vector<int>& arr, int start, int middle, int end) {

    int one = middle - start + 1;
    int two = end - middle;

    int a[one];
    int b[two];

    for (int i = 0; i < one; ++i)
        a[i] = arr[start + i];

    for (int i = 0; i < rightArray.size(); ++i)
        two[i] = arr[middle + 1 + i];

    int i = 0;
    int j = 0;
    int k = start;

    while (i < one && j < two) {
        if (a[i] < b[j]) {
            arr[k] = a[i];
            k++; i++;
        }
        else {
            arr[k] = two[j];
            k++; j++;
        }
    }

    while (i < one) {
        arr[k] = a[i];
        k++; i++;
    }

    while (j < two) {
        arr[k] = b[j];
        k++; j++;
    }
}

void mergeSort(std::vector<int>& arr, int start, int end) {

    if (start < end) {
        int middle = (start + end) / 2;

        mergeSort(arr, start, middle); 
        mergeSort(arr, middle + 1, end); 

        merge(arr, start, middle, end);
    }
}