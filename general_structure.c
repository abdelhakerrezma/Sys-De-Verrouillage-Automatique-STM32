#include "stm32f4xx_hal.h"

// Vérification de l'empreinte digitale
int verifyFingerprint(uint8_t *fingerprint)
{
    // Vérification fictive
    return 1;
}

// Vérification du QR code
int verifyQRCode(uint16_t qrCode)
{
    // Vérification fictive
    return 1;
}

// Contrôle du moteur
void controlMotor()
{
    // Ouverture de la porte
}

int main(void)
{
    while (1)
    {
        uint8_t fingerprint[16];
        uint16_t qrCode;

        if (verifyFingerprint(fingerprint) && verifyQRCode(qrCode))
        {
            controlMotor();
        }

        HAL_Delay(1000);
    }
}
