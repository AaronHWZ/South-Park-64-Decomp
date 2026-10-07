typedef struct {
    char pad_00[0xEC];       
    unsigned int target_limit; 
    char pad_F0[0x1774 - 0xF0];
    int some_index;
} GameSubsystem;