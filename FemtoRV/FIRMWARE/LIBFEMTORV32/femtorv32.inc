#################################################################################

# Mapped IO constants

.equ IO_BASE,      0x400000  # Base address of memory-mapped IO
.equ IO_LEDS,      4         # 4 LSBs mapped to D1,D2,D3,D4
.equ IO_OLED_CNTL, 8         # OLED display control.
                             #  wr: 01: reset low 11: reset high 00: normal operation
                             #  rd:  0: ready  1: busy
.equ IO_OLED_CMD,  16        # OLED display command. Only 8 LSBs used.
.equ IO_OLED_DATA, 32        # OLED display data. Only 8 LSBs used.
.equ IO_UART_CNTL, 64        # USB UART control. busy (bit 9), data ready (bit 8)
.equ IO_UART_DATA, 128       # USB UART data (read/write)
.equ IO_LEDMTX_CNTL, 256     # LED matrix control. read: LSB bit 1 if busy
.equ IO_LEDMTX_DATA, 512     # LED matrix data (write)	
	
################################################################################
