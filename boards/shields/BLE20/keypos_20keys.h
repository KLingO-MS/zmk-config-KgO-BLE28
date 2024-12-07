/*                              34 KEY MATRIX / LAYOUT MAPPING

  ╭──-────────────────┬────────────────────╮ ╭─────────────────────┬─────────────────────╮
  │  0  1   2   3     │      4   5   6   7 │ │ LTP LTR LTM LTI     │     RTI RTM RTR RTP │
  │  8  9  10  11     │     12  13  14  15 │ │ LBP LBR LBM LBI     │     RBI RBM RBR RBP │
  ╰──────────╮ 16  17 │ 18  19 ╭───────────╯ ╰───────────╮ LOT LIT │ RIT ROT ╭───────────╯
             ╰-───────┴────────╯                         ╰─────────┴─────────╯             */

#pragma once

#define LTI  3  // left-top row
#define LTM  2
#define LTR  1
#define LTP  0

#define RTI  4  // right-top row
#define RTM  5
#define RTR  6
#define RTP  7

#define LBI 11  // left-bottom row
#define LBM 10
#define LBR  9
#define LBP  8

#define RBI 12  // right-bottom row
#define RBM 13
#define RBR 14
#define RBP 15

#define LOT 16  // left thumbs
#define LIT 17

#define RIT 18  // right thumbs
#define ROT 19

#define KEYS_L LTI LTM LTR LTP LBI LBM LBR LBP  // left-hand keys
#define KEYS_R RTI RTM RTR RTP RBI RBM RBR RBP  // right-hand keys
#define THUMBS LOT LIT RIT ROT
