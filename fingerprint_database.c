#include <string.h>

#define MAX_USERS 10
#define FINGERPRINT_SIZE 16

typedef struct
{
    uint8_t fingerprint[FINGERPRINT_SIZE];

} User;

User database[MAX_USERS];

int numUsers = 0;

int addUser(uint8_t *fingerprint)
{
    if (numUsers >= MAX_USERS)
    {
        return -1;
    }

    memcpy(database[numUsers].fingerprint, fingerprint, FINGERPRINT_SIZE);

    numUsers++;

    return 1;
}

int removeUser(uint8_t *fingerprint)
{
    for (int i = 0; i < numUsers; i++)
    {
        if (memcmp(database[i].fingerprint, fingerprint, FINGERPRINT_SIZE) == 0)
        {
            memmove(&database[i], &database[i + 1],
                    (numUsers - i - 1) * sizeof(User));

            numUsers--;

            return 1;
        }
    }

    return 0;
}
