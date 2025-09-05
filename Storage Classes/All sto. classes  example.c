#include <stdio.h>

int globalVar = 50;  // extern by default

void demonstrate() {
    auto int autoVar = 10;        // Automatic variable
    static int staticVar = 20;    // Static variable
    register int regVar = 30;     // Register variable
    
    printf("Auto: %d, Static: %d, Register: %d, Global: %d\n", 
           autoVar, staticVar, regVar, globalVar);
    
    autoVar++;
    staticVar++;
    regVar++;
    globalVar++;
}

int main() {
    printf("First call:\n");
    demonstrate();
    
    printf("Second call:\n");
    demonstrate();
    
    return 0;
}
