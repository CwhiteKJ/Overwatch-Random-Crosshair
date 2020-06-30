#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <Windows.h>

using namespace std;

int Random_Number(int min, int max)
{
    int temp = rand() % (max - min + 1) + min;
    return temp;
}

int GetNumber()
{
    system("cls");
    srand((size_t)time(NULL));
    char answer[100];
    char colors[13][29] = {
        "하얀색",
        "초록색",
        "하늘색",
        "빨간색",
        "연한 보라색(노란색 위)",
        "노란색",
        "검은색",
        "황토색",
        "분홍색",
        "파란색",
        "진한 보라색",
        "연한 노란색(아래에서 두번째)",
        "초록색(맨 아래)"
    };
    std::cout << "\n색상 : " << colors[Random_Number(0, 12)] << endl;
    std::cout << "굵기 : " << Random_Number(1, 15) << endl;
    std::cout << "십자선 길이 : " << Random_Number(0, 100) << endl;
    std::cout << "중앙 공간 : " << Random_Number(0, 100) << endl;
    std::cout << "불투명도 : " << Random_Number(0, 100) << endl;
    std::cout << "윤곽선 불투명도 : " << Random_Number(0, 100) << endl;
    std::cout << "점 크기 : " << Random_Number(2, 10) << endl;
    std::cout << "점 불투명도 : " << Random_Number(0, 100) << endl;
    std::cout << "\n\n다시 뽑으시겠습니까? [네/아니요]: ";
    std::cin >> answer;
    if (strcmp(answer, "네") == 0) {
        GetNumber();
    }
    else if (strcmp(answer, "아니요") == 0) {
        return 0;
    }
    else {
        std::cout << "네, 아니요 중 하나만 고르라니깐.." << endl;
    }
    return 0;
}

int main()
{
    int Selected_Number;

    std::cout << "RANDOM CROSSHAIR < 랜덤 조준선 >\n\n";
    std::cout << "아래 번호를 입력하여 항목을 선택해주세요.\n";
    std::cout << "1. 랜덤 조준선 뽑기\n";
    std::cout << "2. 제작자 깃허브 방문하기\n\n";
    std::cout << "숫자를 입력하세요. : ";
    std::cin >> Selected_Number;

    if (Selected_Number == 1)
    {
        GetNumber();
    }
    else if (Selected_Number == 2)
    {
        system("cls");
        std::cout << "제작자의 깃허브로 이동합니다.";
        ShellExecute(0, 0, L"https://github.com/CwhiteKJ?tab=repositories", 0, 0, SW_SHOW);
    }
    else
    {
        std::cout << "1번과 2번 둘 중 하나만 선택해주세요.";
    }
}
