#include <stdio.h>

// Definition der Struktur mit Bitfeldern
struct Status {
    unsigned int power : 1;      // 1 Bit für power Status
    unsigned int connected : 1;  // 1 Bit für connected Status
    unsigned int error : 1;      // 1 Bit für error Status
};

void main() {
    // Deklaration einer Status-Variable
    struct Status deviceStatus;

    // Setzen der Statusleuchten
    deviceStatus.power = 1;      // power an
    deviceStatus.connected = 0;  // connected aus
    deviceStatus.error = 1;      // error an

    // Ausgabe der Statusleuchten
    printf("Power Status: %u\n", deviceStatus.power);
    printf("Connected Status: %u\n", deviceStatus.connected);
    printf("Error Status: %u\n", deviceStatus.error);

}
