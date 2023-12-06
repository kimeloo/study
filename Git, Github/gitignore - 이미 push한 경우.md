#gitignore #github
### 설명
- 이미 원격저장소에 push한 파일에 .gitignore을 적용하여 github에서 지우고 싶을 때 사용한다.
### 관련 개념
- [[gitignore]]
### 발생 원인
- git으로 추적하지 않을 파일을 .gitignore에 추가했으나, 이미 원격저장소에 push하였다.
### 해결 방법
- 다음 명령어를 순서대로 입력한다.
``` shell
git rm -r --cached .
git add .
git commit -m ".gitignore 반영"
git push
```
#### 단계별 설명
``` shell
git rm -r --cached
```
현재 git이 추적하고 있는 모든 파일들을 [[staging area]]에서 삭제한다.
이 때, -r (recursive) 옵션을 사용하지 않으면 직접 파일 혹은 폴더 이름을 넣어 하나하나 실행해줘야 해서 번거롭다.

``` shell
git add .
git commit -m "커밋메시지"
git push
```
이후 과정은 평소 커밋 후 push하는 과정과 같다.
### 참고자료
- https://git-scm.com/docs/git-rm