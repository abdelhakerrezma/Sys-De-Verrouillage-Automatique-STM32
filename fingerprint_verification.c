#include <string.h>
#include <fingerprint_library.h>

#define FINGERPRINT_SIZE 16

int verifyFingerprint(uint8_t *fingerprint)
{
    fingerprint_init();

    uint8_t capturedFingerprint[FINGERPRINT_SIZE];

    fingerprint_capture(capturedFingerprint);

    if (memcmp(capturedFingerprint, fingerprint, FINGERPRINT_SIZE) == 0)
    {
        return 1;
    }

    return 0;
}
