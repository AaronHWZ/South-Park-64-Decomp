extern "C" {
    float func_80205FEC(void);
    int func_8025F3E8(int arg0);
    void func_8023731C(int arg0, int arg1, int arg2);
    void func_80268D1C(int arg0);
    void func_8021587C(void* arg0, int arg1, float arg2);
    void func_8020074C(int arg0, int arg1);
    void func_80267680(int arg0, int arg1, int arg2, int arg3);
    void func_80264F8C(int arg0, int arg1, int arg2);

    void process_floating_metrics(void* obj_ptr, int arg1) {
        float val = (float)func_80205FEC();
        float divisor = *((float*)((char*)obj_ptr + 0x188C));
        val = val / divisor;
        *((float*)((char*)obj_ptr + 0x1898)) = val;
        
        // Ejecución condicional y llamadas a subsistemas gráficos/lógicos[cite: 7]
        func_80268D1C(0xFF);
        // Conversiones de tipo flotante a entero con truncamiento[cite: 7]
        // ...
    }
}