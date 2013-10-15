#include "stdint.h"

int default_set_register(int address, void *tab_registers,
                                int max_regs, int data);

int default_set_io_status(int address, void *coils, int max_io_status,
                          const uint16_t data);

int default_set_multiple_io_status(int address, int nb, void *coils,
                                   int max_coil, const uint8_t *data);

int default_get_io_status(int address, uint8_t *tab_io_status,
                          int max_io_status, uint8_t *bit);

int default_get_register(int address, void *tab_registers,
                         int max_regs, uint16_t *register_value);

void * default_init_bits(int nb_bits);

void * default_init_registers(int nb_registers);

void default_free(void * addr);

