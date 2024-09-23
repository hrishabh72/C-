#include <iostream>
#include <map>
#include <vector>
#include <iterator>
#include <iomanip>
using namespace std;

// Contains Common Items 
// bruteforce approach
// bool contains_common_item(const vector<int>& vec1, const vector<int>& vec2)
// {
//     for(auto i{ vec1.begin() }; i != vec1.end(); ++i) {
//         for(auto j{ vec2.begin() }; j != vec2.end(); ++j) {
//             if(*(i) == *(j)) {
//                 return true;
//             }
//         }
//     }
    // return false;
// }
 // Time Complexity 0(vec1*vec2)

bool contains_common_item_map(const vector<int>& vec1, const vector<int>& vec2)
{
    map<int, bool> my_map{};
    for(auto i{ vec1.begin() }; i != vec1.end(); ++i) {
        my_map.insert(pair<int, bool>(*i, true));
    }
    
    for(auto i{ vec2.begin() }; i != vec2.end(); ++i) {
        if(my_map[*i]){
            return true;
        }
    }
    return false;
    
} // Time Complexity 0(vec1+vec2)

int main()
{
    vector<int> vec1{ 1, 2, 4, 5 };
    vector<int> vec2{ 6, 7, 8, 5 };
    
    cout << boolalpha;
    // cout << contains_common_item(vec1, vec2) << endl;
    cout << contains_common_item_map(vec1, vec2) << endl;
    return 0;
}