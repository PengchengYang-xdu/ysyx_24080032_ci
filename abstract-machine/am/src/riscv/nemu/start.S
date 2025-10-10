.section entry, "ax"
.globl _start
.type _start, @function

_start:
  mv s0, zero
  la sp, _stack_pointer
  auipc ra, %hi(_trm_init)
  jalr  ra, %lo(_trm_init)(ra)
