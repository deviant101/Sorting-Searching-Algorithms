#include <iostream>
using namespace std;

int BinarySearch(int *Array, int size, int target);

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int key = 0;
    int *arr = new int[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout << "Enter the key to be searched: ";
    cin >> key;
    int resutl = BinarySearch(arr, size, key);
    if (resutl == -1)
        cout << "The key is not present in the array";
    else
        cout << "The key is present at index " << resutl;

    return 0;
}

int BinarySearch(int *Array, int size, int target)
{
    int low = 0, high = size;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (Array[mid] == target)
            return mid;
        else if (Array[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}