# Maximum Value after Insertion
- [leetCode](https://leetcode.com/problems/maximum-value-after-insertion/)

## 1차도전
```
    std::string maxValue(std::string n, int x) {
        
        if(n[0] == '-'){
            for(int i = 0; i < n.length(); i++){
                if(n[i] - '0' > x ){
                    n.insert(i, 1, x+'0');
                    return n;
                }
            }
        }
        else{
            for(int i = 0; i < n.length(); i++){
                if(n[i]- '0' < x + '0'){
                    n.insert(i, 1, x);
                    return n;
                }
            }
        }
        
        n.insert(n.length(), 1, x+'0');
        
        return n;
    }
```
- 코드 중복도 있고, 일단 해봄
- 속도 74% 보다 빠름 / 메모리 97% 보다 적게 사용

## 2차도전 - 답안 참고
- `n[i] > x + '0'` / `n[i] - '0' > x` 다들 뒤쪽 비교식을 썼길래 나도 써봄
- 속도 85% 보다 빠름 / 메모리 91% 보다 적게 사용
- 연산방식에서 속도와 메모리 차이가 난다는 것을 느낌
- 저기서 코드 더 깔끔하게 for 1개로 합칠 수 있으나 그냥 여기까지