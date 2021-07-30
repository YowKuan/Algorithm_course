// Sedgewick's imcrements1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
    int a[100];
    std::cout << sizeof(a) / sizeof(a[0]);
}
int a_size = sizeof(a) / sizeof(a[0]);
int a[100];
void Sedgewick()

{
    
    for (int gap = a_size() / 2; gap > 0 ; gap/=2)
    {
        for (int i = gap; i <a_size() ; i++)
        {
            for (int j = i; j > gap && tmp < a[j - gap]; j-=gap)
            {
                a[j] = a[j - gap];
            }
            a[j] = tmp
        }
    }
}
