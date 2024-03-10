#include <iostream>
#include <Windows.h>
#include <cstdlib>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
    const int row = 5;
    const int col = 5;
    int arr[row][col];
    int min, max, sum = 0, count = 0;

    max = INT_MIN;
    min = INT_MAX;

    for (int  i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = 1 + rand() % 20;
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
            count++;
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
                
            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }
        
    std::cout << "\n\n\n\n\n";

    int arr2[row][col];
    int totalSum = 0;
    int rowsum = 0;
    int colsum = 0;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr2[i][j] = 1 + rand() % 20;
        }
    }
    
    for (int i = 0; i < row; i++) {

        for (int k = 0; k < col; k++) {
            std::cout << " " << arr2[i][k] << " ";
            rowsum += arr2[i][k];
        }

        std::cout << " | " << rowsum << std::endl;
        totalSum += rowsum;
        rowsum = 0;
    }
    std::cout << "----------------|----" << std::endl;
    for (int i = 0; i < row; i++) {

        for (int k = 0; k < col; k++) {
            colsum += arr2[k][i];
        }
        std::cout << " " << colsum;
        totalSum += colsum;
        colsum = 0;
    }
    std::cout << " | " << totalSum;
   
    return 0;
}