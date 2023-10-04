#include <iostream>
using namespace std;

int main()
{

    return 0;
}

int BinarySearch(int *Array, int size, int target)
{
    int low = 0, high = size - 1;
    while (low <= high)
    {

        int mid = (low + high) / 2;
        if (Array[mid] == target)
            return true;
        else if (Array[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return;
}