#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h> // for ntohl()

// 사용자 정의 함수 선언
uint32_t readNumberFromFile(const char* filepath);

int main(int argc, char* argv[]) {
    // 파일로부터 숫자 읽어오기
    uint32_t number1 = readNumberFromFile(argv[1]);
    uint32_t number2 = readNumberFromFile(argv[2]);

    // 두 숫자의 합을 계산하여 출력
    uint32_t sum = number1 + number2;
    printf("두 숫자의 합: %u\n", sum);

    return 0;
}

// 사용자 정의 함수 구현
uint32_t readNumberFromFile(const char* filepath) {
    FILE *file = fopen(filepath, "rb");

    if (!file) {
        printf("파일을 열 수 없습니다.\n");
        return 0;
    }
