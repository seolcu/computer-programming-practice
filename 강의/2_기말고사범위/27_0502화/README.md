# Pointers

## Call-by-Reference

- 함수의 파라미터로 포인터 선언
- 함수의 input값으로 변수의 주소 제공

  예시:

  ```C
  #include <stdio.h>

  void *increase(int *i)
  {
      (*i)++;
  }

  int main()
  {
      int a = 0;
      increase(&a);
      printf("%d\n", a);
      // >>> 1

      return 0;
  }
  ```

# Storage Classes Revision

## C의 storage classes

### 1. Automatic(auto)

- 지역변수는 auto가 기본이다
- 그 block(함수)에 지역적이다
- block이 실행되면 변수에 메모리 공간이 할당됨
- block이 끝나면 변수에 할당된 메모리 공간이 풀려남

```C
auto int a;
```

### 2. External(extern)

- 여러 block과 함수 사이에 변수를 공유함
- 메모리가 영구적으로 할당됨
- 에러를 만들기 쉬움(error-prone)

```C
extern int a;
```

### 3. Register(register)

- 변수를 메모리가 아니라 register에 보관함
- 실행속도가 빠름

### 4. Static(static)

- 함수가 끝나도 지역변수가 값을 유지함
