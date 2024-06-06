##include <bit/std.c++>

int main() {
    // Initialize input data
    std::vector<int> input = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> v;

  
    for (int i = 0; i < input.size(); i += 2) {
        v.push_back(input[i]);
    }

   
 
    for (auto i : v) {
        std::cout << i << " ";
    }
    return 0 ;
}