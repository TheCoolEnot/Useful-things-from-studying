void CombSort(vector<int> vec) {
    int x;
	int N = vec.size();
    int gap = floor(N / 1.247);
    while (gap >= 1) {
        if (gap < 1)
            gap = 1;
        for (int i = 0; i < N - gap; ++i) {
            if (vec[i] > vec[i + gap]) {
                x = vec[i];
                vec[i] = vec[i + gap];
                vec[i + gap] = x;
            }
        }
        gap = floor(gap / 1.247);
    }
}