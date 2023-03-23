# 기초

## 구성요소(앞시간에 이어)

- Statements: 특정한 일을 하는 명령어
  - 변수 선언
  - 변수에 값 할당
  - 반복문
  - Input/Output
    - printf
      - c: 문자(한개)
      - d: 정수
      - e: 소수를 과학적으로 나타내기
      - f: 소수
      - g: e와 f의 짧은 버전
      - s: 문자열
    - scanf
      - c: 문자(한개)
      - d: 정수
      - f: 소수
      - lf: double
      - Lf: long double
      - s: 문자열

# 제어문

- if/switch

```C
/* 단일조건문 */
if(조건){
	실행;
}

/* 조건문 & else */
if(조건){
	실행;
} else {
	실행;
}

/* else if */
if(조건){
	실행;
} else if(조건){
	실행;
} else {
	실행;
}

/* switch */
switch(조건){
	case 조건1:
		실행;
		break;
	case 조건2:
		실행;
		break;
	default:
		실행;
}
```

- loop
- compound-statement
