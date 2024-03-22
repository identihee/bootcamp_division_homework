/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int i, n, s;
    scanf("%d", &n);
    s=0;
    i=1;

    while (n<1){
    if (n<=0){
        printf("X");
        scanf("%d", &n);
    }
    while (i<=n){
        s+=i;
        i++;
    }}
    printf("%d", s);

    return 0;
}