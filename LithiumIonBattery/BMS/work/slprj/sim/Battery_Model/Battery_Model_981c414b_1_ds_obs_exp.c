#include "ne_ds.h"
#include "Battery_Model_981c414b_1_ds_sys_struct.h"
#include "Battery_Model_981c414b_1_ds_obs_exp.h"
#include "Battery_Model_981c414b_1_ds.h"
#include "Battery_Model_981c414b_1_ds_externals.h"
#include "Battery_Model_981c414b_1_ds_external_struct.h"
#include "ssc_ml_fun.h"
int32_T Battery_Model_981c414b_1_ds_obs_exp ( const NeDynamicSystem * LC ,
const NeDynamicSystemInput * t1 , NeDsMethodOutput * t2 ) { PmRealVector out
; real_T t0 [ 505 ] ; real_T P_R_idx_0 ; real_T P_R_idx_1 ; real_T P_R_idx_10
; real_T P_R_idx_11 ; real_T P_R_idx_2 ; real_T P_R_idx_3 ; real_T P_R_idx_4
; real_T P_R_idx_5 ; real_T P_R_idx_6 ; real_T P_R_idx_7 ; real_T P_R_idx_8 ;
real_T P_R_idx_9 ; int32_T b ; ( void ) LC ; P_R_idx_0 = t1 -> mP_R . mX [ 0
] ; P_R_idx_1 = t1 -> mP_R . mX [ 1 ] ; P_R_idx_2 = t1 -> mP_R . mX [ 2 ] ;
P_R_idx_3 = t1 -> mP_R . mX [ 3 ] ; P_R_idx_4 = t1 -> mP_R . mX [ 4 ] ;
P_R_idx_5 = t1 -> mP_R . mX [ 5 ] ; P_R_idx_6 = t1 -> mP_R . mX [ 6 ] ;
P_R_idx_7 = t1 -> mP_R . mX [ 7 ] ; P_R_idx_8 = t1 -> mP_R . mX [ 8 ] ;
P_R_idx_9 = t1 -> mP_R . mX [ 9 ] ; P_R_idx_10 = t1 -> mP_R . mX [ 10 ] ;
P_R_idx_11 = t1 -> mP_R . mX [ 11 ] ; out = t2 -> mOBS_EXP ; t0 [ 0ULL ] =
0.0 ; t0 [ 1ULL ] = 0.0 ; t0 [ 2ULL ] = 0.0 ; t0 [ 3ULL ] = 0.0 ; t0 [ 4ULL ]
= 0.0 ; t0 [ 5ULL ] = 0.0 ; t0 [ 6ULL ] = 0.0 ; t0 [ 7ULL ] = 0.0 ; t0 [ 8ULL
] = 0.0 ; t0 [ 9ULL ] = 0.0 ; t0 [ 10ULL ] = 0.0 ; t0 [ 11ULL ] = 0.0 ; t0 [
12ULL ] = 0.0 ; t0 [ 13ULL ] = 0.0 ; t0 [ 14ULL ] = 0.0 ; t0 [ 15ULL ] = 0.0
; t0 [ 16ULL ] = 0.0 ; t0 [ 17ULL ] = 0.0 ; t0 [ 18ULL ] = 0.0 ; t0 [ 19ULL ]
= 0.0 ; t0 [ 20ULL ] = 0.0 ; t0 [ 21ULL ] = 0.0 ; t0 [ 22ULL ] = 0.0 ; t0 [
23ULL ] = 0.0 ; t0 [ 24ULL ] = 0.0 ; t0 [ 25ULL ] = 0.0 ; t0 [ 26ULL ] = 0.0
; t0 [ 27ULL ] = 0.0 ; t0 [ 28ULL ] = 0.0 ; t0 [ 29ULL ] = 0.0 ; t0 [ 30ULL ]
= 0.0 ; t0 [ 31ULL ] = 0.0 ; t0 [ 32ULL ] = 0.0 ; t0 [ 33ULL ] = 0.0 ; t0 [
34ULL ] = 0.0 ; t0 [ 35ULL ] = 0.0 ; t0 [ 36ULL ] = 0.0 ; t0 [ 37ULL ] = 0.0
; t0 [ 38ULL ] = 0.0 ; t0 [ 39ULL ] = 0.0 ; t0 [ 40ULL ] = 0.0 ; t0 [ 41ULL ]
= 0.0 ; t0 [ 42ULL ] = 0.0 ; t0 [ 43ULL ] = 0.0 ; t0 [ 44ULL ] = 0.0 ; t0 [
45ULL ] = 0.0 ; t0 [ 46ULL ] = 0.0 ; t0 [ 47ULL ] = 0.0 ; t0 [ 48ULL ] = 0.0
; t0 [ 49ULL ] = 0.0 ; t0 [ 50ULL ] = 0.0 ; t0 [ 51ULL ] = 0.0 ; t0 [ 52ULL ]
= 0.0 ; t0 [ 53ULL ] = 0.0 ; t0 [ 54ULL ] = 0.0 ; t0 [ 55ULL ] = 0.0 ; t0 [
56ULL ] = 0.0 ; t0 [ 57ULL ] = 0.0 ; t0 [ 58ULL ] = 0.0 ; t0 [ 59ULL ] = 0.0
; t0 [ 60ULL ] = 0.0 ; t0 [ 61ULL ] = 0.0 ; t0 [ 62ULL ] = 0.0 ; t0 [ 63ULL ]
= 0.0 ; t0 [ 64ULL ] = 0.0 ; t0 [ 65ULL ] = 0.0 ; t0 [ 66ULL ] = 0.0 ; t0 [
67ULL ] = 0.0 ; t0 [ 68ULL ] = 0.0 ; t0 [ 69ULL ] = 0.0 ; t0 [ 70ULL ] = 0.0
; t0 [ 71ULL ] = 0.0 ; t0 [ 72ULL ] = 0.0 ; t0 [ 73ULL ] = 0.0 ; t0 [ 74ULL ]
= 0.0 ; t0 [ 75ULL ] = 0.0 ; t0 [ 76ULL ] = 0.0 ; t0 [ 77ULL ] = 0.0 ; t0 [
78ULL ] = 0.0 ; t0 [ 79ULL ] = 0.0 ; t0 [ 80ULL ] = 0.0 ; t0 [ 81ULL ] = 0.0
; t0 [ 82ULL ] = 0.0 ; t0 [ 83ULL ] = 0.0 ; t0 [ 84ULL ] = 0.0 ; t0 [ 85ULL ]
= 0.0 ; t0 [ 86ULL ] = 0.0 ; t0 [ 87ULL ] = 0.0 ; t0 [ 88ULL ] = 0.0 ; t0 [
89ULL ] = 0.0 ; t0 [ 90ULL ] = 0.0 ; t0 [ 91ULL ] = 0.0 ; t0 [ 92ULL ] = 0.0
; t0 [ 93ULL ] = 0.0 ; t0 [ 94ULL ] = 0.0 ; t0 [ 95ULL ] = 0.0 ; t0 [ 96ULL ]
= 0.0 ; t0 [ 97ULL ] = 0.0 ; t0 [ 98ULL ] = 0.0 ; t0 [ 99ULL ] = 0.0 ; t0 [
100ULL ] = 0.0 ; t0 [ 101ULL ] = 0.0 ; t0 [ 102ULL ] = 0.0 ; t0 [ 103ULL ] =
0.0 ; t0 [ 104ULL ] = 0.0 ; t0 [ 105ULL ] = 0.0 ; t0 [ 106ULL ] = 0.0 ; t0 [
107ULL ] = 0.0 ; t0 [ 108ULL ] = 0.0 ; t0 [ 109ULL ] = 0.0 ; t0 [ 110ULL ] =
0.0 ; t0 [ 111ULL ] = 0.0 ; t0 [ 112ULL ] = 0.0 ; t0 [ 113ULL ] = 0.0 ; t0 [
114ULL ] = 0.0 ; t0 [ 115ULL ] = 0.0 ; t0 [ 116ULL ] = 0.0 ; t0 [ 117ULL ] =
0.0 ; t0 [ 118ULL ] = 0.0 ; t0 [ 119ULL ] = 293.15 ; t0 [ 120ULL ] = 0.0 ; t0
[ 121ULL ] = P_R_idx_0 ; t0 [ 122ULL ] = 0.0 ; t0 [ 123ULL ] = 0.0 ; t0 [
124ULL ] = 0.0 ; t0 [ 125ULL ] = 0.0 ; t0 [ 126ULL ] = 1.0 ; t0 [ 127ULL ] =
1.0 ; t0 [ 128ULL ] = 0.0 ; t0 [ 129ULL ] = 0.0 ; t0 [ 130ULL ] = 0.0 ; t0 [
131ULL ] = 0.0 ; t0 [ 132ULL ] = P_R_idx_2 ; t0 [ 133ULL ] = 0.0 ; t0 [
134ULL ] = 0.0 ; t0 [ 135ULL ] = 0.0 ; t0 [ 136ULL ] = 0.0 ; t0 [ 137ULL ] =
0.0 ; t0 [ 138ULL ] = 0.0 ; t0 [ 139ULL ] = 0.0 ; t0 [ 140ULL ] = 0.0 ; t0 [
141ULL ] = 0.0 ; t0 [ 142ULL ] = 0.0 ; t0 [ 143ULL ] = 0.0 ; t0 [ 144ULL ] =
0.0 ; t0 [ 145ULL ] = 1.0 ; t0 [ 146ULL ] = 1.0 ; t0 [ 147ULL ] = 1.0 ; t0 [
148ULL ] = 1.0 ; t0 [ 149ULL ] = 1.0 ; t0 [ 150ULL ] = 1.0 ; t0 [ 151ULL ] =
1.0 ; t0 [ 152ULL ] = 0.0 ; t0 [ 153ULL ] = 293.15 ; t0 [ 154ULL ] = 0.0 ; t0
[ 155ULL ] = P_R_idx_1 ; t0 [ 156ULL ] = 0.0 ; t0 [ 157ULL ] = 0.0 ; t0 [
158ULL ] = 0.0 ; t0 [ 159ULL ] = 0.0 ; t0 [ 160ULL ] = 1.0 ; t0 [ 161ULL ] =
1.0 ; t0 [ 162ULL ] = 0.0 ; t0 [ 163ULL ] = 0.0 ; t0 [ 164ULL ] = 0.0 ; t0 [
165ULL ] = 0.0 ; t0 [ 166ULL ] = P_R_idx_4 ; t0 [ 167ULL ] = 0.0 ; t0 [
168ULL ] = 0.0 ; t0 [ 169ULL ] = 0.0 ; t0 [ 170ULL ] = 0.0 ; t0 [ 171ULL ] =
0.0 ; t0 [ 172ULL ] = 0.0 ; t0 [ 173ULL ] = 0.0 ; t0 [ 174ULL ] = 0.0 ; t0 [
175ULL ] = 0.0 ; t0 [ 176ULL ] = 0.0 ; t0 [ 177ULL ] = 0.0 ; t0 [ 178ULL ] =
0.0 ; t0 [ 179ULL ] = 1.0 ; t0 [ 180ULL ] = 1.0 ; t0 [ 181ULL ] = 1.0 ; t0 [
182ULL ] = 1.0 ; t0 [ 183ULL ] = 1.0 ; t0 [ 184ULL ] = 1.0 ; t0 [ 185ULL ] =
1.0 ; t0 [ 186ULL ] = 0.0 ; t0 [ 187ULL ] = 293.15 ; t0 [ 188ULL ] = 0.0 ; t0
[ 189ULL ] = P_R_idx_3 ; t0 [ 190ULL ] = 0.0 ; t0 [ 191ULL ] = 0.0 ; t0 [
192ULL ] = 0.0 ; t0 [ 193ULL ] = 0.0 ; t0 [ 194ULL ] = 1.0 ; t0 [ 195ULL ] =
1.0 ; t0 [ 196ULL ] = 0.0 ; t0 [ 197ULL ] = 0.0 ; t0 [ 198ULL ] = 0.0 ; t0 [
199ULL ] = 0.0 ; t0 [ 200ULL ] = P_R_idx_6 ; t0 [ 201ULL ] = 0.0 ; t0 [
202ULL ] = 0.0 ; t0 [ 203ULL ] = 0.0 ; t0 [ 204ULL ] = 0.0 ; t0 [ 205ULL ] =
0.0 ; t0 [ 206ULL ] = 0.0 ; t0 [ 207ULL ] = 0.0 ; t0 [ 208ULL ] = 0.0 ; t0 [
209ULL ] = 0.0 ; t0 [ 210ULL ] = 0.0 ; t0 [ 211ULL ] = 0.0 ; t0 [ 212ULL ] =
0.0 ; t0 [ 213ULL ] = 1.0 ; t0 [ 214ULL ] = 1.0 ; t0 [ 215ULL ] = 1.0 ; t0 [
216ULL ] = 1.0 ; t0 [ 217ULL ] = 1.0 ; t0 [ 218ULL ] = 1.0 ; t0 [ 219ULL ] =
1.0 ; t0 [ 220ULL ] = 0.0 ; t0 [ 221ULL ] = 293.15 ; t0 [ 222ULL ] = 0.0 ; t0
[ 223ULL ] = P_R_idx_5 ; t0 [ 224ULL ] = 0.0 ; t0 [ 225ULL ] = 0.0 ; t0 [
226ULL ] = 0.0 ; t0 [ 227ULL ] = 0.0 ; t0 [ 228ULL ] = 1.0 ; t0 [ 229ULL ] =
1.0 ; t0 [ 230ULL ] = 0.0 ; t0 [ 231ULL ] = 0.0 ; t0 [ 232ULL ] = 0.0 ; t0 [
233ULL ] = 0.0 ; t0 [ 234ULL ] = P_R_idx_8 ; t0 [ 235ULL ] = 0.0 ; t0 [
236ULL ] = 0.0 ; t0 [ 237ULL ] = 0.0 ; t0 [ 238ULL ] = 0.0 ; t0 [ 239ULL ] =
0.0 ; t0 [ 240ULL ] = 0.0 ; t0 [ 241ULL ] = 0.0 ; t0 [ 242ULL ] = 0.0 ; t0 [
243ULL ] = 0.0 ; t0 [ 244ULL ] = 0.0 ; t0 [ 245ULL ] = 0.0 ; t0 [ 246ULL ] =
0.0 ; t0 [ 247ULL ] = 1.0 ; t0 [ 248ULL ] = 1.0 ; t0 [ 249ULL ] = 1.0 ; t0 [
250ULL ] = 1.0 ; t0 [ 251ULL ] = 1.0 ; t0 [ 252ULL ] = 1.0 ; t0 [ 253ULL ] =
1.0 ; t0 [ 254ULL ] = 0.0 ; t0 [ 255ULL ] = 293.15 ; t0 [ 256ULL ] = 0.0 ; t0
[ 257ULL ] = P_R_idx_7 ; t0 [ 258ULL ] = 0.0 ; t0 [ 259ULL ] = 0.0 ; t0 [
260ULL ] = 0.0 ; t0 [ 261ULL ] = 0.0 ; t0 [ 262ULL ] = 1.0 ; t0 [ 263ULL ] =
1.0 ; t0 [ 264ULL ] = 0.0 ; t0 [ 265ULL ] = 0.0 ; t0 [ 266ULL ] = 0.0 ; t0 [
267ULL ] = 0.0 ; t0 [ 268ULL ] = P_R_idx_10 ; t0 [ 269ULL ] = 0.0 ; t0 [
270ULL ] = 0.0 ; t0 [ 271ULL ] = 0.0 ; t0 [ 272ULL ] = 0.0 ; t0 [ 273ULL ] =
0.0 ; t0 [ 274ULL ] = 0.0 ; t0 [ 275ULL ] = 0.0 ; t0 [ 276ULL ] = 0.0 ; t0 [
277ULL ] = 0.0 ; t0 [ 278ULL ] = 0.0 ; t0 [ 279ULL ] = 0.0 ; t0 [ 280ULL ] =
0.0 ; t0 [ 281ULL ] = 1.0 ; t0 [ 282ULL ] = 1.0 ; t0 [ 283ULL ] = 1.0 ; t0 [
284ULL ] = 1.0 ; t0 [ 285ULL ] = 1.0 ; t0 [ 286ULL ] = 1.0 ; t0 [ 287ULL ] =
1.0 ; t0 [ 288ULL ] = 0.0 ; t0 [ 289ULL ] = 293.15 ; t0 [ 290ULL ] = 0.0 ; t0
[ 291ULL ] = P_R_idx_9 ; t0 [ 292ULL ] = 0.0 ; t0 [ 293ULL ] = 0.0 ; t0 [
294ULL ] = 0.0 ; t0 [ 295ULL ] = 0.0 ; t0 [ 296ULL ] = 1.0 ; t0 [ 297ULL ] =
1.0 ; t0 [ 298ULL ] = 0.0 ; t0 [ 299ULL ] = 0.0 ; t0 [ 300ULL ] = 0.0 ; t0 [
301ULL ] = 0.0 ; t0 [ 302ULL ] = P_R_idx_11 ; t0 [ 303ULL ] = 0.0 ; t0 [
304ULL ] = 0.0 ; t0 [ 305ULL ] = 0.0 ; t0 [ 306ULL ] = 0.0 ; t0 [ 307ULL ] =
0.0 ; t0 [ 308ULL ] = 0.0 ; t0 [ 309ULL ] = 0.0 ; t0 [ 310ULL ] = 0.0 ; t0 [
311ULL ] = 0.0 ; t0 [ 312ULL ] = 0.0 ; t0 [ 313ULL ] = 0.0 ; t0 [ 314ULL ] =
0.0 ; t0 [ 315ULL ] = 1.0 ; t0 [ 316ULL ] = 1.0 ; t0 [ 317ULL ] = 1.0 ; t0 [
318ULL ] = 1.0 ; t0 [ 319ULL ] = 1.0 ; t0 [ 320ULL ] = 1.0 ; t0 [ 321ULL ] =
1.0 ; t0 [ 322ULL ] = 0.0 ; t0 [ 323ULL ] = 0.0 ; t0 [ 324ULL ] = 0.0 ; t0 [
325ULL ] = 0.0 ; t0 [ 326ULL ] = 0.0 ; t0 [ 327ULL ] = 0.0 ; t0 [ 328ULL ] =
0.0 ; t0 [ 329ULL ] = 0.0 ; t0 [ 330ULL ] = 293.15 ; t0 [ 331ULL ] = 293.15 ;
t0 [ 332ULL ] = 0.0 ; t0 [ 333ULL ] = 293.15 ; t0 [ 334ULL ] = 0.0 ; t0 [
335ULL ] = 293.15 ; t0 [ 336ULL ] = 293.15 ; t0 [ 337ULL ] = 0.0 ; t0 [
338ULL ] = 0.0 ; t0 [ 339ULL ] = 20.0 ; t0 [ 340ULL ] = 293.15 ; t0 [ 341ULL
] = 293.15 ; t0 [ 342ULL ] = 0.0 ; t0 [ 343ULL ] = 0.0 ; t0 [ 344ULL ] = 20.0
; t0 [ 345ULL ] = 293.15 ; t0 [ 346ULL ] = 293.15 ; t0 [ 347ULL ] = 0.0 ; t0
[ 348ULL ] = 0.0 ; t0 [ 349ULL ] = 20.0 ; t0 [ 350ULL ] = 293.15 ; t0 [
351ULL ] = 293.15 ; t0 [ 352ULL ] = 0.0 ; t0 [ 353ULL ] = 0.0 ; t0 [ 354ULL ]
= 20.0 ; t0 [ 355ULL ] = 293.15 ; t0 [ 356ULL ] = 293.15 ; t0 [ 357ULL ] =
0.0 ; t0 [ 358ULL ] = 0.0 ; t0 [ 359ULL ] = 20.0 ; t0 [ 360ULL ] = 293.15 ;
t0 [ 361ULL ] = 293.15 ; t0 [ 362ULL ] = 0.0 ; t0 [ 363ULL ] = 0.0 ; t0 [
364ULL ] = 20.0 ; t0 [ 365ULL ] = 293.15 ; t0 [ 366ULL ] = 293.15 ; t0 [
367ULL ] = 0.0 ; t0 [ 368ULL ] = 293.15 ; t0 [ 369ULL ] = 293.15 ; t0 [
370ULL ] = 0.0 ; t0 [ 371ULL ] = 293.15 ; t0 [ 372ULL ] = 293.15 ; t0 [
373ULL ] = 0.0 ; t0 [ 374ULL ] = 0.0 ; t0 [ 375ULL ] = 293.15 ; t0 [ 376ULL ]
= 293.15 ; t0 [ 377ULL ] = 0.0 ; t0 [ 378ULL ] = 0.0 ; t0 [ 379ULL ] = 293.15
; t0 [ 380ULL ] = 293.15 ; t0 [ 381ULL ] = 0.0 ; t0 [ 382ULL ] = 0.0 ; t0 [
383ULL ] = 293.15 ; t0 [ 384ULL ] = 293.15 ; t0 [ 385ULL ] = 0.0 ; t0 [
386ULL ] = 0.0 ; t0 [ 387ULL ] = 293.15 ; t0 [ 388ULL ] = 293.15 ; t0 [
389ULL ] = 0.0 ; t0 [ 390ULL ] = 0.0 ; t0 [ 391ULL ] = 0.0 ; t0 [ 392ULL ] =
293.15 ; t0 [ 393ULL ] = 293.15 ; t0 [ 394ULL ] = 293.15 ; t0 [ 395ULL ] =
293.15 ; t0 [ 396ULL ] = 293.15 ; t0 [ 397ULL ] = 293.15 ; t0 [ 398ULL ] =
293.15 ; t0 [ 399ULL ] = 0.0 ; t0 [ 400ULL ] = 0.0 ; t0 [ 401ULL ] = 0.0 ; t0
[ 402ULL ] = 0.0 ; t0 [ 403ULL ] = 0.0 ; t0 [ 404ULL ] = 0.0 ; t0 [ 405ULL ]
= 0.0 ; t0 [ 406ULL ] = 0.0 ; t0 [ 407ULL ] = 0.0 ; t0 [ 408ULL ] = 0.0 ; t0
[ 409ULL ] = 0.0 ; t0 [ 410ULL ] = 0.0 ; t0 [ 411ULL ] = 0.0 ; t0 [ 412ULL ]
= 0.0 ; t0 [ 413ULL ] = 0.0 ; t0 [ 414ULL ] = 0.0 ; t0 [ 415ULL ] = 0.0 ; t0
[ 416ULL ] = 0.0 ; t0 [ 417ULL ] = 0.0 ; t0 [ 418ULL ] = 0.0 ; t0 [ 419ULL ]
= 0.0 ; t0 [ 420ULL ] = 0.0 ; t0 [ 421ULL ] = 0.0 ; t0 [ 422ULL ] = 0.0 ; t0
[ 423ULL ] = 0.0 ; t0 [ 424ULL ] = 0.0 ; t0 [ 425ULL ] = 0.0 ; t0 [ 426ULL ]
= 0.0 ; t0 [ 427ULL ] = 0.0 ; t0 [ 428ULL ] = 0.0 ; t0 [ 429ULL ] = 0.0 ; t0
[ 430ULL ] = 0.0 ; t0 [ 431ULL ] = 0.0 ; t0 [ 432ULL ] = 0.0 ; t0 [ 433ULL ]
= 0.0 ; t0 [ 434ULL ] = 0.0 ; t0 [ 435ULL ] = 0.0 ; t0 [ 436ULL ] = 0.0 ; t0
[ 437ULL ] = 0.0 ; t0 [ 438ULL ] = 0.0 ; t0 [ 439ULL ] = 0.0 ; t0 [ 440ULL ]
= 0.0 ; t0 [ 441ULL ] = 0.0 ; t0 [ 442ULL ] = 0.0 ; t0 [ 443ULL ] = 0.0 ; t0
[ 444ULL ] = 0.0 ; t0 [ 445ULL ] = 0.0 ; t0 [ 446ULL ] = 0.0 ; t0 [ 447ULL ]
= 0.0 ; t0 [ 448ULL ] = 0.0 ; t0 [ 449ULL ] = 0.0 ; t0 [ 450ULL ] = 0.0 ; t0
[ 451ULL ] = 0.0 ; t0 [ 452ULL ] = 0.0 ; t0 [ 453ULL ] = 0.0 ; t0 [ 454ULL ]
= 0.0 ; t0 [ 455ULL ] = 0.0 ; t0 [ 456ULL ] = 0.0 ; t0 [ 457ULL ] = 0.0 ; t0
[ 458ULL ] = 0.0 ; t0 [ 459ULL ] = 0.0 ; t0 [ 460ULL ] = 0.0 ; t0 [ 461ULL ]
= 0.0 ; t0 [ 462ULL ] = 0.0 ; t0 [ 463ULL ] = 0.0 ; t0 [ 464ULL ] = 0.0 ; t0
[ 465ULL ] = 0.0 ; t0 [ 466ULL ] = 0.0 ; t0 [ 467ULL ] = 0.0 ; t0 [ 468ULL ]
= 0.0 ; t0 [ 469ULL ] = 0.0 ; t0 [ 470ULL ] = 0.0 ; t0 [ 471ULL ] = 0.0 ; t0
[ 472ULL ] = 0.0 ; t0 [ 473ULL ] = 0.0 ; t0 [ 474ULL ] = 0.0 ; t0 [ 475ULL ]
= 0.0 ; t0 [ 476ULL ] = 0.0 ; t0 [ 477ULL ] = 0.0 ; t0 [ 478ULL ] = 0.0 ; t0
[ 479ULL ] = 0.0 ; t0 [ 480ULL ] = 0.0 ; t0 [ 481ULL ] = 0.0 ; t0 [ 482ULL ]
= 0.0 ; t0 [ 483ULL ] = 0.0 ; t0 [ 484ULL ] = 0.0 ; t0 [ 485ULL ] = 0.0 ; t0
[ 486ULL ] = 0.0 ; t0 [ 487ULL ] = 0.0 ; t0 [ 488ULL ] = 0.0 ; t0 [ 489ULL ]
= 0.0 ; t0 [ 490ULL ] = 0.0 ; t0 [ 491ULL ] = 0.0 ; t0 [ 492ULL ] = 0.0 ; t0
[ 493ULL ] = 0.0 ; t0 [ 494ULL ] = 0.0 ; t0 [ 495ULL ] = 0.0 ; t0 [ 496ULL ]
= 0.0 ; t0 [ 497ULL ] = 0.0 ; t0 [ 498ULL ] = 0.0 ; t0 [ 499ULL ] = 0.0 ; t0
[ 500ULL ] = 0.0 ; t0 [ 501ULL ] = 0.0 ; t0 [ 502ULL ] = 0.0 ; t0 [ 503ULL ]
= 0.0 ; t0 [ 504ULL ] = 0.0 ; for ( b = 0 ; b < 505 ; b ++ ) { out . mX [ b ]
= t0 [ b ] ; } ( void ) LC ; ( void ) t2 ; return 0 ; }
