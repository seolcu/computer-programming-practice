# Function

함수는 return값이 하나여야 한다.
따라서 여러 값을 받고 싶으면 포인터를 이용해야 한다.

정확한 정보 아님:

- 변수 앞에 \*를 붙여서 포인터를 만들 수 있다.
- 변수 앞에 &를 붙여서 변수의 주소를 뽑아낼 수 있다.

따라서 리턴값이 많이 필요하면,
그 함수에 미리 선언한 변수의 포인터를 파라미터로 제공하고 그 값을 함수 내에서 직접 수정해야 한다.

# Exercise (1)

- Write a function to compute both the sum and average of three inputs and returns the sum and average result
  - Write the prototype
  - Write the function
  - Call the function
