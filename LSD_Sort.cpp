void LSD_Sort(vector<int> &vec, int k) {
    int N = vec.size();
    int x = 1, p = 0;
    vector<int> vec_0, vec_1, vec_2, vec_3, vec_4, vec_5, vec_6, vec_7, vec_8, vec_9;
    for (int i = 0; i < k; ++i) {
        x *= 10;
        for (int j = 0; j < N; ++j)
            switch ((vec[j] / x) % 10) {
            case 0:
                vec_0.push_back(vec[j]);
                break;
            case 1:
                vec_1.push_back(vec[j]);
                break;
            case 2:
                vec_2.push_back(vec[j]);
                break;
            case 3:
                vec_3.push_back(vec[j]);
                break;
            case 4:
                vec_4.push_back(vec[j]);
                break;
            case 5:
                vec_5.push_back(vec[j]);
                break;
            case 6:
                vec_6.push_back(vec[j]);
                break;
            case 7:
                vec_7.push_back(vec[j]);
                break;
            case 8:
                vec_8.push_back(vec[j]);
                break;
            case 9:
                vec_9.push_back(vec[j]);
                break;
            }

        while (true) {
            for (int r = 0; r < vec_0.size(); ++r) {
                vec[p] = vec_0[r];
                ++p;
            }
            for (int r = 0; r < vec_1.size(); ++r) {
                vec[p] = vec_1[r];
                ++p;
            }
            for (int r = 0; r < vec_2.size(); ++r) {
                vec[p] = vec_2[r];
                ++p;
            }
            for (int r = 0; r < vec_3.size(); ++r) {
                vec[p] = vec_3[r];
                ++p;
            }
            for (int r = 0; r < vec_4.size(); ++r) {
                vec[p] = vec_4[r];
                ++p;
            }
            for (int r = 0; r < vec_5.size(); ++r) {
                vec[p] = vec_5[r];
                ++p;
            }
            for (int r = 0; r < vec_6.size(); ++r) {
                vec[p] = vec_6[r];
                ++p;
            }
            for (int r = 0; r < vec_7.size(); ++r) {
                vec[p] = vec_7[r];
                ++p;
            }
            for (int r = 0; r < vec_8.size(); ++r) {
                vec[p] = vec_8[r];
                ++p;
            }
            for (int r = 0; r < vec_9.size(); ++r) {
                vec[p] = vec_9[r];
                ++p;
            }
            p = 0;
            break;
        }
        vec_0.clear(); vec_1.clear(); vec_2.clear(); vec_3.clear(); vec_4.clear(); vec_5.clear(); vec_6.clear(); vec_7.clear(); vec_8.clear(); vec_9.clear();
    }
}