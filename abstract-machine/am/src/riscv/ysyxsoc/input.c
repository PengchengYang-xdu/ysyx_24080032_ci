#include <am.h>
#include <klib-macros.h>
#include <klib.h>
#include "ysyxsoc.h"
#include "../riscv.h"

static int key_arr[512] = {};
void __am_keybrd_init() {
    key_arr[0x76] = AM_KEY_ESCAPE;
    key_arr[0x05] = AM_KEY_F1;
    key_arr[0x06] = AM_KEY_F2;
    key_arr[0x04] = AM_KEY_F3;
    key_arr[0x0C] = AM_KEY_F4;
    key_arr[0x03] = AM_KEY_F5;
    key_arr[0x0B] = AM_KEY_F6;
    key_arr[0x83] = AM_KEY_F7;
    key_arr[0x0A] = AM_KEY_F8;
    key_arr[0x01] = AM_KEY_F9;
    key_arr[0x09] = AM_KEY_F10;
    key_arr[0x78] = AM_KEY_F11;
    key_arr[0x07] = AM_KEY_F12;
    key_arr[0x0E] = AM_KEY_GRAVE;
    key_arr[0x16] = AM_KEY_1;
    key_arr[0x1E] = AM_KEY_2;
    key_arr[0x26] = AM_KEY_3;
    key_arr[0x25] = AM_KEY_4;
    key_arr[0x2E] = AM_KEY_5;
    key_arr[0x36] = AM_KEY_6;
    key_arr[0x3D] = AM_KEY_7;
    key_arr[0x3E] = AM_KEY_8;
    key_arr[0x46] = AM_KEY_9;
    key_arr[0x45] = AM_KEY_0;
    key_arr[0x4E] = AM_KEY_MINUS;
    key_arr[0x55] = AM_KEY_EQUALS;
    key_arr[0x66] = AM_KEY_BACKSPACE;
    key_arr[0x0D] = AM_KEY_TAB;
    key_arr[0x15] = AM_KEY_Q;
    key_arr[0x1D] = AM_KEY_W;
    key_arr[0x24] = AM_KEY_E;
    key_arr[0x2D] = AM_KEY_R;
    key_arr[0x2C] = AM_KEY_T;
    key_arr[0x35] = AM_KEY_Y;
    key_arr[0x3C] = AM_KEY_U;
    key_arr[0x43] = AM_KEY_I;
    key_arr[0x44] = AM_KEY_O;
    key_arr[0x4D] = AM_KEY_P;
    key_arr[0x54] = AM_KEY_LEFTBRACKET;
    key_arr[0x5B] = AM_KEY_RIGHTBRACKET;
    key_arr[0x5D] = AM_KEY_BACKSLASH;
    key_arr[0x58] = AM_KEY_CAPSLOCK;
    key_arr[0x1C] = AM_KEY_A;
    key_arr[0x1B] = AM_KEY_S;
    key_arr[0x23] = AM_KEY_D;
    key_arr[0x2B] = AM_KEY_F;
    key_arr[0x34] = AM_KEY_G;
    key_arr[0x33] = AM_KEY_H;
    key_arr[0x3B] = AM_KEY_J;
    key_arr[0x42] = AM_KEY_K;
    key_arr[0x4B] = AM_KEY_L;
    key_arr[0x4C] = AM_KEY_SEMICOLON;
    key_arr[0x52] = AM_KEY_APOSTROPHE;
    key_arr[0x5A] = AM_KEY_RETURN;
    key_arr[0x12] = AM_KEY_LSHIFT;
    key_arr[0x1A] = AM_KEY_Z;
    key_arr[0x22] = AM_KEY_X;
    key_arr[0x21] = AM_KEY_C;
    key_arr[0x2A] = AM_KEY_V;
    key_arr[0x32] = AM_KEY_B;
    key_arr[0x31] = AM_KEY_N;
    key_arr[0x3A] = AM_KEY_M;
    key_arr[0x41] = AM_KEY_COMMA;
    key_arr[0x49] = AM_KEY_PERIOD;
    key_arr[0x4A] = AM_KEY_SLASH;
    key_arr[0x59] = AM_KEY_RSHIFT;
    key_arr[0x14] = AM_KEY_LCTRL;
    key_arr[0x11] = AM_KEY_APPLICATION;
    key_arr[0x11] = AM_KEY_LALT;
    key_arr[0x29] = AM_KEY_SPACE;
    key_arr[0x111] = AM_KEY_RALT;
    key_arr[0x114] = AM_KEY_RCTRL;
    key_arr[0x175] = AM_KEY_UP;
    key_arr[0x172] = AM_KEY_DOWN;
    key_arr[0x16B] = AM_KEY_LEFT;
    key_arr[0x174] = AM_KEY_RIGHT;
    key_arr[0x170] = AM_KEY_INSERT;
    key_arr[0x171] = AM_KEY_DELETE;
    key_arr[0x16C] = AM_KEY_HOME;
    key_arr[0x169] = AM_KEY_END;
    key_arr[0x17D] = AM_KEY_PAGEUP;
    key_arr[0x17A] = AM_KEY_PAGEDOWN;
};

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) {
    uint8_t code = inb(PS2_BASE);
    printf("code = 0x%x\n", code);
    if(code == 0){
        kbd->keydown = 0;
        kbd->keycode = AM_KEY_NONE;
    }
    else{
        kbd->keydown = 1;
        kbd->keycode = key_arr[code];
    }
    // kbd->keydown = 0;
    // kbd->keycode = AM_KEY_NONE;
}

