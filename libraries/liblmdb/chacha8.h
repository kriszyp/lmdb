#include <stdint.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

#define CHACHA8_KEY_SIZE 32
#define CHACHA8_IV_SIZE 8

void chacha8(const void* data, size_t length, const uint8_t* key, const uint8_t* iv, char* cipher);

#ifdef __cplusplus
}
#endif
