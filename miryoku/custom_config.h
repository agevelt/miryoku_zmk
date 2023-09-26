
#if defined (MIRYOKU_KEYBOARD_ADV360PRO)

#define XXX &none

#define MIRYOKU_LAYER_OLDBASE \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,     &kp S,  &kp D, &kp F,    &kp G,             &kp H,  &kp J,  &kp K, &kp L,   &kp SEMI,   \
&kp Z,&kp X,     &kp C,             &kp V,             &kp B,             &kp N,             &kp M,             &kp COMMA,  &kp DOT,  &kp FSLH, \
XXX,            XXX,     &kp LCTRL,  &kp LEFT_ALT, &kp LEFT_WIN,                &kp ENTER,  &kp BACKSPACE,     &kp SPACE,          XXX,                  XXX

#define MIRYOKU_LAYERMAPPING_OLDBASE MIRYOKU_LAYOUTMAPPING_OLDBASE

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(OLDBASE,"OldBase")

#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_OLDBASE 10


// With old layout shortcut:
#define MIRYOKU_LAYOUTMAPPING_ADV360PRO( \
     K00, K01, K02, K03, K04,                                                        K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                                                        K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                                                        K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                                                        K35, K36, K37, N38, N39 \
) \
XXX  XXX  XXX  XXX  XXX  XXX  XXX                                               XXX  XXX  XXX  XXX  XXX  XXX  XXX \
XXX  K00  K01  K02  K03  K04  XXX                                               XXX  K05  K06  K07  K08  K09  XXX \
XXX  K10  K11  K12  K13  K14  XXX       XXX  XXX                 XXX  XXX    &to 10  K15  K16  K17  K18  K19  XXX \
XXX  K20  K21  K22  K23  K24                 XXX                 XXX                 K25  K26  K27  K28  K29  XXX \
XXX  XXX  XXX  XXX  XXX            K32  K33  K34                 K35  K36  K37            XXX  XXX  XXX  XXX  &to 10

// Old layout:
#define MIRYOKU_LAYOUTMAPPING_OLDBASE( \
     K00, K01, K02, K03, K04,                                                        K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                                                        K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                                                        K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                                                        K35, K36, K37, N38, N39 \
) \
 &kp EQUAL &kp N1 &kp N2 &kp N3 &kp N4 &kp N5   &tog 1                                                         &none          &kp N6 &kp N7  &kp N8  &kp N9 &kp N0   &kp MINUS \
   &kp TAB K00  K01  K02  K03  K04         &kp LS(TAB)                                                         &to 1          K05      K06     K07      K08    K09   &kp BSLH \
   &kp ESC K10  K11  K12  K13  K14             &kp TAB            XXX  XXX           &kp PG_UP  &kp RCTRL      &to 1          K15      K16     K17      K18    K19   &kp SQT \
 &kp LSHFT K20  K21  K22  K23  K24                                     XXX           &kp PG_DN                                K25      K26     K27      K28    K29   &kp RSHFT \
     &none &kp GRAVE &kp CAPS &kp LEFT &kp RIGHT             K32  K33  K34           K35       K36     K37                        &kp DOWN  &kp UP &kp LBKT &kp RBKT &none

#endif
