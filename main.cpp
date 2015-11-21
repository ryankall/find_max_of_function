/* 
 * File:   main.cpp
 * Author: Ryan Kallicharran
 *
 * Created on April 23, 2015, 8:06 PM
 */

#include <cstdlib>
#include <iostream>
#include <math.h>
#define ESP .01
using namespace std;

//function
double F(int x){
    
    double function = -(x*x) -10;
    return function;
}

void findMaxofFunction(int a, int b, int count){
    double x,y, f;
    double highest;
    double z;
   
  
     
    z = (-1 + sqrt(5))/2;
    y = a+ z*(b-a);
    x = a+ z*(y-a);
    
    while(fabs(F(y)-F(x)) > ESP){
        if(F(x)< F(y)){
            a = x;
            std::cout<< x<<","<< y<<std::endl;
            
        }else{
            b = y;
        }
        
     y = a+ z*(b-a);
    x = a+ z*(y-a);
    
    }
    
    std::cout<< x<<","<< y<<std::endl;
}
/*
 * 
 */
int main(int argc, char** argv) {

    findMaxofFunction(0,3,0);
    return 0;
}

