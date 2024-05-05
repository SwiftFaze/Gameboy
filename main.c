#include <gb/gb.h>
#include "sprites/SmilerSprites.c"
#include <stdio.h>
int main(void) {
    uint8_t currentspriteindex = 0;

    set_sprite_data(0, 2, Smiler);
    set_sprite_tile(0, 0);
    move_sprite(0, 88, 78);
    SHOW_SPRITES;
    printf("hello");
    while (1) {
        if (currentspriteindex == 0) {
            currentspriteindex = 1;
        } else {
            currentspriteindex = 0;
        }
        set_sprite_tile(0, currentspriteindex);
        delay(1000);
        scroll_sprite(0, 10, 0);
    }
}
