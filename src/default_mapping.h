#include "stdint.h"

void default_set_multiple_registers(int address, int nb,
                                    void *tab_registers,
                                    const uint8_t *data);

void default_set_single_register(int address, void *tab_registers, int data);

void default_set_io_status(int address, void *coils, const uint16_t data);

void default_set_multiple_io_status(int address, int nb, void *coils, const uint8_t *data);

int default_response_io_status(int address, int nb,
                              uint8_t *tab_io_status,
                              uint8_t *rsp, int offset);

int default_response_registers(int address, int nb,
                               void *tab_registers,
                               uint8_t *rsp, int offset);

void * default_init_bits(int nb_bits);

void * default_init_registers(int nb_registers);

void default_free(void * addr);

