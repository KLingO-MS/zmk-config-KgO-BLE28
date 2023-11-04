/*                              34 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
  │  0   1   2   3   4 │  5   6   7   8   9 │ │ LTP LTR LTM LTI LTC │ RTC RTI RTM RTR RTP │
  │ 10  11  12  13  14 │ 15  16  17  18  19 │ │ LMP LMR LMM LMI LMC │ RMC RMI RMM RMR RMP │
  │     20  21  22     |     23  24  25     │ │     LBR LBM LBI     │     RBI RBM RBR     │
  ╰───────────╮     26 │ 27     ╭───────────╯ ╰───────────╮     LTB │ RTB     ╭───────────╯
              ╰────────┴────────╯                         ╰─────────┴─────────╯             */

#pragma once

#define LTC  4  // left-top row
#define LTI  3
#define LTM  2
#define LTR  1
#define LTP  0

#define RTC  5  // right-top row
#define RTI  6
#define RTM  7
#define RTR  8
#define RTP  9

#define LMC 14  // left-middle row
#define LMI 13
#define LMM 12
#define LMR 11
#define LMP 10

#define RMC 15  // right-middle row
#define RMI 16
#define RMM 17
#define RMR 18
#define RMP 19

#define LBI 22  // left-bottom row
#define LBM 21
#define LBR 20

#define RBI 23  // right-bottom row
#define RBM 24
#define RBR 25

#define LTB 26  // left thumb

#define RTB 27  // right thumb

#define KEYS_L LTC LTI LTM LTR LTP LMC LMI LMM LMR LMP LBI LBM LBR   // left-hand keys
#define KEYS_R RTC RTI RTM RTR RTP RMC RMI RMM RMR RMP RBI RBM RBR   // right-hand keys
#define THUMBS LTB RTB
