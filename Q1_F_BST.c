#include <stdio.h>
#include <stdint.h>

void func1(){
	printf("for test");
}

void func2(){
	printf("for test2");
}

void func3(){
	printf("for test3");
}

int main() {
    void (*functions[3])() = {func1, func2, func3};
    
    void (**ptr2)() = functions;
    
    // 각 함수 호출
    for (int i = 0; i < 3; i++) {
        (*ptr2)(); 
        ptr2++;     
    }
int64_t* number = (int64_t*) (*ptr2);
printf("%p", *number);
}

