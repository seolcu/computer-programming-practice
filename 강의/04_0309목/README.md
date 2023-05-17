# 개발환경 세팅

컴퓨터는 0과 1로 이루어진 바이너리만 전기 신호로 해석해낼 수 있다.
따라서 C언어로 쓰인 코드를 컴퓨터가 이해할 수 있도록 하기 위해선 C 코드를 바이너리로 변환(컴파일)해줘야 한다.

이러한 컴파일 작업을 하는 프로그램을 컴파일러라고 한다.
컴파일러는 오픈소스인 gcc가 대표적이다.
그러나 gcc는 Unix 계열 컴퓨터에만 설치 가능하므로, Windows에서는 gcc를 윈도우용으로 옮긴 mingw를 써야한다.

## Windows gcc(mingw) 설치방법

Windows 컴퓨터에 gcc를 설치하는 가장 쉬운 방법은 간편 프로그램 설치기인 chocolatey를 사용하는 것이다.

PowerShell을 관리자 권한으로 실행하고 다음 명령어를 입력하자.

### 1. Chocolatey 설치

```
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
```

### 2. gcc(mingw) 설치

```
choco install mingw
```

# 명령어

## 컴파일

gcc -o 바이너리이름 원본코드.c

## 실행

### Windows

.\바이너리이름.exe

### Unix-like

./바이너리이름
