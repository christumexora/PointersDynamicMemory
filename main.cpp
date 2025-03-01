#include <iostream>

using namespace std;


int *apply_all(const int array1[], const size_t array1_size, const int array2[], const size_t array2_size);
void print(const int array1[], const size_t array1_size);
void print1(const int array2[], const size_t array2_size);

int main(){
    const size_t array1_size{5};
    const size_t array2_size{3};
    size_t new_array_size =  array1_size * array2_size;
    
    const int array1[] {1, 2, 3, 4, 5};
    const int array2[] {10, 20, 30};
    int *new_array{};
    new_array = new int[array1_size * array2_size];
    
    new_array = apply_all(array1, array1_size, array2, array2_size);
    
    print(array1, array1_size);
    print1(array2, array2_size);
    
    cout << "Resultant array: ";
    for(size_t i = 0; i < new_array_size; ++i) {
        cout << new_array[i] << " ";
    }
    cout << endl;
    
    delete [] new_array;
    
    return 0;
    }
    
void print(const int array1[], const size_t array1_size){
    for(size_t i{0}; i < array1_size; ++i){
        cout << array1[i] << " ";
        }
        cout << endl;
    }

void print1(const int array2[], const size_t array2_size){
    for(size_t i{0}; i < array2_size; ++i){
        cout << array2[i] << " ";
        }
        cout << endl;
    }

int *apply_all(const int array1[], const size_t array1_size, const int array2[], const size_t array2_size){
    int *new_array = new int[array1_size * array2_size];
    size_t new_arr_position{0};
    for(size_t i{0}; i < array2_size; ++i){
        for(size_t j{0}; j < array1_size; ++j){
            new_array[new_arr_position] = array2[i] * array1[j];
            new_arr_position++;
            }
        }
        return new_array;
    }