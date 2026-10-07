build/southpark.elf: \
    build/asm/header.o \
    build/assets/ipl3.o \
    build/asm/1000.o \
    build/asm/1064.o \
    build/assets/A7EE0.o
build/asm/header.o:
build/assets/ipl3.o:
build/asm/1000.o:
build/asm/1064.o:
build/assets/A7EE0.o:
-include build/asm/header.d build/assets/ipl3.d build/asm/1000.d build/asm/1064.d build/assets/A7EE0.d
