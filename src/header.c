typedef struct {
    unsigned long pi_bsb_domain1;       /* PI BSB Domain 1 register */
    unsigned long clockrate;          /* Clockrate setting */
    unsigned long entrypoint;         /* Entrypoint address */
    unsigned long revision;           /* Revision */
    unsigned long checksum1;          /* Checksum 1 */
    unsigned long checksum2;          /* Checksum 2 */
    unsigned long unknown1;           /* Unknown 1 */
    unsigned long unknown2;           /* Unknown 2 */
    char          internal_name[20];  /* Internal name */
    unsigned long unknown3;           /* Unknown 3 */
    unsigned long cartridge;          /* Cartridge */
    char          cartridge_id[2];    /* Cartridge ID */
    char          country_code;       /* Country code */
    unsigned char version;            /* Version */
} N64Header;

/* Inicialización posicional (sin los puntos, en orden exacto) */
N64Header rom_header = {
    0x80371240,
    0x0000000F,
    0x80000400,
    0x00001444,
    0x7ECBE939,
    0x3C331795,
    0x00000000,
    0x00000000,
    "South Park",
    0x00000000,
    0x0000004E,
    {'D', 'T'},
    'E',
    0x00
};