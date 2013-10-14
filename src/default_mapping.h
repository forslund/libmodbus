#include "stdint.h"

int default_set_multiple_registers(int address, int nb,
                                   void *tab_registers, int max_regs,
                                   const uint8_t *data);

int default_set_single_register(int address, void *tab_registers,
                                int max_regs, int data);

int default_set_io_status(int address, void *coils, int max_io_status,
                          const uint16_t data);

int default_set_multiple_io_status(int address, int nb, void *coils,
                                   int max_coil, const uint8_t *data);

int default_response_io_status(int address, int nb,
                              uint8_t *tab_io_status, int max_io_status,
                              uint8_t *rsp, int offset);

int default_response_registers(int address, int nb,
                               void *tab_registers,
                               int max_regs,
                               uint8_t *rsp, int offset);

void * default_init_bits(int nb_bits);

void * default_init_registers(int nb_registers);

void default_free(void * addr);

