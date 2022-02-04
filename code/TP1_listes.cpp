#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <list>




int main() {
    std::list<int> lst_int={1,2,3,4,5,6,7,8};
    
    std::list<int>::iterator it=lst_int.begin();
    ++it;
    ++it;
    lst_int.erase(it);

    for (auto variable : lst_int) {
        std::cout<<variable<<" ";
    }
    std::cout<<std::endl;

    return 0;
}