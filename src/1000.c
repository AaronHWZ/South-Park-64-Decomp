extern unsigned int main_BSS_START[];
extern unsigned int main_BSS_END[];

void entrypoint(void) {
    unsigned int *bss = main_BSS_START;
    unsigned int *bss_end = main_BSS_END;

    while (bss < bss_end) {
        *bss++ = 0;
    }

    __asm__ volatile(
        ".word 0x2404001E\n" // addiu $a0, $zero, 0x1E
        ".word 0x40085000\n" // mfc0 $t0, $10
        ".word 0x40840000\n" // mtc0 $a0, $0
        ".word 0x3C098000\n" // lui  $t1, 0x8000
        ".word 0x40895000\n" // mtc0 $t1, $10
        ".word 0x40801000\n" // mtc0 $zero, $2
        ".word 0x40801800\n" // mtc0 $zero, $3
        ".word 0x00000000\n" // nop
        ".word 0x42000002\n" // tlbwi
    );