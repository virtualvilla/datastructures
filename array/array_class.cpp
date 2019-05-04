

#include <iostream>
using namespace std;

class arraylist{
        int* arr;
        int capacity;
        int num_elements;
    
    public:
        arraylist(int size){
            arr = new int[size];
            num_elements = 0;
            capacity = size;
            }
        
        void insert(int val){
            if(num_elements < capacity){
                arr[num_elements] = val;
                num_elements++;
                }
            else{
                resize();
                arr[num_elements] = val;
                num_elements++;
                }
            }
            
        int get(int index){
            return arr[index];
            }
            
        void resize(){
            int* temp_arr = new int[capacity*2];
            capacity *= 2;
            
            for(int i=0; i<num_elements; i++){
                temp_arr[i] = arr[i];
                }
                
            delete [] arr;
            arr = temp_arr;
            }
            
        int length(){
            return num_elements;
            }
            
        void print(){
            for(int i=0; i< num_elements; i++){
                cout << arr[i] << " ";
                }
            }
    };

int main(){
    arraylist arr(2);    // arr of size 2
    arr.insert(2);       // arr = [2]
    arr.insert(4);       // arr = [2, 4]
    arr.insert(5);       // arr = [2, 4, 5]  **resize() is called here
    arr.print();         // out = [2, 4, 5]
    }            
