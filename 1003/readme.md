# BaekJoon 1003

- __Pointer & Reference (포인터와 참조자)__
    + type& 와 &variable 의 차이
        * type&		- 참조자 선언 (별명 선언)  
        * &variable	- 주소를 반환 (여기서 &는 하나의 연산자 역할)  

    + type* 와 *variable 의 차이
        * type*		- 포인터 선언 (주소'만' 받을 변수 선언)  
        * *variable	- 역참조 연산자 (그 주소에 할당된 값을 의미)  

- __Dynamic Programming (동적 계획법)__
    * 복잡한 문제를 간단한 여러 개의 문제로 나누어 푸는 방법
    * 문제를 여러 개의 하위 문제(subproblem)로 나누어 푼 다음, 그것을 결합하여 최종적인 목적에 도달
    * 각 하위 문제의 해결을 계산한 뒤, 그 **해결책을 저장**하여 후에 같은 하위 문제가 나왔을 경우 그것을 간단하게 해결 (__Memoization__)



#### __Tip__
규칙 찾기 (0과 1에 대해서도 fibonacci가 성립)