#include <iostream>

int main() {
    // Write C++ code here
    int car[6] = {0,0,0,0,0,0};
    for(int i0 = 0; i0<10;i0++){
        car[0] = i0;
        for(int i1 = 0; i1<10;i1++){
            car[1] = i1;
            for(int i2 = 0; i2<10;i2++){
                car[2] = i2;
                for(int i3 = 0; i3<10;i3++){
                    car[3] = i3;
                    for(int i4 = 0; i4<10;i4++){
                        car[4] = i4;
                        for(int i5 = 0; i5<10;i5++){
                            car[5] = i5;
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