### ld-preload-trick

C++ library that is loaded before the binary and hooks the `time` function

### Requirements

- cmake
- g++ compiler

### Building

```bash
./build.sh
```

### Running

```bash
LD_PRELOAD=./build/bin/libhook.so ./build/bin/demo
```

```
[+] library is loaded

[!] hooked time(...) function
[!] original time(...) at 0x7fff261f2be0
    original time(...) = 1675958710
    patching result to 0
time(...) = 0 (in binary)

[-] library has been unloaded
```
