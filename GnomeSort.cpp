void GnomeSort(vector<int> &vec) {
	int N = vec.size();
	for (int i = 0; i < N; ++i) {
		int j = 1;
		while (j < N) {
			if (j == 0)
				++j;
			if (vec[i][j - 1] <= vec[i][j])
				++j;
			else {
				swap(vec[i][j - 1], vec[i][j]);
				--j;
			}
		}
	}
}