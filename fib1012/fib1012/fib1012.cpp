// fib1012.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include<iostream> 
#include <chrono>
using namespace std;
using namespace std::chrono;


int fib(long x) {
    if (x == 0) {
        return 0;
    }
    else if (x == 1){
        return 1;   
    }
    else {
        return fib(x - 1) + fib(x - 2);
    }
}

int main() {
    int y;
    int rep = 20;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();
    for (long i = 0; i < rep; i++) {
        y = fib(40);
    }
    
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    cout << y << endl;

    duration<double> time_span = duration_cast<duration<double>>(t2 - t1)/rep;

    std::cout << "The time spent is " << time_span.count() << " seconds.";
    std::cout << std::endl;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
