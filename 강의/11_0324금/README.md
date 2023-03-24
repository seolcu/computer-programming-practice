# 자료구조

- 필요에 따라 여러 가지 자료형을 쓸 수 있다
- 자료형마다 데이터 크기가 다르다
- char는 아스키코드로 저장되기에 1byte이다
- unsigned int와 signed int는 데이터 크기는 같지만 unsigned int는 양수만 표현가능하고 두배 더 큰 수를 표현 가능하다
- 크기를 넘기면 Overflow 현상이 일어난다
- 기기나 OS마다 같은 자료형이더라도 데이터크기가 달라지기도 한다

# Operators

- 할당연산자(Assignment operator)

```C
할당받을_변수 = 할당할_값;

// 다중할당
int a = b = c;
```

- 계산연산자(Arithmetic operator)
  - 덧셈: +
  - 뺄셈: -
  - 곱셈: \*
  - 나눗셈: /
  - 나머지: %
  - 다른 계산들은 stdlib 라이브러리 등으로 가져올 수 있음
- 관계연산자 & 논리연산자(Relational and Logical Operators)
  - Relational: <, >, <=, >=
  - Equality: == , !=
  - Logical: !, &&, ||
- 비트연산
