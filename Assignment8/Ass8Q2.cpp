template <typename T>
T findMin(T arr[], int size) {
    T min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int main() {
    int arr[] = {4, 2, 9, 1, 7};
    cout << "Min: " << findMin(arr, 5) << endl;
}