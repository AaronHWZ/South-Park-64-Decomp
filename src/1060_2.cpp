extern "C" int get_node_reference(int arg0, int arg1);

extern "C" int process_range_check(void* base_ptr, unsigned int target_val) {
    unsigned int limit = *((unsigned int*)((char*)base_ptr + 0xEC));
    if (target_val < limit) {
        return -1;
    }
    
    // Cálculo de desplazamiento complejo basado en constantes y multiplicación[cite: 6]
    // Realiza múltiples llamadas a get_node_reference para obtener referencias de nodos/estructuras[cite: 6]
    int s0 = get_node_reference(*((int*)((char*)base_ptr + 0x74)), 0);
    s0 = get_node_reference(s0, *((int*)((char*)base_ptr + 0x1774)));
    s0 = get_node_reference(s0, 1);
    
    // Verificaciones de bits y retorno final[cite: 6]
    return s0;
}