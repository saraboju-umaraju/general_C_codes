main(void) {
typedef unsigned long       uintptr_t;

const char* s = "hello!";
const char* ss = "hi!";
s = (const char*)((uintptr_t)s ^ (uintptr_t)ss),
ss = (const char*)((uintptr_t)ss ^ (uintptr_t)s),
s = (const char*)((uintptr_t)s ^ (uintptr_t)ss);
printf("%s\n",ss);
printf("%s\n",s);
}
