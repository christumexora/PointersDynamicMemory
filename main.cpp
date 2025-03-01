#include <iostream>
#include <vector>
#include <array>
#include <numeric>

using namespace std;


int *apply_all(int array1[], const size_t array1_size, int array2[], const size_t array2_size);

int main(){
    const size_t array1_size{5};
    const size_t array2_size{3};
    
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};
    size_t new_array_size =  array1_size * array2_size;
    
    int *new_array = apply_all(array1, array1_size, array2, array2_size);
    
    cout << "Resultant array: ";
    for(size_t i = 0; i < new_array_size; ++i) {
        cout << new_array[i] << " ";
    }
    cout << endl;
    
    delete [] new_array;
    
    return 0;
    }

int *apply_all(int array1[], const size_t array1_size, int array2[], const size_t array2_size){
    int *new_array = new int[array1_size * array2_size];
    size_t new_arr_position{0};
    for(size_t i{0}; i < array2_size; ++i){
        for(size_t j{0}; j < array1_size; ++j){
            new_array[new_arr_position++] = array2[i] * array1[j];
            }
        }
        return new_array;
    }







 /*  
void print_arr1(int array1[], const size_t array1_size){
    for(size_t i{0}; i < array1_size; ++i){
        cout << array1[i] << " ";
        
        }
    cout << endl;
    }
    
void print_arr2(int array2[], const size_t array2_size){
    for(size_t i{0}; i < array2_size; ++i){
        cout << array2[i] << " ";
        
        }
    cout << endl;
    }
     */
/*     
void apply_all(int array1[], const size_t array1_size, int array2[], const size_t array2_size, int new_array[]);

int main() {
    const size_t array1_size{5};
    const size_t array2_size{3};
    
    int array1[] {1, 2, 3, 4, 5};
    int array2[] {10, 20, 30};
    int new_array[array1_size * array2_size];  // Correct size for result array
    
    apply_all(array1, array1_size, array2, array2_size, new_array);

    // Display new_array
    cout << "Resultant array: ";
    for(size_t i = 0; i < array1_size * array2_size; ++i) {
        cout << new_array[i] << " ";
    }
    cout << endl;

    return 0;
}

void apply_all(int array1[], const size_t array1_size, int array2[], const size_t array2_size, int new_array[]) {
    size_t position = 0; // To track new_array index
    for(size_t i = 0; i < array2_size; ++i) {  // array2 as outer loop (for clarity)
        for(size_t j = 0; j < array1_size; ++j) {
            new_array[position++] = array1[j] * array2[i];
        }
    }
}
*/