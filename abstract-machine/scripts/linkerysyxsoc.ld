ENTRY(_start)

PHDRS {
    text PT_LOAD;
    data PT_LOAD;
}

MEMORY {
    mrom : ORIGIN = 0x20000000, LENGTH = 256M
    sram : ORIGIN = 0x0f000000, LENGTH = 16M
}

SECTIONS {
  . = ORIGIN(mrom);
  .text : 
  {
    *(entry)
    *(.text*)
  } > mrom AT > mrom : text
  etext = .;
  _etext = .;


  .rodata : 
  {
    *(.rodata*)
    *(.srodata*)
  } > mrom AT > mrom


  .data : 
  {
    _data_load_start = LOADADDR(.data); /* LMA */
    _data_start = .;                    /* VMA */
    *(.data*)
    *(.sdata*)
    _data_end = .;
  } > sram AT > mrom : data
  edata = .;
  _data = .;

  .bss : 
  ALIGN_WITH_INPUT
  SUBALIGN(4)
  {
	_bss_start = .;
    *(.bss*)
    *(.sbss*)
    *(.scommon)
    _bss_end = .;
  } > sram AT > mrom


  _stack_top = ALIGN(0x1000);
  . = _stack_top + 0x8000;
  _stack_pointer = .;
  end = .;
  _end = .;
  _heap_start = ALIGN(0x1000);
}