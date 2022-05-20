void MergeSort(vector<int> &vec, size_t start, size_t end) {
	if (end - start < 2)
		return;
	if (end - start == 2) {
		if (vec[start] > vec[start + 1]) {
			swap(vec[start], vec[start + 1]);
		}
		return;
	}
	MergeSort(vec, start, start + (end - start) / 2);
	MergeSort(vec, start + (end - start) / 2, end);
	vector<int> b;
	size_t b1 = start;
	size_t e1 = start + (end - start) / 2;
	size_t b2 = e1;
	while (b.size() < end - start) {
		if (b1 >= e1 or (b2 < end and vec[b2] <= vec[b1])) {
			b.push_back(vec[b2]);
			b2++;
		}
		else {
			b.push_back(vec[b1]);
			b1++;
		}
	}
	for (size_t i = start; i < end; ++i) {
		vec[i] = b[i - start];
	}
}