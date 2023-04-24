# SDLC(System Development Life Cycle)

## Steps

- Feasibility studies(실현 가능성)
- 사용자의 필요 분석(FR(Functional Requirement) - 기능적 요구, NFR - 비기능적 요구(UI 등))
- 설계(객체지향형 프로그래밍(OOP), 알고리즘)
- Implementation(남이 만들어 놓은거: programming languages, off-the-shelf tools(데이터베이스, 네트워크 등등))
- 문서화하기(주석)
- 테스팅(check, validation, verification)
  - Unit tests(큰 프로그램을 모듈로 나눠서 따로 개발)
  - Integration tests(모듈의 통합)
- 유지보수
- Disposition(더 이상 유지보수되지 않음)

## 방법론

- Waterfall approach
  - 순차적으로 접근
  - 단점: 결과물이 사용자의 요구와 맞지 않는 경우가 있을 수 있음
- Agile approach
  - 유저와 활발한 소통
  - 사용자의 요구에 맞게 프로그램을 빠르게 수정함

## 버그

테스팅이 잘 되어도, 버그가 발생하는 경우가 있음.
상황에 따라 개발자의 잘못일수도, 사용자의 문제일 수도 있음.

# C 기초

## 개발의 과정

- 문제 정의
- 유사코드/순서도 활용
- 텍스트 에디터로 작성
- 컴파일
- 디버깅

## 기본적인 C 코드

```C
#include <stdio.h>

int main()
{
	printf("Hello world!\n");
	return 0;
}
```

### 구성요소

- Function, 함수: 입력값을 주면 무언가를 실행하는 코드
  - Prototype, 프로토타입(설계)
  - Definition, 정의(직접 쓰기)
- Preprocessor, 전처리자: 필요한 라이브러리를 불러옴
  - %%stdio는 Standard input & output을 의미함. printf는 stdio에서 온 것.%%
- Identifiers: 함수명, 변수명 등
  - \_ 로 시작 가능
  - 숫자로 시작 불가
  - \- 사용 불가
  - 이미 있는 이름 사용불가(int, char, struct 등등)
- Literals: 불변의 값(파이, e 등)
- Comments, 주석: 설명을 위해 쓰이며 컴파일러에 의해 무시됨
- Variables, 변수: 데이터를 메모리에 저장.
  - 선언방법: (타입) (변수명) = (값);
- Statements
