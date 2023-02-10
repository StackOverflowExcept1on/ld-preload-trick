#include <cstdio>
#include <ctime>

#include <dlfcn.h>

__attribute__ ((constructor))
void initialize_library() {
    printf("[+] library is loaded\n");
}

typedef time_t (*time_fptr_t)(time_t *);

static time_fptr_t original_time = nullptr;

extern "C" time_t time(time_t *arg1) {
    printf("[!] hooked time(...) function\n");

    if (!original_time) {
        original_time = reinterpret_cast<time_fptr_t>(dlsym(RTLD_NEXT, "time"));
        printf("[!] original time(...) at %p\n", original_time);
    }

    auto ret = original_time(arg1);
    printf("    original time(...) = %ld\n", ret);

    printf("    patching result to 0\n");
    return 0;
}

__attribute__((destructor))
void destroy_library() {
    printf("[-] library has been unloaded\n");
}
