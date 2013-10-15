#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include "modbus.h"

#include "default_mapping.h"

int default_set_register(int address, void *tab_registers, int max_regs,
                         int data)
{
   uint16_t * regs = (uint16_t *)tab_registers;
   if (address >= max_regs)
      return -1;
   regs[address] = data;
   return 0;
}


int default_set_io_status(int address, void *coils, int max_coil,
                           const uint16_t data)
{
   if (address >= max_coil)
      return -1;
   ((uint8_t *)coils)[address] = (data) ? ON : OFF;
   return 0;
}

int default_get_register(int address, void *tab_registers,
                          int max_regs, uint16_t *reg_value)
{
   uint16_t *regs = (uint16_t *)tab_registers;
   if (address >= max_regs) {
      printf("address out of range!\n");
      return -1;
   }
   *reg_value = regs[address];
   printf("register[%d] = %d\n", address, *reg_value);
   return 0; 
}


int default_get_io_status(int address, uint8_t *tab_io_status,
                          int max_io_status, uint8_t *bit)
{
   if (address >= max_io_status)
       return -1;
   printf("bit[%d] = %d\n", address, tab_io_status[address]);
    *bit = tab_io_status[address];
    return 0;
}

/*
   Default Init functions
*/
void * default_init_bits(int nb_bits)
{
   /* Negative number raises a POSIX error */
   return (uint8_t *) malloc(nb_bits * sizeof(uint8_t));
}


void * default_init_registers(int nb_registers)
{
   return (uint16_t *) malloc(nb_registers * sizeof(uint16_t));
}

/*
   Default free.
*/
void default_free(void * addr)
{
   free(addr);
}


