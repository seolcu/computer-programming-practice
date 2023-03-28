# Operators

- 할당연산자(Assignment operator)

```C
할당받을_변수 = 할당할_값;

// 다중할당
int a = b = c;
```

- 계산연산자(Arithmetic operator)
  - 덧셈: \+
  - 뺄셈: \-
  - 곱셈: \*
  - 나눗셈: \/
  - 나머지: \%
  - 다른 계산들은 stdlib 라이브러리 등으로 가져올 수 있음
- 관계연산자 & 논리연산자(Relational and Logical Operators)
  - Relational: \<, \>, \<\=, \>\=
  - Equality: \=\=, \!\=
  - Logical: \!, \&\&, \|\|
- 비트연산
  - \&: AND
  - \|: OR
  - \^: XOR
  - \~: flipping(0 -> 1, 1 -> 0)
  - \<\<: shift left(2를 곱하기)
  - \>\>: shift right(2로 나누기)
- 연산의 순서(대략적으로)
  1.  괄호
  2.  \+\+, \-\-
  3.  \*, \/, \%
  4.  \+, \-
  5.  \<, \>, \=\=, \!\= 등
