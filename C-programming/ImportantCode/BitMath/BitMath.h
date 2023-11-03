#define SetBit(Byte, Nbit) ((Byte) |= (1 << (Nbit)))
#define ClearBit(Byte, Nbit) ((Byte) &= (1 << (Nbit)))
#define TaggleBit(Byte, Nbit) ((Byte) ^= (1 << (Nbit)))
#define CheackBit(Byte, Nbit) ((Byte) & (1 << (Nbit)))