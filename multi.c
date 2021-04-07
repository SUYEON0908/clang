#include <stuio.h>//라이브러리 임포트
int multi(int x, int y);//함수 명세 = 스프링의 인터페이스와 같은 역할

void main(int x, int y) {
	printf("곱하기할 첫번째 수를 입력하세요 : ");
	scan("&d", &a);//%& 형태중 ㅇㄷ챠ㅡㅁ
	printf("곱하기할 두번째 수를 입력해주세요 : ")
	scan("&d", &b):
	c = multi(a,b);
	printf("실행결과 : $ㅇ &d * &d = %d", a,b,c);
	// \n은 new ine줄바꿈명령
}

void multi(int x, int y) {
	return(x*y);
}