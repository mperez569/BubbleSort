#include <iostream>
using namespace std;

void BubbleSort(int x[], int l)
{
    int i, j, temp;
    int counter = 0;
    for(i=0; i < l-1; i++)
    {
        for (j = 0; j < l - i - 1; j++)
        {
            if (x[j] > x[j+1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
        counter++;
    }
    cout << "The count is ==>" << counter << endl;
}

int main()
{
    int x[] = { 13, 6, 89, 90, 2, 5, 23, 46, 88, 100, 7 };
    int len = sizeof(x) / sizeof(int);
    cout << "BEFORE THE BUBBLE SORT" << endl;
    for (int i = 0; i < len; i ++)
    {
        cout << x[i] << endl;
    }
    BubbleSort(x, len);
    cout << "AFTER THE SORT" << endl;
    for (int i = 0; i < len; i++)
    {
        cout << x[i] << endl;
    }
}
