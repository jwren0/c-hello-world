int main(void) {
    char msg[] = "Hello, world!\n";

    __asm__(
        "mov $1,     %%rax\n\t"
        "mov $1,     %%rdi\n\t"
        "lea %[msg], %%rsi\n\t"
        "mov $14,    %%rdx\n\t"
        "syscall"
        :
        : [msg] "m" (msg)
        : "rax", "rdi", "rsi", "rdx"
    );
}
