#include<iostream>
#include<cmath>

using namespace std;

int main(){
    unsigned short i, j, ordSqr[3][3], cost = 0;
    unsigned short reversed = 0, rot = -1;
    unsigned short mgcSqr[3][3] = {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}};
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            cin >> ordSqr[i][j];
        }
    }
    // check center
    // get orientation
    if(ordSqr[0][1] == 1 && ordSqr[2][1] == 9){
        rot = 0;
    }else if(ordSqr[0][1] == 9 && ordSqr[2][1] == 1){
        rot = 2;
    }

    // if get the orientation
    if(rot != -1){
        if(rot == 0){
            
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    if(ordSqr[i][j] != mgcSqr[i][j]){
                        cost += abs(ordSqr[i][j] - mgcSqr[i][j]);
                    }
                }
            }
        } else{
            for(i = 0; i < 3; i++){
                for(j = 0; j < 3; j++){
                    if(ordSqr[i][j] != mgcSqr[j][i]){
                        cost += abs(ordSqr[i][j] - mgcSqr[j][i]);
                    }
                }
            }
        }
    } else{
        if(ordSqr[0][1] == 1 && ordSqr[2][1] == 9){
        rot = 0;
        }else if(ordSqr[0][1] == 9 && ordSqr[2][1] == 1){
            rot = 2;
        }
    }


    // check edge
    if(ordSqr[0][1] + ordSqr[2][1] != 10 || ordSqr[0][1] % 2 + ordSqr[2][1] % 2 != 2){
        
    }
    if(ordSqr[0][1] + ordSqr[1][0] + ordSqr[1][2] + ordSqr[2][1] != 20 || ordSqr[0][1] % 2 + ordSqr[1][0] % 2 + ordSqr[1][2] % 2 + ordSqr[2][1] % 2 != 4){
        if(ordSqr[1][0] + ordSqr[1][2] != 10){// check row 2

        }
        if(ordSqr[0][1] + ordSqr[2][1] != 10){ // check column 2

        }
    }

    
    //check corner

}