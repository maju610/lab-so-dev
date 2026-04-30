#include <unistd.h>
int main() {
const char msg[] = "Modo usuario -> kernel via write()\n";
write(1, msg, sizeof(msg) - 1);
return 0;
}
