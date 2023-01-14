# qmk_common
My take on a vendor common file set, mostly ideated from Keychron's common folder










# Errata to core QMK code

## `encoder.h`

### Add

```c
void encoder_insert_state(void);
```

## `encoder.c`

### Add

Under `static int8_t  encoder_pulses[NUM_ENCODERS] = {0};'

```c
static bool    encoder_external_update[NUM_ENCODERS] = {false};
```

### Edit

In function `bool encoder_read(void)`, change line:

```c
if ((encoder_state[i] & 0x3) != new_status) {
```

to

```c
if (((encoder_state[i] & 0x3) != new_status) || encoder_external_update[i]) {
```

### Add

In function `bool encoder_read(void)`, under `changed |= encoder_update(i, encoder_state[i]);`

```c
encoder_external_update[i] = false;
```

### Add

at end of file

```c
void encoder_insert_state(void) {
    for (uint8_t i = 0; i < thisCount; i++) {
        encoder_state[i] <<= 2;
        encoder_state[i] |= (readPin(encoders_pad_a[i]) << 0) | (readPin(encoders_pad_b[i]) << 1);
        encoder_pulses[i] += encoder_LUT[encoder_state[i] & 0xF];
        encoder_external_update[i] = true;
    }
}
```
