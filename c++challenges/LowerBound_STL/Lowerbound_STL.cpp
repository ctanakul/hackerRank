#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int size = 0;
    std::cin >> size;
    
    std::vector<int> vect(size);
    
    for(int i = 0; i < size; i++)
    {
        std::cin >> vect[i];
    }

    int q_size = 0, num = 0;
    std::vector<int>::iterator it;
    std::cin >> q_size;
    
    for(int i = 0; i < q_size; i++)
    {
        std::cin >> num;
        it = std::lower_bound (vect.begin(), vect.end(), num);
        
        (*it == num) ? (std::cout << "Yes " << (it - vect.begin() + 1)) : (std::cout << "No " << (it - vect.begin() + 1));
        std::cout << std::endl;
    }
    
    return 0;
}
