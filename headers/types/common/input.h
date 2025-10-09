#ifndef HEADERS_TYPES_COMMON_INPUT_H_
#define HEADERS_TYPES_COMMON_INPUT_H_

// This is the layout of all button bitflags in the input/controller structs. This is present only
// for analysis purposes, as internally the code does not seem to actually store these as a struct.
struct buttons {
    bool a : 1;
    bool b : 1;
    bool select : 1;
    bool start : 1;
    bool right : 1;
    bool left : 1;
    bool up : 1;
    bool down : 1;
    bool r : 1;
    bool l : 1;
    bool x : 1;
    bool y : 1;
    bool unk12 : 1;
    bool debug : 1;
    bool unk14 : 1;
    bool unk15 : 1;
};
ASSERT_SIZE(struct buttons, 0x2);

struct input {
    uint32_t status; // 0x0: If null, functions related to getting held buttons return false.
                     // Otherwise, they will return true.
    uint32_t timer;  // 0x4: Some kind of timer. What causes it sto start and reset is unclear.
    uint16_t held_buttons; // 0x8: What buttons are currently being held.
    uint16_t bitmask; // 0xA: A button bitmask of some kind. Usually seems to be responsible for
                      // determining which buttons are "valid", but sometimes it instead acts as a
                      // duplicate of held_buttons.
};
ASSERT_SIZE(struct input, 0xC);

struct controller {
    struct input input;          // 0x0: The basic input info. Many other fields in this struct are
                                 // determined using this struct.
    uint32_t controller_id;      // 0xC: Assigned but never read.
    bool pressed_update_pending; // 0x10: If true, GetPressedButtons will update pressed_buttons and
                                 // previous_held_buttons.
    undefined padding_0x11;      // 0x11: Padding.
    uint16_t held_buttons;       // 0x12: Buttons that are currently being held.
    uint16_t previous_held_buttons; // 0x14: Buttons that were held on the last frame.
    uint16_t pressed_buttons;       // 0x16: Buttons that started being pressed this frame.
    undefined4 padding_0x18;        // 0x18: Padding.
    bool unused_0x1c;               // 0x1C: Assigned in two separate places, never read.
    undefined padding_0x1d;         // 0x1D: Padding.
    undefined2 unk_0x1e;            // 0x1E: Likely buttons.
    undefined2 unk_0x20;            // 0x20: Likely buttons.
    undefined2 unused_0x22;         // 0x22: Assigned 0, never read.
    bool pressed_no_directions_update_pending; // 0x24: If true, GetPressedButtonsNoDirections will
                                               // update pressed_buttons_no_directions and
                                               // previous_held_buttons_no_directions.
    bool block_0x28_update;  // 0x25: If true, UpdateControllers will NOT update unk_0x28.
    undefined2 padding_0x26; // 0x26: Padding.
    undefined4 unk_0x28;     // 0x28: Tied to no_directions somehow.
    uint16_t
        held_buttons_no_directions; // 0x2C: Held buttons, but any direction buttons are zeroed.
    uint16_t previous_held_buttons_no_directions; // 0x2E: Held buttons with the direction buttons
                                                  // zeroed from the previous frame.
    uint16_t pressed_buttons_no_directions; // 0x30: Buttons that started being pressed this frame,
                                            // with direction buttons zeroed.
    undefined2 padding_0x32;                // 0x32: Padding.
    bool pressed_only_directions_update_pending; // 0x34: If true, GetPressedButtonsOnlyDirections
                                                 // will update pressed_buttons_only_directions and
                                                 // previous_held_buttons_only_directions.
    bool block_0x38_update;  // 0x35: If true, UpdateControllers will NOT update unk_0x38.
    undefined2 padding_0x36; // 0x36: Padding.
    undefined4 unk_0x38;     // 0x38: only_directions equivalent of unk_0x28.
    uint16_t held_buttons_only_directions; // 0x3C: Held buttons, but everything but direction
                                           // buttons are zeroed.
    uint16_t
        previous_held_buttons_only_directions; // 0x3E: Held directions with everything but
                                               // direction buttons zeroed from the previous frame.
    uint16_t
        pressed_buttons_only_directions; // 0x40: Buttons that started being pressed this frame,
                                         // with everything but direction buttons zeroed.
    uint16_t padding_0x42;               // 0x42: Padding.
};
ASSERT_SIZE(struct controller, 0x44);

#endif
