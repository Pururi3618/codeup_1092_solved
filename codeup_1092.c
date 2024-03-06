#include <stdio.h>
int main() {
    int a, b, c, day = 1;   //a, b, c : 각각의 접속 날짜 주기, day : 날짜
    scanf("%d %d %d", &a, &b, &c);
    while(day % a != 0 || day % b != 0 || day %c != 0) {    //셋중 하나라도 day를 나누어 떨어지지 않게 하면 반복(최소공배수)
        day++;  //날짜 추가
    }
    printf("%d", day);  //날짜 출력
    return 0;
}