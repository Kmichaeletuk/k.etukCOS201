#include <iostream>
using namespace std;
int main() {
    int matrix1[3][3], matrix2[3][3], result[3][3]
    
    int matrix1[3][3] = {{2,4,5},{3,1,2},{4,6,8}}
    int matrix2[3][3] = {{1,2,4},{3,1,2},{1,1,4}}
    int result[3][3];

    for(i = 0; i<3; ++i){
        for(j = 0; j<3; ++j){
            matrix1[i][j] + matrix2[i][j] = result[i][j];
            cout << "The sum of two matrices is: " <<endl;
            for(i = 0; i<3; ++i) {
                for(j = 0; j<3; ++i) {
                    cout <<result[i][j]<<"";
                
                }
                cout<<endl;
            } 
            return 0;
        }
    }
    

}

