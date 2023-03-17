# 제어문

순서대로 진행되는 일반적인 실행 흐름을 바꿈

- 조건문: if/switch (conditional statement)

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

- 반복문: loop (repeatition statement)
  - 반복문을 디버깅할땐 trace table(반복마다 변수의 값을 표로 나타내기)를 사용하는게 좋음

```C
/* while loop */
while (조건) {
	실행;
}

/* for loop */
for (초기값설정; 조건; 갱신식) {
	실행;
}

/* do-while loop: 실행부터 하고 조건확인 */
do {
	실행;
} while (조건);

```

- compound-statement ("{}"안에 들어가는거)
  - nested: 중첩문
