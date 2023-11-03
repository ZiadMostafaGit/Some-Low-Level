#define setbit(byte, nbit) ((byte) |= (1 << (nbit)))
#define clearbit(byte, nbit) ((byte) &= (1 << (nbit)))
#define tagglebit(byte, nbit) ((byte) ^= (1 << (nbit)))
#define cheackbit(byte, nbit) ((byte) & (1 << (nbit)))