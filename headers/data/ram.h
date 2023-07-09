#ifndef HEADERS_DATA_RAM_H_
#define HEADERS_DATA_RAM_H_

extern struct rgba* DUNGEON_COLORMAP_PTR;
extern struct dungeon DUNGEON_STRUCT;
extern struct move_data_table MOVE_DATA_TABLE;
extern uint32_t FRAMES_SINCE_LAUNCH;
extern struct item BAG_ITEMS[50];
extern struct item* BAG_ITEMS_PTR;
extern struct item_id_16 STORAGE_ITEMS[1000];
extern uint16_t STORAGE_ITEM_QUANTITIES[1000];
extern struct bulk_item* KECLEON_SHOP_ITEMS_PTR;
extern struct bulk_item KECLEON_SHOP_ITEMS[8];
extern struct bulk_item UNUSED_KECLEON_SHOP_ITEMS[8];
extern struct bulk_item* KECLEON_WARES_ITEMS_PTR;
extern struct bulk_item KECLEON_WARES_ITEMS[4];
extern struct bulk_item UNUSED_KECLEON_WARES_ITEMS[4];
extern int32_t MONEY_CARRIED;
extern int32_t MONEY_STORED;
extern uint16_t CURSOR_16_SPRITE_ID;
extern uint16_t CURSOR_SPRITE_ID;
extern struct animation_control* CURSOR_ANIMATION_CONTROL;
extern struct animation_control* CURSOR_16_ANIMATION_CONTROL;
extern uint16_t ALERT_SPRITE_ID;
extern struct animation_control* ALERT_ANIMATION_CONTROL;
extern struct move LAST_NEW_MOVE;
extern struct script_var_value_table SCRIPT_VARS_VALUES;
extern uint8_t BAG_LEVEL;
extern struct special_episode_type_8 DEBUG_SPECIAL_EPISODE_NUMBER;
extern struct dungeon_id_8 PENDING_DUNGEON_ID;
extern uint8_t PENDING_STARTING_FLOOR;
extern uint32_t PLAY_TIME_SECONDS;
extern uint8_t PLAY_TIME_FRAME_COUNTER;
extern char TEAM_NAME[10];
extern struct team_member_table TEAM_MEMBER_TABLE;
extern struct vram_banks_set ENABLED_VRAM_BANKS;
extern uint32_t FRAMES_SINCE_LAUNCH_TIMES_THREE;
extern struct sentry_duty SENTRY_DUTY_STRUCT;
extern bool TURNING_ON_THE_SPOT_FLAG;
extern struct loaded_attack_sprite_data* LOADED_ATTACK_SPRITE_DATA;
extern bool ROLLOUT_ICE_BALL_MISSED;
extern int ROLLOUT_ICE_BALL_SUCCESSIVE_HITS;
extern int TRIPLE_KICK_SUCCESSIVE_HITS;
extern int METRONOME_NEXT_INDEX;
extern struct floor_generation_status FLOOR_GENERATION_STATUS;

#endif
