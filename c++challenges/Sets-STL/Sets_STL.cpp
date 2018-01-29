#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int size = 0, order = 0, num = 0;
    std::cin >> size;
    std::set<int> s;
    
    for(int i = 0; i < size; i++)
    {
        std::cin >> order >> num;
        if(order == 1)
        {
            s.insert(num);
        }
        else if(order == 2)
        {
            s.erase(num);   
        }
        else if(order == 3)
        {
            std::set<int>::iterator it = s.find(num);
            if(it != s.end())
            {
                std::cout << "Yes" << std::endl;
            }
            else
            {
                std::cout << "No" << std::endl;
            }
        }
        else
        {
            std::cout << "no requested order";
        }
    }
    
    return 0;
}
