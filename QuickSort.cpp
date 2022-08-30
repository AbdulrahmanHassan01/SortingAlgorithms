static int partition(std::vector<int>& arr, int first, int last) {
    int pivotIndex = (first + last) / 2;
    int pivotValue = arr[pivotIndex];

    while (true) {

        while (arr[first] < pivotValue) {
            first++;
        }


        while (arr[last] > pivotValue) {
            last--;
        }

        if (first >= last) {
            return last;
        }


        int temp = arr[first];
        arr[first] = arr[last];
        arr[last] = temp;
    }
}

void quickSort(std::vector<int>& arr, int first, int last) {

    if (first < last) {

        int pivotIndex = partition(arr, first, last);

        quickSort(arr, first, pivotIndex);

        quickSort(arr, pivotIndex + 1, last);
    }
}