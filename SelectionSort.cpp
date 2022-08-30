void selectionSort(std::vector<int>& arr) {
    int Index = 0
        while (Index < arr.size() - 1)
 {
        int minIndex = Index;

        int i = Index + 1;

        while (i < arr.size())
        {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
                i++;
            }
         Index++;
        }
        if (!(minIndex == Index9) {
            int temp = arr[Index];
            arr[Index] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}