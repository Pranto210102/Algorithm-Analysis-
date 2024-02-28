#include <iostream>
#include <vector>

using namespace std;

void print(const vector<int>& a) {
    for (int num : a) {
        cout << num << " ";
    }
    cout << endl;
}

void merge(vector<int>& a, const vector<int>& left_a, const vector<int>& right_a) {
    int i = 0, j = 0, k = 0;
    while (i < left_a.size() && j < right_a.size()) {
        if (left_a[i] <= right_a[j])
            a[k++] = left_a[i++];
        else
            a[k++] = right_a[j++];
    }

    while (i < left_a.size()) {
        a[k++] = left_a[i++];
    }
    while (j < right_a.size()) {
        a[k++] = right_a[j++];
    }

    print(a);
}

void merge_sort(vector<int>& a) {
    int n = a.size();
    if (n <= 1)
        return;

    int mid = n / 2;

    vector<int> left_a(a.begin(), a.begin() + mid);
    vector<int> right_a(a.begin() + mid, a.end());

    merge_sort(left_a);
    merge_sort(right_a);

    merge(a, left_a, right_a);

    //print(a);
}

int main() {
    vector<int> a = {3, 5, 1, 9, 6, 10, 9, 2,1,1,1,8,1,1,};

    merge_sort(a);
    print(a);

    return 0;
}
