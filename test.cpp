#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 3};
    int length = arr.size();
    int k = 5;
    int count = 0;
    int value = 0;
    int result;

    try
    {
        if (arr[length - 1] == length)
        {
            return result = arr[length - 1] + k;
        }
        else
        {
            for (int i = 0; i < 1000 && value < length; i++)
            {
                if (arr[value] != i + 1)
                {
                    count++;
                    if (count == k)
                    {
                        result = i + 1;
                        break;
                    }
                }
                else
                {
                    if (value < length)
                    {
                        value++;
                    }
                    // std::cout << "value: " << count << endl;
                    printf("value %d\n", value);
                }
            }
        }

        std::cout << result << endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}