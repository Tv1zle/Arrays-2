
#include <iostream>
#include <ctime>


int main()
{
    //Task 1
    srand(time(0));
    int arr[10];


    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 99;
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";


    for (int i = 0, n = 9; i < 5; i++, n--)
    {
        std::swap(arr[i], arr[n]);
    }


    for (auto now : arr)
    {
        std::cout << now << " ";
    }
    std::cout << "\n\n";



    //Task 2
    int ind = 0, A[5] = { 1, 2, 3, 4, 5 }, B[5] = { 10, 20, 30, 40, 50 }, C[10];


    for (int i = 0; i < 5; i++, ind++)
    {
        C[ind] = A[i];
        ind++;
        C[ind] = B[i];
    }


    for (auto now : C)
    {
        std::cout << now << " ";
    }
    std::cout << "\n\n";



    //Task 3
    srand(time(0));
    int array[20], firstarr[20], nun = 0;


    for (int i = 0; i < 20; i++)
    {
        firstarr[i] = rand() % 50 - 25;
    }


    for (int i = 0; i < 20; i++)
    {
        if (firstarr[i] > 0)
        {
            array[nun] = firstarr[i];
            nun++;
        }
    }


    for (int i = 0; i < 20; i++)
    {
        if (firstarr[i] == 0)
        {
            array[nun] = firstarr[i];
            nun++;
        }
    }


    for (int i = 0; i < 20; i++)
    {
        if (firstarr[i] < 0)
        {
            array[nun] = firstarr[i];
            nun++;
        }
    }


    for (auto now : array)
    {
        std::cout << now << " ";
    }
  

}