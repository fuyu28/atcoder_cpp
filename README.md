# これなに
今までやったAtcoderのコンテストのファイルがおいてある

ファイルはaccで作成、中身はコードとサンプル

<br>

# 使用言語
C++ たまに python

<br>

# 事前設定
## accのログイン
```
acc login
``` 


## online-judge-toolsのログイン
```
oj login https://atcoder.jp
```

<br>

# ショートカット
## Ctrl+Shift+F
コンテストフォルダを作成
```
acc new ${input:1}
```

## Ctrl+Shift+O
コンテストサイトを開く
```
xdg-open https://atcoder.jp/contests/${input:1}
```

## Ctrl+Shift+M
C++をg++でコンパイル（Warningなし）
```
g++ -std=gnu++23 -O2 -mtune=native -march=native main.cpp
```

## Ctrl+Shift+W
C++をg++でコンパイル (Warningなどを目一杯使用，低速)
```
g++ -std=gnu++23 -Wall -Wextra -DLOCAL -Wno-expansion-to-defined -Wno-sign-compare -Wfloat-equal -Winit-self -Wshadow -Wlogical-op -Werror=uninitialized -Werror=maybe-uninitialized -Werror=parentheses -Werror=logical-not-parentheses -Werror=multichar -Wno-unknown-pragmas -g -fsanitize=undefined -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC' main.cpp
```

## Ctrl+Shift+B
C++で，エディタ設定のコンパイル

## Ctrl+Shift+T
全サンプルケースのテスト
```
oj t -N -e 1e-9 -c ./a.out -d test -N
```

## Ctrl+Shift+Y
特定サンプルケースのテスト
```
./a.out < test/sample-${input:1}.in
```

## Ctrl+Shit+E
プログラム実行(サンプルケース読み込みなし)
```
./a.out
```

## Ctrl+Shift+C
プログラムをクリップボードにCopy
```
xclip -selection c
```

## F5
Debuggerで実行

## Ctrl+Shift+:
Atcoderに提出（ただし低速）
```
acc s
```