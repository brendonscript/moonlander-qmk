#define CHORDAL_HOLD
#undef TAPPING_TERM
#define TAPPING_TERM 250

#define PERMISSIVE_HOLD

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "5qJbe/Oaanyg"
#define LAYER_STATE_16BIT
#define COMBO_COUNT 3
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define RGB_MATRIX_STARTUP_SPD 60

// Custom
#undef LEADER_TIMEOUT
#define LEADER_NO_TIMEOUT
#define LEADER_PER_KEY_TIMING
#define LEADER_TIMEOUT 400
#define QUICK_TAP_TERM 0
