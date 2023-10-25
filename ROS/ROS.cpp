#define _CRT_SECURE_NO_WARNINGS						// 3. 추가 (돌아가긴 한다)

#include <stdio.h>

int main()
{
	int a;
	
	printf("숫자 하나 입력하세요 : ");
	scanf("%d", &a);										// 2. (돌아가긴 한다)
//	scanf_s("%d", &a);										// 3. 숫자 
	printf("\n %d를 입력하셨습니다. \n", a);

#if 0
	char aa[100];

	printf("문자열을 입력하세요 : ");
//	scanf_s("%s", &aa);										// 4. 문자열 입력 (이상한 문자 출력)
	scanf_s("%s", &aa, 10);									// 6. 문자열 (10개 넘어가면 입력x)
//	scanf_s("%s", &aa, sizeof(aa));							// 5. 문자열 제대로 출력됨
	printf("\n %s를 입력하셨습니다. \n", aa);				
*/
	
//	printf("Hello World!\n");								// 1. 출력 확인
#endif

}

