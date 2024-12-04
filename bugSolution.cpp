std::vector<int> vec = {1, 2, 3, 4, 5};

for (int i = 0; i < vec.size(); ++i) { //Corrected condition
    std::cout << vec[i] << " ";
}

std::cout << std::endl; 
// Or use iterators for better style:
for (int x : vec) {
  std::cout << x << " ";
}
std::cout << std::endl;