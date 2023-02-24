#include "il2cpp.h"

bool InfItems(long uses) {
    char cVar1;
    if (INF_ITEMS_ENABLED) {
        return 0;
    }
    else {
        if ((byte)(*(char *)(*(long *)(uses + 0x18) + 0x60) + 1) < 2) {
            return false;
        }
        cVar1 = *(char *)(uses + 0x20);
        if (cVar1 != '\0') {
            *(char *)(uses + 0x20) = cVar1 + -1;
            return cVar1 == '\x01';
        }
        return true;
    };
}