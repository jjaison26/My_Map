// Zach & Jewel
#include <iostream>
#include <vector>
using namespace std;
int mult(int x) {
    return x * 5;
}

vector<int> my_map(vector<int> my_vec , int ((*my_fun)(int)) ) {
    vector<int> my_vector;
    
    for(int i = 0; i < my_vec.size(); i++) {
        my_vector.push_back((*my_fun)(my_vec[i]));
    }
    return my_vector;
    
}

int main() {
    vector<int> my_v = {1, 2, 3};
    vector<int> result = my_map(my_v, &mult);
    for(int i = 0; i < result.size(); i++) {
        cout << result[i] << endl;
    }
    return 0;
}
