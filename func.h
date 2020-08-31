#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string.h>
#include <cmath>

using namespace std;

/* • Arithmetic/Logic instructions: AND, OR, ADD, SUB, SLT
   • Data Flow instructions: LW, SW
   • Branch instructions: BEQ, BNE, J */

//define function opcodes
#define AND 0b100100
#define OR 0b100101
#define ADD 0b100000
#define SUB 0b100010
#define SLT 0b101010
#define LW 0b100011
#define SW 0b101011
#define BEQ 0b000100
#define BNE 0b000101
#define J 0b000010

// Arithmetic
void and(int dest, int reg1, int reg2) {
     dest = reg1 & reg2;
     }
     
void or (int dest, int reg1, int reg2) {
     dest = reg1 | reg2;
     }

int add (int dest, int reg1, int reg2) {
    dest = reg1 + reg2;
    return dest;
    }

int sub (int dest, int reg1, int reg2) {
    dest = reg1 - reg2;
    return dest;
    }

void slt (int dest, int reg1, int reg2) {
     if (reg1 < reg2) dest = 1;
     else dest = 0;
     }

// Data Flow
void loadWord(int dest, int addr, struct data_mem*dm) {
     data_mem*dm[dest] = addr + data_mem*dm[dest];
     }
     
void storeWord(int dest, int addr, struct data_mem*dm);

// Branch
void branchOnEqual(int rs, int rt, int L1) {
     if (rs == rt){
          goto L1;
     }
     else {
          break;
          }
     }
     
void branchOnNotEqual(int rs, int rt, int L1) {
     if (rs != rt){
          goto L1;
     }
     else {
          break;
          }
     }
     
void jump(int L1) {
     goto L1;
     }
