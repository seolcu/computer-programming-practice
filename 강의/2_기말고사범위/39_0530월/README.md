# File management

## Opening a File

- 파일명은 문자열임
- 3가지 모드
  - r(read): 읽기
  - w(write): 수정
  - a(append): 추가

```C
FILE *fptr = fopen("filename", "mode")
```

### Reading and Writing a File

- Revision

```C
char c = getc(fptr);
putc(c, fptr);
int data = getw(fptr);
putw(data, fptr);
```
