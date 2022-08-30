void radix_sort(vector<int>& arr)
{
    int radix = 1;

    int max = *(max_element(arr.begin(), arr.end()));
    while (max / radix)
    {
        vector<vector<int>> buckets(10, vector<int>());
        for (const auto& num : arr)
        {
            int digit = num / radix % 10;
            buckets[digit].push_back(num);
        }
        size_t k = 0;
        size_t i = 0;
        while (i < 10)
        {
            size_t j = 0;
            while (j < buckets[i].size())
            {
                arr[k] = buckets[i][j];
                k++;
                j++;
            }
            i++;
        }

        radix = 10 * radix;
    }
}