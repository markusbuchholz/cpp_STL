#define COL 5
#define ROW 4

#include <vector>
#include <iostream>
#include <random>

int main()
{

    std::vector<int> v{10, 20, 30, 40};
    std::vector<int>::iterator ptr;

    // Iterators

    std::cout << "size of vector ::" << v.size() << std::endl;
    for (ptr = v.begin(); ptr < v.end(); ptr++)
    {

        std::cout << *ptr << std::endl;
    }

    for (auto ijk = v.begin(); ijk < v.end(); ijk++)
    {
        std::cout << *ijk << std::endl;
    }

    //print size vector of vector
    std::vector<std::vector<int>> vv{{1, 2, 3, 4}, {5, 6, 7, 8}};
    std::cout << vv.size() << std::endl;

    // Create our random number generators
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<int> dist(0, 10);

    // std::vector<std::vector<int>> vec;
    // std::vector<int> temp_vec;
    // ;
    // auto ptr_vec2 = vec.begin();

    // for (int i = 0; i < ROW; i++)
    // {
    //     for (int j = 0; j < COL; j++)
    //     {
    //         temp_vec.push_back(dist(rng));
    //     }
    //     vec.push_back(temp_vec);
    // }

    // // Displaying the 2D vector 
    // for (int i = 0; i < vec.size(); i++) { 
    //     for (int j = 0; j < vec[i].size(); j++) 
    //         std::cout << vec[i][j] << " "; 
    //     std::cout << std::endl; 
    // } 

    // Initializing the vector of vectors 
    std::vector<std::vector<int> > vec; 
  
    // Elements to insert in column 
    int num = 10; 
  
    // Inserting elements into vector 
    for (int i = 0; i < ROW; i++) { 
        // Vector to store column elements 
        std::vector<int> v1; 
  
        for (int j = 0; j < COL; j++) { 
            v1.push_back(num); 
            num += 5; 
        } 
  
        // Pushing back above 1D vector 
        // to create the 2D vector 
        vec.push_back(v1); 
    } 
  
    // Displaying the 2D vector 
    for (int i = 0; i < vec.size(); i++) { 
        for (int j = 0; j < vec[i].size(); j++) 
            std::cout << vec[i][j] << " "; 
        std::cout << std::endl; 
    } 





}