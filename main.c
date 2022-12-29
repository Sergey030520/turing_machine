#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define EMPTY -1

static int type[] = {EMPTY, EMPTY, EMPTY, 1,1, 9, 9, EMPTY, EMPTY, EMPTY};

#define TYPE_SIZE (sizeof(type)/ sizeof(type[0]))

enum State{
    Q1, Q2, Q3, Q4, Q5,Q6, Q7, QE
};

void machine(){
    enum State state = Q1;
    int type_i = TYPE_SIZE/2;
    bool running = true;

    while(running){
        int symbol = type[type_i];
        switch (state) {
            case Q1:{
                if(symbol == EMPTY){
                    state = Q2;
                }else{
                    state = Q1;
                }
                type_i++;
                break;
            }
            case Q2: {
                if (symbol == EMPTY) {
                    type_i--;
                    state = Q3;
                } else {
                    type_i++;
                    state = Q1;
                }
                break;
            }
            case Q3: {
                if (symbol == EMPTY) {
                    type_i--;
                    state = Q4;
                } else if (symbol == 0) {
                    type_i--;
                    state = Q5;
                } else {
                    type[type_i]--;
                    type_i++;
                    state = Q4;
                }
                break;
            }
            case Q4: {
                if (symbol == EMPTY) {
                    state = QE;
                } else if (symbol == 0) {
                    type_i--;
                    state = Q5;
                } else {
                    state = Q3;
                }
                break;
            }
            case Q5: {
                if (symbol == EMPTY) {
                   type_i++;
                    state = Q7;
                } else if (symbol == 0) {
                    type_i--;
                    state = Q5;
                } else {
                    state = Q6;
                }
                break;
            }
            case Q6: {
                if (symbol == EMPTY) {
                    state = QE;
                } else if (symbol == 0) {
                    type[type_i] = 9;
                    type_i++;
                    state = Q6;
                } else {
                    type[type_i]--;
                    type_i++;
                    state = Q6;
                }
                break;
            }
            case Q7:{
                if(symbol == 0 || symbol == EMPTY){
                    state = QE;
                }else{
                    state = Q6;
                }
                break;
            }
            case QE: {
                running = false;
                break;
            }
        }
    }
};

void show(){
    for(int type_i = 0; type_i < TYPE_SIZE; ++type_i){
        if(type[type_i] != EMPTY) {
            printf(" %u ", type[type_i]);
        }else{
            printf("#");
        }
    }
}

int main() {
    machine();
    show();
    return 0;
}

