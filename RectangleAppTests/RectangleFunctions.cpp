#include "pch.h"
#include "RectangleFunctions.h"

int getPerimeter(int* length, int* width) {
    return 2 * (*length + *width);
}

int getArea(int* length, int* width) {
    return (*length) * (*width);
}

void setLength(int input, int* length) {
    // Validate input (ensure it is within the range 1 to 99, inclusive)
    if (input >= 1 && input <= 99) {
        *length = input;
    }
    
}

void setWidth(int input, int* width) {
    
    if (input >= 1 && input <= 99) {
        *width = input;
    }
   
}
