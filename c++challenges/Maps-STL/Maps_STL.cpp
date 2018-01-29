#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    std::map<std::string, int> sheets;
    int order = 0, size = 0, score = 0;
    std::string name;
    
    std::cin >> size;
    
    for(int i = 0; i < size; i++)
    {
        std::cin >> order >> name;
        
        if(order == 1)
        {
            std::cin >> score;
            (sheets.find(name) != sheets.end()) ? (sheets[name] += score) : (sheets[name] = score);
        }
        else if(order == 2)
        {
            sheets[name] = 0;
        }
        else if(order == 3)
        {
            (sheets.find(name) != sheets.end()) ? (std::cout << sheets[name] << "\n") : (std::cout << 0 << "\n");
        }
        else
        {
            std::cout << "no requested number\n";
        }
        

    }
    
    
    return 0;
}
