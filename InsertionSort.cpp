void insertionSort(std::vector<int>& arr) {
    int i = 1; 
    while (i < arr.size()) {
        
        for (int Index = i; Index > 0 && arr[Index - 1] > arr[cIndex]; Index--) {
            int temp = arr[Index];
            arr[Index] = arr[Index - 1];
            arr[Index - 1] = temp;
        }
        i++; 
    }
}