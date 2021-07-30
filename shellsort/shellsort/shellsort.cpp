// shellsort.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include  <iostream> 
using namespace std;

// shellsort implementation
int shellSort(int arr[], int N)
{
    for (int gap = N / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < N; i += 1)
        {
            //sort sub lists created by applying gap 
            int temp = arr[i];

            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];

            arr[j] = temp;
        }
    }
    return 0;
}

int main()
{
    int arr[] = { 45,23,53,43,18,24,8,95,101 }, i;
    //Calculate size of array 
    int N = sizeof(arr) / sizeof(arr[0]);
    //printf("%d", sizeof(arr[1]));

    cout << "Array to be sorted: \n";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    shellSort(arr, N);

    cout << "\nArray after shell sort: \n";
    for (int i = 0; i < N; i++)
        cout << arr[i] << " ";

    return 0;
}