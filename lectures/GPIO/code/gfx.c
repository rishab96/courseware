/* Functions for a simple graphics library for the bare metal
 * Raspberry Pi. You'll fill this in as part of assignment 5.
 *
 * Author: Philip Levis <pal@cs.stanford.edu>
 * Date: August 14 2014
 */ 

#include "gfx.h"
#include "fb.h"
#include "system.h"
#include "font.h"

void gfx_init() {
}

unsigned int gfx_compute_color(unsigned char red,
                               unsigned char green,
                               unsigned char blue) {
}

unsigned int gfx_get_width() {
}

unsigned int gfx_get_height() {
}

void gfx_plot(unsigned int color,
              unsigned int x,
              unsigned int y) {
}

unsigned int gfx_letter_height() {
}

unsigned int gfx_letter_width() {
}

unsigned int gfx_draw_letter(unsigned int color,
                             unsigned int x,
                             unsigned int y,
                             char letter) {
}
  
unsigned int gfx_draw_string(unsigned int color,
                             unsigned int x,
                             unsigned int y,
                             char* str) {
}

/*
 * Copyright (c) 2014 Stanford University.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in the
 *   documentation and/or other materials provided with the
 *   distribution.
 * - Neither the name of the Stanford University nor the names of
 *   its contributors may be used to endorse or promote products derived
 *   from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL STANFORD
 * UNIVERSITY OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 */
