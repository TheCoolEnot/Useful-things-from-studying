void QuickSort(vector<int> &vec, int L, int R) {
    int i, j, o, x;
    i = L;
    j = R;
    o = (vec[i] + vec[j] + vec[(i + j) / 2]) / 3;
    while (i <= j) {
        while (vec[i] < o)
            ++i;
        while (vec[j] > o)
            --j;
        if (i <= j) {
            x = vec[i];
            vec[i] = vec[j];
            vec[j] = x;
            --j;
            ++i;
        }
    }
    if (j > L)
        QuickSort(L, j);
    if (i < R)
        QuickSort(i, R);
}