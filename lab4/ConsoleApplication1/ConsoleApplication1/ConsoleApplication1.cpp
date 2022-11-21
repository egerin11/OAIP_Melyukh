#include <iostream> 
#include <ctime>

const int N = 10, M = 10;

int main()
{
    //int N;
    int sum1 = 0;
    int sum2 = 0;
    int sum3 = 0;
   /* std::cout << "Vvedite rang matrici= " << "\n";
    std::cin >> N;*/
    int arr[N][M];
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; ++j)
            arr[i][j] = (rand() % 10) - 5;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; ++j)
            std::cout << arr[i][j] << " ";
        std::cout << "\n";
    }
    for (int i = 0; i < N; i++)
    {
        if (arr[i][0] < 0)
        {     
            for (int j = 0; j < M; j++)
            {
                if (i < j)
                    sum1 += arr[i][j];
                if (i == j)
                    sum2 += arr[i][j];
                if (i > j)
                    sum3 += arr[i][j];
            }

        }
    }
    std::cout << "\n" << "Symma elementov vishe diagonali= " << sum1;
    std::cout << "\n" << "Symma elementov na diagonali= " << sum2;
    std::cout << "\n" << "Symma elementov nije diagonali= " << sum3;
    return 0;
}