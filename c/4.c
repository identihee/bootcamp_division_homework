/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int x;
    scanf("%d",&x);

    if (x>=90){
        printf("A");
    }
    else if (x>=80){
        printf("B");
    }
    else if (x>=70){
        printf("C");
    }
    else if (x>=60){
        printf("D");
    }
    else if (x<60){
        printf("F");
    }
    return 0;
}