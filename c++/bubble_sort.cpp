#include <iostream>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

void swap(int &a ,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void bubble_sort(vector<int> &vec)
{
    int len = vec.size();
    for (int i = 0; i < len-1; i++)
    {
        for (int j = 0; j < len -1 -i; j++)
        {
            if (vec[j] > vec[j+1])
            {
                swap(vec[j], vec[j+1]);
            }
            
        }
        
    }
    
}

int main(int argc, char const *argv[])
{
    vector<int> vec = {5,9,6,6,6,2,5,9,5};
    bubble_sort(vec);
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i]<<endl;
    }
    
    // cout << vec << endl;
    
    return 0;
}
