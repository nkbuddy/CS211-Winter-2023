#include <iostream>

int main() {
    // Write C++ code here
    int car[6] = {0,0,0,0,0,0};
    for(int i = 0; i<10;i++){
        car[0] = i;
        for(int j = 0; j<10;j++){
            car[1] = j;
            for(int k = 0; k<10;k++){
                car[2] = k;
                for(int l = 0; l<10;l++){
                    car[3] = l;
                    for(int m = 0; m<10;m++){
                        car[4] = m;
                        for(int n = 0; n<10;n++){
                            car[5] = n;
                            for(int i : car) std::cout << i;
                            std::cout << "\n";
                        }
                    }
                }
            }
        }
    }
    return 0;
}