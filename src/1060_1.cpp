extern "C" {
    void write_tlb_entry(int a0, int a1, int a2, int a3);
    
    void func_80000464(int a0) {
        // Guarda estado de CP0 y configura registros de entrada para la TLB[cite: 5]
        if (a0 != 0) {
            a0 -= 1;
        } else {
            a0 = 0x1F;
        }
        int a1 = 0x1FE000;
        int a2 = 0x200000;
        int a3 = 0x0;
        int t1 = 0x100000;
        // Llamada interna y configuración de la pila[cite: 5]
        write_tlb_entry(a0, a1, a2, a3);
    }
}