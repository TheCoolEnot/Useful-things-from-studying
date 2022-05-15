void InsertionSort(vector<int> &vec) {
	int n = vec.size();
	for (int i = 0; i < n; ++i) {
		int j = i;
		while (j > 0 and vec[j] < vec[j - 1]) {
			swap(vec[j], vec[j - 1]);
			j--;
		}
	}
}