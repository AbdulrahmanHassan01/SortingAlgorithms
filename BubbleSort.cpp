void bubbleSort(std::vector<int>& arr) {
    bool swap = false;

    for (int i = 0; i < arr.size() - 1; swap = false, i++) {
        for ( int j = 0; j < arr.size() - i - 1; j++) {
            if ( arr[j] > arr[j + 1]) {
                int tmp = arr[j];

                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

                swap = true;
            }
        }
        if (!swap) break; 
    }
}