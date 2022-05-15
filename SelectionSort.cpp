void SelectionSort(vector<int> &vec) {
    int x, k, mn;
	int n = vec.size();
    for (int i = 0; i < n; ++i) {
        mn = vec[i];
        k = i;
        for (int j = i + 1; j < n; ++j) {
            if (vec[j] < mn) {
                mn = vec[j];
                k = j;
            }
        }
        x = vec[i];
        vec[i] = vec[k];
        vec[k] = x;
    }
}