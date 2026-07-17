#include "Arduino.h"
#include "driver/i2c.h"
void hello_elyssa() {
  static bool initialized = false;
  if (!initialized) {
    Serial.begin(115200);
    unsigned long start = millis();
    while (!Serial && (millis() - start < 300000));
    delay(500);
    initialized = true;
  }
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                                              -+                                                                                                                     "));
  Serial.println(F("                                           ...++...                                                     .+-.                 --..--                                  "));
  Serial.println(F("           . ..                            ...+#...                                                     .-.                   .##.                 ...               "));
  Serial.println(F("           .##.                               -+           ..                                                                +-..-+                .#-               "));
  Serial.println(F("           --++.                                          ###.                                                                                    ..#-..             "));
  Serial.println(F("                                                          .-.                                                                                      ...               "));
  Serial.println(F("                                                                          .                                                                                          "));
  Serial.println(F("                                           .-+.                          .#-...                                                                                      "));
  Serial.println(F("                                           .-+.                          .-...-+.     .-#.                                                                           "));
  Serial.println(F("                                                                         .#-..+#.   .##--.                                                                           "));
  Serial.println(F("                       ..                                                  -+-..#. -++..#.   ......                                  +##+                            "));
  Serial.println(F("                     ..-+..                                 .-+.            .-+#+- #+ -+- .+#+--+-.                                   ..                             "));
  Serial.println(F("                     ..-+..                                 +..#-      +--+++-. .+.++.+-.-+.. .+#.   ++                                                              "));
  Serial.println(F("                       ..                        .--..      #+ -#    .. +#....+#..#.-.  .#+.-+#-   .#..+.                                                            "));
  Serial.println(F("                                               .++...+#-    #. .#.  ---- .###-..#-.#-   ++#+..    -#- .#.                        -#                                  "));
  Serial.println(F("                                                 -#..  +#. .#+.#+...#--#.   .....++#-..-#...###-. -#. .#.                     ..+###..                               "));
  Serial.println(F("                                                  .#+...#-. .#.#. -#. .#.         -#+.#+  -######.-#..#+                      ..+###..                               "));
  Serial.println(F("                                                    .-+-.--+-.-.  -#. +#.         .##+-.  -####+-..-#-.  ......                  -#                                  "));
  Serial.println(F("                                                .....     ..###   .#.-#. .++++-.-..###. .++.#+..   -.. -++-...--++.                                                  "));
  Serial.println(F("                             .               .-#----+#.. .. .-##.  .#- .+#  ..-+...###.  #++   ...+####-..   --+.                                                    "));
  Serial.println(F("                            .#.             .#-..   .-+--++---.#+...#-.#-.---+- ..-#-  .++ .---##+-..   .-+++..                                                      "));
  Serial.println(F("                           -+#+-.             .-+###+..   ..-+####-.### .-..... .+##+ .--.-###-.. ..-##..                                                            "));
  Serial.println(F("                            .-.                          ...   ######-.   .-#.  .+##+.######.     .-####-  ..+##.+.                                                  "));
  Serial.println(F("                                                       -####++  .-###-   ++..#-..+#####+-. .+-+.  +#####-.+--..+-.                                                   "));
  Serial.println(F("                                                       -#####+    .-### .#...#..####+...   ++..+. .+###..#-..+#-                                                     "));
  Serial.println(F("                                                       .-###.-#.   .###..# +#- .####- .#. .#. .#.  .#. .-#+++. .---.                                                 "));
  Serial.println(F("    -..                                       ..-#####..   .+++-.  .+##...#-  .+###  .+.#-.#..+#. .+..-#-....+#-...-#-..                                             "));
  Serial.println(F("   .+.                                      .-++.-   ..-#+---- .+.   +##-.-   +###+ .#..-#..#-+.  ++-##--++++++-...--+-.                      ..  ...                "));
  Serial.println(F(".#######+                                    .+########- .. .-####-  ..###  .####-  .#..#+. #+  .###...        -###-.                         .+-.#.                 "));
  Serial.println(F("   .+..                                          ....        ..######-.###  .####-  .-+-#. .#+.#####-..######.                                 .##-                  "));
  Serial.println(F("    -.                                             ..####.+#####.  .#######-.###.     -+ ..####-    .+#....  -#-.                             --...+.                "));
  Serial.println(F("                                                  .+-   .-+. .+.      .+########.    .##-#####----.   ..+#+++#+-.                                                    "));
  Serial.println(F("                                                 .#-..-+#-  +#+.        .-######.   -+#####---#+--+-+++..                                                            "));
  Serial.println(F("                   .+.                           .-+++-.  -#####+.       .######. .+#####..   .+. -#. .+#+.                                                          "));
  Serial.println(F("                  .+#-       ..                           -#####+.         +####..-###+     .-###+..#-.  ++.                                              .+-.       "));
  Serial.println(F("                           .###.                            ###.           +####-+####.     ######- .##...#-.                       .+                    .+-.       "));
  Serial.println(F("                             ..                                             .#######-       -+###-.   .-----.                      .-#-.                             "));
  Serial.println(F("                                                                            .######          .....                                  ..                               "));
  Serial.println(F("                                                                              +####                                                                                  "));
  Serial.println(F("                                         .-####..                             +####                                                                                  "));
  Serial.println(F("             .#.                        -##-..-#+.                            +####                                                                                  "));
  Serial.println(F("           .#####                      -#-.###+.##.                           +####                                 .-------.                                        "));
  Serial.println(F("             .#.                       -#+.+-.#.++.                           +####                                  .+####..                                        "));
  Serial.println(F("                                       .-######.+#.                           +####                                   -#+-                                           "));
  Serial.println(F("                                         ...+#-.-##.                          +#####-                                .+#-                                            "));
  Serial.println(F("                                            +#.#--##.                       .#######-.                              .-##+.                                           "));
  Serial.println(F("                                            +#.##-.##+..                   .-########+.                          ..-##+.#-                                           "));
  Serial.println(F("                                            +#.##+-.++###++++.           .+############++.               .-+++#######+..#+                ..+..                      "));
  Serial.println(F("                                           .#..+####-...----###############################################+----....-##.#+                ..+..                      "));
  Serial.println(F("                                           ##.##############-..............................................+#######--+#.#-                                           "));
  Serial.println(F("                                          .#+.+#######..######################################################..###-.-#.+#+                                ..        "));
  Serial.println(F("                                           .+-.---++++--###-.+##+ -###..#### .#### .###+ -###-.+###..###- +###--#######+ +#-.                            ..++..      "));
  Serial.println(F("                                           .## .-+##++----++###################################################----...-++.-#+.                           ..++..      "));
  Serial.println(F("                                            -## -+...-######-..................................... ..........++########-....##-                            ..        "));
  Serial.println(F("                                             -##. -###......+#################################################+-......-####  .##.                                    "));
  Serial.println(F("                                              .###-. .--####+---.....................     ............. .. ..+#####+---..--+###+.                                    "));
  Serial.println(F("                                    .+#+.       .+#--.     ....++######++.--++++++----###+--++++++++---+#####-..  --+++---.... .--.                                  "));
  Serial.println(F("                                     .+##-    -###+++###+   -##+--.  .--###+.   .+++##---+##+-    .++###-...++###. . -+###+...+##+.                                  "));
  Serial.println(F("                                       .-######--.  .--.#####...        ..++######++.     .-+#######++.      .-+######+...-####-..                                   "));
  Serial.println(F("                                            ...             .                                                  . .....                                               "));
  Serial.println(F("                                            ...   ...####...     ...+###-.          ..+++-.           ...####+...      ....                                          "));
  Serial.println(F("                                            +##-++###-..-###-....###+...##---.   ---##---+#++-    .---###-...+###.....###..                                .+-..-+   "));
  Serial.println(F("  .-.+                                        .+++-        .#####+       .+-+#####-+.     .-+#######++-        .+#####+ .                                   .-##.    "));
  Serial.println(F("  .++-                                                                      ......           .......                                                       .-+.-+-   "));
  Serial.println(F("                                                                                                                                                           ..   ..   "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println(F("                .                    -##-+##+. .-###..    ..######.     .+#####..   +##     +##. +##.+##-. .+##+.   .########...                                     "));
  Serial.println(F("               .#.                   -###+-+##+##--##++ .-+#-----+#+. .+#+-----##+. +##     +##. +###+-+##+#+-+##+- .-------+##-                                     "));
  Serial.println(F("             -#####.                 -##-   .##+   .### .###     .##- -##-    .###. +##.    +##. +##.   -##-.  .##-  ........##-                                     "));
  Serial.println(F("               .#-                   -##-   .##+   .### .###     .##- -##-    .###.  +##.  ###   +##.   -##-   .##- .##########+                                     "));
  Serial.println(F("                .                    -##-   .##+   .### .###     .##- .##-    .###.  .-##-##+.   +##.   -##-   .##- .##+.....##-                                     "));
  Serial.println(F("                                     -##-   .##+   .###   -########.   .########+     -#####+    +##.   -##-   .##- .##+    .##-             .-+                     "));
  Serial.println(F("                                     .--.   .--.   .---    .------       .-----.       .---.     ---.   .--.   .--. .--.    .--.             .-+.                    "));
  Serial.println(F("                                                                                                                                                                     "));
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println("");
  Serial.println(F("                                 ╔══════════════════════════════════════════════════════════════════════════════════════════════╗"));
  Serial.println(F("                                 ║                                       --- ELYSSA  ---                                        ║"));
  Serial.println(F("                                 ╠══════════════════════════════════════════════════════════════════════════════════════════════╣"));
  Serial.println(F("                                 ║                                           Ahla!                                              ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║      Thabet mli7 felli bin idik. Hedhi mch juste pcb, hadhi awel dev board tounsia,          ║"));
  Serial.println(F("                                 ║                         hadhi awel 5atwa sad9a f thneya jdida.                               ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║           Kima Elyssa el malika eli harbet mel dholm bech tiktib teri5 Carthage              ║"));
  Serial.println(F("                                 ║                bmo5ha w dhkeha w 3azimetha, a7na lyoum fi Moovma harbin                      ║"));
  Serial.println(F("                                 ║              mel dholm mta3 ettaba3iya ettechnologiya eli n3ichou feha lyoum.                ║"));
  Serial.println(F("                                 ║               w ma rdhinech bech no93dou te7et ra7met ghirna, nasta3mlou felli               ║"));
  Serial.println(F("                                 ║                         yetefradh 3lina w nconsomiouw feli yeta3talna,                       ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║          Moovma mch juste startup, hiya el 'movement' eli bech t5ali el9ayd yankasser,       ║"));
  Serial.println(F("                                 ║                 Moovma Hiya el mo5 etounsi ki y9arrer yfok blastou fel 3alam.                ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║           Kima el Zitouna etounseya m3ar9a fi trabna, thabta w 9weya w ma y9ala3ha           ║"));
  Serial.println(F("                                 ║           7atta ri7, l'innovation mechi 7eker 3la cha3eb men cha3eb matansech eli            ║"));
  Serial.println(F("                                 ║                        rak tounsi tari5ek kbir w majdek sebe9.                               ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║            Moovma jetbech t9oul elli el hardware mte3na nasn3ouh bidina, bech nkounou        ║"));
  Serial.println(F("                                 ║             a7rar w na7na barka eli nemlkou mfeta7 mosta9belena, wel 7a9 yetfak              ║"));
  Serial.println(F("                                 ║                                       mayeta3tach.                                           ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║          w Heka 3leh 2027 mch bech tkoun kima 2027. Bech nbadlou mab3adhna el mosta9bel.     ║"));
  Serial.println(F("                                 ║           2027 bech ykoun el 3am elli Tounis twalli hiya elli t5alla9 el technologie,        ║"));
  Serial.println(F("                                 ║          mch elli techriha. Thabet mli7, 5ater fel dev board hadhi, maktoub el mosta9bel     ║"));
  Serial.println(F("                                 ║                                  elli bech nasn3ouh mab3adhna.                               ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║            Tafaker dima: 'Tijri el rya7 kima tijri sfinetna'.. 5ater a7na el ry7,            ║"));
  Serial.println(F("                                 ║            a7na el b7ar, w a7na sfinet Carthage el jdida elli mcheya lel mosta9bel.          ║"));
  Serial.println(F("                                 ║                                                                                              ║"));
  Serial.println(F("                                 ║            El khedma badet.. w el legacy mte3ek yabda lyoum, el moovma bdet bech             ║"));
  Serial.println(F("                                 ║                      nraj3ou glory carthage: na3mlou Moovma sa7bi                            ║"));
  Serial.println(F("                                 ╠══════════════════════════════════════════════════════════════════════════════════════════════╣"));
  Serial.println(F("                                 ║                                   Copyright © 2026 Moovma                                    ║"));
  Serial.println(F("                                 ║                                      All Rights Reserved                                     ║"));
  Serial.println(F("                                 ╚══════════════════════════════════════════════════════════════════════════════════════════════╝"));
  Serial.println("");
}

#define I2C_PORT_NUM   I2C_NUM_0
#define I2C_TIMEOUT_MS 10
static bool gyro_initialized = false;
static uint8_t gyro_read_reg(uint8_t reg) {
  uint8_t val = 0xFF;
  i2c_cmd_handle_t cmd = i2c_cmd_link_create();
  i2c_master_start(cmd);
  i2c_master_write_byte(cmd, (GYRO_ADDR << 1) | I2C_MASTER_WRITE, true);
  i2c_master_write_byte(cmd, reg, true);
  i2c_master_start(cmd);
  i2c_master_write_byte(cmd, (GYRO_ADDR << 1) | I2C_MASTER_READ, true);
  i2c_master_read_byte(cmd, &val, I2C_MASTER_NACK);
  i2c_master_stop(cmd);
  i2c_master_cmd_begin(I2C_PORT_NUM, cmd, pdMS_TO_TICKS(I2C_TIMEOUT_MS));
  i2c_cmd_link_delete(cmd);
  return val;
}
static bool gyro_write_reg(uint8_t reg, uint8_t val) {
  i2c_cmd_handle_t cmd = i2c_cmd_link_create();
  i2c_master_start(cmd);
  i2c_master_write_byte(cmd, (GYRO_ADDR << 1) | I2C_MASTER_WRITE, true);
  i2c_master_write_byte(cmd, reg, true);
  i2c_master_write_byte(cmd, val, true);
  i2c_master_stop(cmd);
  esp_err_t ret = i2c_master_cmd_begin(I2C_PORT_NUM, cmd, pdMS_TO_TICKS(I2C_TIMEOUT_MS));
  i2c_cmd_link_delete(cmd);
  return ret == ESP_OK;
}
  static int16_t gyro_read_raw(uint8_t low_reg) {
  uint8_t lo = gyro_read_reg(low_reg);
  uint8_t hi = gyro_read_reg(low_reg + 1);
  return (int16_t)((hi << 8) | lo);
}
uint8_t elyssa_imu_read_reg(uint8_t reg) {
  return gyro_read_reg(reg);
}
bool elyssa_imu_begin() {
  i2c_config_t conf = {};
  conf.mode             = I2C_MODE_MASTER;
  conf.sda_io_num       = SDA_gyro;
  conf.scl_io_num       = SCL_gyro;
  conf.sda_pullup_en    = GPIO_PULLUP_ENABLE;
  conf.scl_pullup_en    = GPIO_PULLUP_ENABLE;
  conf.master.clk_speed = 400000;
  i2c_param_config(I2C_PORT_NUM, &conf);
  i2c_driver_install(I2C_PORT_NUM, I2C_MODE_MASTER, 0, 0, 0);
  pinMode(INT_gyro, INPUT);
  if (gyro_read_reg(0x0F) != 0x70) return false;
  // 1. SW_RESET
  gyro_write_reg(0x12, 0x01);
  delay(10);
  // 2. CTRL3: BDU=1, IF_INC=1// was 0x40 what does if inc dki 
  gyro_write_reg(0x12, 0x44);
  // 3. CTRL6: gyro ±250dps (set BEFORE enabling ODR)
  gyro_write_reg(0x15, 0x01);
  //0x16 enable digitam filter talel 0x01
  // 4. CTRL8: accel ±2g (set BEFORE enabling ODR)** dp this impact values of acceleratoon normal ?
  gyro_write_reg(0x17, 0x00);
  // pour different filtres voir page 68 17h 
  // 5. CTRL1: accel 120Hz high-performance
  gyro_write_reg(0x10, 0x06);
  // 6. CTRL2: gyro 120Hz high-performance
  gyro_write_reg(0x11, 0x06);
  // 7. Wait for data ready
  uint32_t t = millis();
  while (((gyro_read_reg(0x1E) & 0x03) != 0x03) && (millis() - t < 500));
  gyro_initialized = true;
  return true;
}
bool    elyssa_imu_ready()  { return (gyro_read_reg(0x1E) & 0x03) == 0x03; }
uint8_t elyssa_imu_whoami() { return gyro_read_reg(0x0F); }
float gyro_return_ax()  { return gyro_read_raw(0x22) * 0.00875f; }
float gyro_return_ay()  { return gyro_read_raw(0x24) * 0.00875f; }
float gyro_return_az()  { return gyro_read_raw(0x26) * 0.00875f; }
float accel_return_ax() { return gyro_read_raw(0x28) * 0.000061f; }
float accel_return_ay() { return gyro_read_raw(0x2A) * 0.000061f; }
float accel_return_az() { return gyro_read_raw(0x2C) * 0.000061f; }
float elyssa_imu_temperature() {
  return 25.0f + (gyro_read_raw(0x20) / 256.0f);
}
// ====================================================================
// LSM6DSV HARDWARE TAP DETECTION ENGINE IMPLEMENTATION
// ====================================================================

// Local cache to safely preserve the latched register state during lookups
static uint8_t cached_tap_src = 0;

/**
 * @brief Initializes the hardware tap engine with explicit individual axis thresholds.
 * @param priority Axis priority code (e.g., 0x03 or 0x07 for Z -> Y -> X mapping)
 * @param ths_x X-axis tap threshold (5-bit max: 0 to 31)
 * @param ths_y Y-axis tap threshold (5-bit max: 0 to 31)
 * @param ths_z Z-axis tap threshold (5-bit max: 0 to 31)
 * @param shock Maximum duration of over-threshold shock window (Bits [1:0])
 * @param quiet Expected quiet window duration following initial impact (Bits [3:2])
 * @param dur Duration window limit between double-tap intervals (Bits [7:4])
 * @return true if communication succeeded and configurations match, false otherwise.
 */
bool elyssa_tap_init(uint8_t priority, uint8_t ths_x, uint8_t ths_y, uint8_t ths_z, 
                     uint8_t shock, uint8_t quiet, uint8_t dur) {
  //step0 write function enable 
  uint8_t func_en = gyro_read_reg(0x50);
  gyro_write_reg(0x50, func_en | 0x80);
  //test if things goes wrong remove
  gyro_write_reg(0x17, 0x03); 
  // Step 1: Set Accelerometer ODR (0x08 = 480 Hz High-Perf / 0x09 = 960 Hz High-Perf)
  gyro_write_reg(0x10, 0x08);
  //filters test maybe removed
  gyro_write_reg(0x18, 0x10);   // HP_SLOPE_XL_EN = 1 (CTRL9)
  gyro_write_reg(0x17, 0x23);   a
  // Step 2: Enable axes and set LIR latching (TAP_CFG0 = 0x56)
  // Setting to 0x0F enables X/Y/Z tap and LIR (Bit 0). 
  // (Change to 0x4F if you explicitly want to turn on LOW_PASS_ON_6D for Hamza's filter checks)
  gyro_write_reg(0x56, 0x0F);

  // Step 3: Configure TAP_CFG1 (0x57) -> Priority Bits [7:5] + X Threshold Bits [4:0]
  uint8_t cfg1_val = ((priority & 0x07) << 5) | (ths_x & 0x1F);
  gyro_write_reg(0x57, cfg1_val);

  // Step 4: Configure TAP_CFG2 (0x58) -> Y Threshold Bits [4:0] (Bits [7:5] must stay 0)
  uint8_t cfg2_val = (ths_y & 0x1F);
  gyro_write_reg(0x58, cfg2_val);

  // Step 4b: Configure TAP_THS_6D (0x59) -> Z Threshold Bits [4:0]
  // Preserving the upper bits [7:5] to protect existing 6D/4D config structures
  uint8_t current_6d = gyro_read_reg(0x59) & 0xE0;
  gyro_write_reg(0x59, current_6d | (ths_z & 0x1F));

  // Step 5: Pack the Human-Finger Timing Matrix into TAP_DUR (0x5A)
  // LSM6DSV Bit Alignment: DUR[7:4] | QUIET[3:2] | SHOCK[1:0]
  uint8_t tap_dur_val = ((dur & 0x0F) << 4) | ((quiet & 0x03) << 2) | (shock & 0x03);
  // comented for tesst if (tap_dur_val == 0) {
    //tap_dur_val = 0x7F; // Safe system baseline fallback
  //}
  gyro_write_reg(0x5A, tap_dur_val);

  // Step 6: Enable single and double tap selection (WAKE_UP_THS = 0x5B)
  uint8_t current_wakeup = gyro_read_reg(0x5B);
  gyro_write_reg(0x5B, current_wakeup | 0x80);

  // Step 7: Route Single & Double flags directly out to physical INT1 pin
  gyro_write_reg(0x5E, 0x48);

  // Reset local state cache variable
  cached_tap_src = 0;

  // Step 8: Validate the write operation against register 0x56
  return (gyro_read_reg(0x50) & 0x80) != 0;
}

/**
 * @brief Reads the hardware TAP_SRC register (0x46) and caches the result.
 * This function unlatches the physical interrupt line upon execution.
 * @return The raw byte from the TAP_SRC register.
 */
uint8_t elyssa_tap_src_get() {
  cached_tap_src = gyro_read_reg(0x46);
  gyro_read_reg(0x1D);   
  return cached_tap_src;
}

/**
 * @brief Checks if a single tap event occurred in the last cached read.
 * @return true if a single tap event is active.
 */
bool elyssa_single_tap_detected() {
  // Bit 6: TAP_IA (Interrupt Active), Bit 5: SINGLE_TAP
  return ((cached_tap_src & 0x40) && (cached_tap_src & 0x20));
}

/**
 * @brief Checks if a double tap event occurred in the last cached read.
 * @return true if a double tap event is active.
 */
bool elyssa_double_tap_detected() {
  // Bit 6: TAP_IA (Interrupt Active), Bit 4: DOUBLE_TAP
  return ((cached_tap_src & 0x40) && (cached_tap_src & 0x10));
}

/**
 * @brief Identifies which physical axis received the impact shockwave.
 * @return 0 for X-axis, 1 for Y-axis, 2 for Z-axis, or 0xFF if no active tap event.
 */
uint8_t elyssa_tap_axis() {
  if (!(cached_tap_src & 0x40)) {
    return 0xFF; // No active interrupt event present
  }
  if (cached_tap_src & 0x04) return 0; // X_TAP (Bit 2)
  if (cached_tap_src & 0x02) return 1; // Y_TAP (Bit 1)
  if (cached_tap_src & 0x01) return 2; // Z_TAP (Bit 0)
  return 0xFF;
}
void dump_tap_regs() {
  Serial.println("--- TAP REGS DUMP ---");
  Serial.printf("0x50 FUNCTIONS_ENABLE = 0x%02X\n", gyro_read_reg(0x50));
  Serial.printf("0x56 TAP_CFG0        = 0x%02X\n", gyro_read_reg(0x56));
  Serial.printf("0x57 TAP_CFG1        = 0x%02X\n", gyro_read_reg(0x57));
  Serial.printf("0x58 TAP_CFG2        = 0x%02X\n", gyro_read_reg(0x58));
  Serial.printf("0x59 TAP_THS_6D      = 0x%02X\n", gyro_read_reg(0x59));
  Serial.printf("0x5A TAP_DUR         = 0x%02X\n", gyro_read_reg(0x5A));
  Serial.printf("0x5B WAKE_UP_THS     = 0x%02X\n", gyro_read_reg(0x5B));
  Serial.printf("0x5E MD1_CFG         = 0x%02X\n", gyro_read_reg(0x5E));
  Serial.printf("0x1E STATUS_REG      = 0x%02X\n", gyro_read_reg(0x1E));
  Serial.println("---------------------");
  Serial.printf("0x17 CTRL8            = 0x%02X\n", gyro_read_reg(0x17));
}

