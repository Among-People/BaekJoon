# BaekJoon 1008

- __C++ 부동소수점__
    + cout.precision(n)
        * 출력 값이 전체에서 n 자리 까지 표기 (정수부, 소수부 구분이 없다. 예를 들어, 5를 넘겨준다고 소수 5 자리 까지 넘겨주는 것이 아니기 때문에 주의해야 한다.)  

    + cout << fixed;
        * 고정 소수점 표기. cout.precision(n) 선언 이후 이것을 선언하면 이후의 출력 값들은 소수점 n 자리까지 표기한다.  

    + cout.unsetf(ios::fixed);
        * 고정 소수점 표기 해제  


#### __Tip__
C 언어의 stdio.h의 scanf, printf, 0.nlf 를 사용해도 문제를 해결할 수 있으며, 이 경우가 더 성능이 좋다.