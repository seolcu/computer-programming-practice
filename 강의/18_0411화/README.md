# Function

함수를 만드는 것은 프로그램을 여러 '모듈'들로 나누는 것임.

- 각 부분이 독립적으로 프로그램되고 테스트될 수 있음.
- 더 큰 프로그램 개발을 위해 필수.
- 같은 목적의 함수들이 모듈로 묶임.
- 나뉜 부분들이 상호작용함.

## 함수의 정의

- 함수는 return을 통해 반환값 데이터 그 자체로 취급될 수 있다.
- return 값이 필요없으면 반환값의 자료형을 void로 쓰면 된다.
- 입력값들은 여러 개일 수 있지만, 반환값은 하나여야만 한다.
- 모든 프로그램은 적어도 하나의 main() 함수가 있다.
- main() 함수가 다른 모든 함수를 호출한다.
- 각각의 함수들은 각자의 역할을 수행한다.
- 사용자 지정 함수 vs 기존 함수
  - Ex. main()은 기존 함수이다.

```C
반환값의_자료형 함수명( 입력값들 )
{
	실행;
	return 반환값;
}
```

### 예시: min_max.c

```C
#include <stdio.h>

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int j, k, minimum, maximum;

    printf("Enter two int: ");
    scanf("%d %d", &j, &k);

    minimum = min(j, k);
    maximum = max(j, k);

    printf("minimum: %d\n", minimum);
    printf("maximum: %d\n", maximum);

    return 0;
}
```

## 함수 프로토타입 선언

함수의 형태만 선언함.

```C
반환값의_자료형 함수명 ( 입력값들 );
```

### 예시

```C
int add(int a, int b);
```

## 함수 선언의 순서

main()이 부르는 함수는 꼭 부르기 전에 선언되어야 한다.

선언만 되면 되기에, main 전에 프로토타입으로만 선언하고 나중에 함수를 보충해도 된다.

### 예시

#### 1.

```C
#include <stdio.h>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	printf("%d\n", add(1, 2));
	return 0;
}
```

#### 2.

```C
#include <stdio.h>

int add(int a, int b);

int main()
{
	printf("%d\n", add(1, 2));
	return 0;
}

int add(int a, int b)
{
	return a + b;
}
```

## 프로그램 나누기

모듈명.h으로 모듈을 만들 수 있음.
