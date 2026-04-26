template <typename T>
int linearSearch(T arr[], int size, T key) {
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40};
    int idx = linearSearch(arr, 4, 30);
    cout << "Found at index: " << idx << endl;
}