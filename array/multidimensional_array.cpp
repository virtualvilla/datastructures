#include <iostream>
using namespace std;

int main(){
    int row = 2;
    int col = 2;
    int k=0;
    
    // dynamic array initialization (pointer to an array of pointers to array)
    int** d_arr = new int*[row];
    
    for(int i=0; i<row; i++)
        d_arr[i] = new int[col];
    
    for(int j=0; j<row; j++)
        for(int i=0; i<col; i++)
            d_arr[j][i] = ++k;
    
    // print the 2d array
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << d_arr[i][j] << " ";  
            }
            cout << endl;
        }
        
    // freeing memory
    for(int i=0; i<row; i++){
        delete [] d_arr[i];
        }
    delete [] d_arr;
    
    return 0;
    }
