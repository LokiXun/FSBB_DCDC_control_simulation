#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_tdxf_p.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_tdxf_p ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { static int32_T
_cg_const_2 [ 580 ] = { 2 , 6 , 38 , 39 , 45 , 46 , 48 , 2 , 6 , 10 , 50 , 51
, 57 , 58 , 60 , 42 , 43 , 44 , 49 , 3 , 40 , 41 , 6 , 10 , 14 , 62 , 63 , 69
, 70 , 72 , 54 , 55 , 56 , 61 , 7 , 52 , 53 , 10 , 14 , 18 , 74 , 75 , 81 ,
82 , 84 , 66 , 67 , 68 , 73 , 11 , 64 , 65 , 14 , 18 , 22 , 86 , 87 , 93 , 94
, 96 , 78 , 79 , 80 , 85 , 15 , 76 , 77 , 18 , 22 , 98 , 99 , 105 , 106 , 108
, 90 , 91 , 92 , 97 , 19 , 88 , 89 , 102 , 103 , 104 , 109 , 23 , 100 , 101 ,
24 , 112 , 114 , 25 , 113 , 115 , 20 , 21 , 23 , 26 , 32 , 100 , 101 , 112 ,
113 , 114 , 115 , 0 , 1 , 3 , 4 , 5 , 7 , 8 , 9 , 11 , 12 , 13 , 15 , 20 , 21
, 23 , 24 , 26 , 27 , 32 , 33 , 40 , 41 , 52 , 53 , 64 , 65 , 76 , 77 , 88 ,
100 , 101 , 112 , 114 , 0 , 1 , 3 , 4 , 5 , 7 , 8 , 9 , 11 , 12 , 13 , 15 ,
20 , 21 , 23 , 24 , 27 , 28 , 33 , 34 , 40 , 41 , 52 , 53 , 64 , 65 , 76 , 77
, 88 , 100 , 101 , 112 , 114 , 8 , 9 , 11 , 12 , 13 , 15 , 28 , 29 , 34 , 35
, 64 , 65 , 76 , 77 , 4 , 5 , 7 , 8 , 9 , 11 , 29 , 30 , 35 , 36 , 52 , 53 ,
64 , 65 , 0 , 1 , 3 , 4 , 5 , 7 , 30 , 31 , 36 , 37 , 40 , 41 , 52 , 53 , 20
, 21 , 23 , 26 , 32 , 100 , 101 , 20 , 21 , 23 , 26 , 32 , 100 , 101 , 0 , 1
, 3 , 4 , 5 , 7 , 8 , 9 , 11 , 12 , 13 , 15 , 20 , 21 , 23 , 24 , 27 , 33 ,
40 , 41 , 52 , 53 , 64 , 65 , 76 , 77 , 100 , 101 , 112 , 114 , 0 , 1 , 3 , 4
, 5 , 7 , 8 , 9 , 11 , 12 , 13 , 15 , 20 , 21 , 23 , 24 , 27 , 33 , 40 , 41 ,
52 , 53 , 64 , 65 , 76 , 77 , 100 , 101 , 112 , 114 , 12 , 13 , 15 , 28 , 34
, 76 , 77 , 12 , 13 , 15 , 28 , 34 , 76 , 77 , 8 , 9 , 11 , 29 , 35 , 64 , 65
, 8 , 9 , 11 , 29 , 35 , 64 , 65 , 4 , 5 , 7 , 30 , 36 , 52 , 53 , 4 , 5 , 7
, 30 , 36 , 52 , 53 , 0 , 1 , 3 , 31 , 37 , 40 , 41 , 0 , 1 , 3 , 31 , 37 ,
40 , 41 , 0 , 1 , 3 , 4 , 5 , 7 , 8 , 9 , 11 , 12 , 13 , 15 , 16 , 17 , 19 ,
20 , 21 , 23 , 24 , 40 , 41 , 52 , 53 , 64 , 65 , 76 , 77 , 88 , 89 , 100 ,
101 , 112 , 114 , 0 , 38 , 40 , 41 , 2 , 41 , 38 , 42 , 45 , 46 , 48 , 3 , 41
, 47 , 40 , 41 , 45 , 46 , 47 , 1 , 42 , 43 , 40 , 41 , 44 , 47 , 49 , 1 , 39
, 42 , 3 , 48 , 4 , 50 , 52 , 53 , 6 , 53 , 50 , 54 , 57 , 58 , 60 , 7 , 53 ,
59 , 52 , 53 , 57 , 58 , 59 , 5 , 54 , 55 , 52 , 53 , 56 , 59 , 61 , 5 , 51 ,
54 , 7 , 60 , 8 , 62 , 64 , 65 , 10 , 65 , 62 , 66 , 69 , 70 , 72 , 11 , 65 ,
71 , 64 , 65 , 69 , 70 , 71 , 9 , 66 , 67 , 64 , 65 , 68 , 71 , 73 , 9 , 63 ,
66 , 11 , 72 , 12 , 74 , 76 , 77 , 14 , 77 , 74 , 78 , 81 , 82 , 84 , 15 , 77
, 83 , 76 , 77 , 81 , 82 , 83 , 13 , 78 , 79 , 76 , 77 , 80 , 83 , 85 , 13 ,
75 , 78 , 15 , 84 , 16 , 86 , 88 , 89 , 18 , 89 , 86 , 90 , 93 , 94 , 96 , 19
, 89 , 95 , 88 , 89 , 93 , 94 , 95 , 17 , 90 , 91 , 88 , 89 , 92 , 95 , 97 ,
17 , 87 , 90 , 19 , 96 , 20 , 98 , 100 , 101 , 22 , 101 , 98 , 102 , 105 ,
106 , 108 , 23 , 101 , 107 , 100 , 101 , 105 , 106 , 107 , 21 , 102 , 103 ,
100 , 101 , 104 , 107 , 109 , 21 , 99 , 102 , 23 , 108 , 24 , 25 , 112 , 113
, 114 , 115 , 110 , 111 , 112 , 114 , 113 , 115 } ; static int32_T
_cg_const_1 [ 117 ] = { 0 , 7 , 15 , 16 , 19 , 22 , 30 , 31 , 34 , 37 , 45 ,
46 , 49 , 52 , 60 , 61 , 64 , 67 , 74 , 75 , 78 , 81 , 82 , 85 , 88 , 91 , 94
, 105 , 138 , 171 , 185 , 199 , 213 , 220 , 227 , 257 , 287 , 294 , 301 , 308
, 315 , 322 , 329 , 336 , 343 , 376 , 380 , 382 , 387 , 390 , 393 , 395 , 398
, 401 , 403 , 406 , 408 , 412 , 414 , 419 , 422 , 425 , 427 , 430 , 433 , 435
, 438 , 440 , 444 , 446 , 451 , 454 , 457 , 459 , 462 , 465 , 467 , 470 , 472
, 476 , 478 , 483 , 486 , 489 , 491 , 494 , 497 , 499 , 502 , 504 , 508 , 510
, 515 , 518 , 521 , 523 , 526 , 529 , 531 , 534 , 536 , 540 , 542 , 547 , 550
, 553 , 555 , 558 , 561 , 563 , 566 , 568 , 574 , 575 , 576 , 578 , 580 } ;
PmSparsityPattern out ; int32_T b ; ( void ) t1 ; ( void ) LC ; out = t2 ->
mTDXF_P ; out . mNumCol = 116ULL ; out . mNumRow = 116ULL ; for ( b = 0 ; b <
117 ; b ++ ) { out . mJc [ b ] = _cg_const_1 [ b ] ; } for ( b = 0 ; b < 580
; b ++ ) { out . mIr [ b ] = _cg_const_2 [ b ] ; } ( void ) LC ; ( void ) t2
; return 0 ; }
