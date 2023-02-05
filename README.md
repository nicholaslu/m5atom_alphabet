# Alphabet support for M5Atom
Show alphabet on the 5x5 screen of M5Stack ATOM Matrix.

## Hardware
M5Stack ATOM Matrix

## Framework
Arduino

## Environnment
PlatformIO on VSCode

## Usage:
### 1. Include header file

```cpp
#include "M5Atom.h"
#include "alphabet.h"
```

### 2. Instantiation
```cpp
Alphabet screen;
```

### 3. Initialize in `setup` function
```cpp
screen.Init();
```
or
```cpp
M5.begin(true, false, true);
delay(200);
```

### 4. Display in `loop` function
- Display letters, numbers, symbols and graphs
```cpp
screen.Display('A');
delay(200);
screen.Display('a');
delay(200);
screen.Display(Up);
delay(200);
screen.Display(WifiConnected);
```
- Change colors
```cpp
screen.SetColor(0xff7fe4);
screen.Display('L');
```
or
```cpp
screen.SetColor(0xff, 0x7f, 0xe4);
screen.Display('L');
```
or
```cpp
screen.Display('L', 0xff7fe4);
```
> The color of graph can't be changed.

## Dependence
- M5Atom
- FastLED