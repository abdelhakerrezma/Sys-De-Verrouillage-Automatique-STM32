#include <stdint.h>

#define MAX_QR_CODES 10

typedef struct
{
    uint16_t qrCode;

} QRCodeEntry;

QRCodeEntry qrCodeDatabase[MAX_QR_CODES] = {
    {0x1234},
};

int addQRCode(uint16_t newQRCode)
{
    for (int i = 0; i < MAX_QR_CODES; ++i)
    {
        if (qrCodeDatabase[i].qrCode == newQRCode)
        {
            return 0;
        }
    }

    return 1;
}

int removeQRCode(uint16_t targetQRCode)
{
    for (int i = 0; i < MAX_QR_CODES; ++i)
    {
        if (qrCodeDatabase[i].qrCode == targetQRCode)
        {
            qrCodeDatabase[i].qrCode = 0;

            return 1;
        }
    }

    return 0;
}
