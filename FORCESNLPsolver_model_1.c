/* This function was automatically generated by CasADi */#ifdef __cplusplus
extern "C" {
#endif

#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else /* CODEGEN_PREFIX */
  #define CASADI_PREFIX(ID) FORCESNLPsolver_model_1_ ## ID
#endif /* CODEGEN_PREFIX */

#include <math.h>

#include "FORCESNLPsolver/include/FORCESNLPsolver.h"

#define PRINTF printf
FORCESNLPsolver_FLOAT CASADI_PREFIX(sq)(FORCESNLPsolver_FLOAT x) { return x*x;}
#define sq(x) CASADI_PREFIX(sq)(x)

FORCESNLPsolver_FLOAT CASADI_PREFIX(sign)(FORCESNLPsolver_FLOAT x) { return x<0 ? -1 : x>0 ? 1 : x;}
#define sign(x) CASADI_PREFIX(sign)(x)

static const int CASADI_PREFIX(s0)[] = {24, 1, 0, 24, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23};
#define s0 CASADI_PREFIX(s0)
static const int CASADI_PREFIX(s1)[] = {20, 1, 0, 20, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
#define s1 CASADI_PREFIX(s1)
static const int CASADI_PREFIX(s2)[] = {1, 1, 0, 1, 0};
#define s2 CASADI_PREFIX(s2)
static const int CASADI_PREFIX(s3)[] = {1, 24, 0, 0, 0, 0, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
#define s3 CASADI_PREFIX(s3)
static const int CASADI_PREFIX(s4)[] = {20, 24, 0, 2, 4, 6, 8, 9, 10, 11, 12, 15, 18, 21, 24, 25, 26, 27, 28, 29, 30, 31, 32, 32, 32, 32, 32, 0, 4, 1, 5, 2, 6, 3, 7, 0, 1, 2, 3, 0, 4, 8, 1, 5, 9, 2, 6, 10, 3, 7, 11, 12, 13, 14, 15, 16, 17, 18, 19};
#define s4 CASADI_PREFIX(s4)
/* evaluate_stages */
int FORCESNLPsolver_model_1(const FORCESNLPsolver_FLOAT** arg, FORCESNLPsolver_FLOAT** res) {
     FORCESNLPsolver_FLOAT a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,a26,a27,a28,a29,a30,a31,a32,a33,a34,a35,a36,a37,a38,a39,a40,a41,a42,a43,a44,a45,a46,a47,a48,a49,a50,a51,a52,a53,a54,a55,a56,a57,a58,a59;
         a0=arg[0] ? arg[0][4] : 0;
         a1=arg[1] ? arg[1][0] : 0;
         a2=(a0-a1);
         a3=1000000.;
  a2=(a3*a2);
  a1=(a0-a1);
         a4=(a2*a1);
         a5=arg[0] ? arg[0][5] : 0;
         a6=arg[1] ? arg[1][1] : 0;
         a7=(a5-a6);
  a7=(a3*a7);
  a6=(a5-a6);
         a8=(a7*a6);
  a4=(a4+a8);
  a8=arg[0] ? arg[0][6] : 0;
         a9=arg[1] ? arg[1][2] : 0;
         a10=(a8-a9);
  a10=(a3*a10);
  a9=(a8-a9);
         a11=(a10*a9);
  a4=(a4+a11);
  a11=arg[0] ? arg[0][7] : 0;
         a12=arg[1] ? arg[1][3] : 0;
         a13=(a11-a12);
  a13=(a3*a13);
  a12=(a11-a12);
         a14=(a13*a12);
  a4=(a4+a14);
  a14=arg[0] ? arg[0][8] : 0;
         a15=arg[1] ? arg[1][4] : 0;
         a16=(a14-a15);
         a17=1.0000000000000000e-03;
  a16=(a17*a16);
  a15=(a14-a15);
         a18=(a16*a15);
  a4=(a4+a18);
  a18=arg[0] ? arg[0][9] : 0;
         a19=arg[1] ? arg[1][5] : 0;
         a20=(a18-a19);
  a20=(a17*a20);
  a19=(a18-a19);
         a21=(a20*a19);
  a4=(a4+a21);
  a21=arg[0] ? arg[0][10] : 0;
         a22=arg[1] ? arg[1][6] : 0;
         a23=(a21-a22);
  a23=(a17*a23);
  a22=(a21-a22);
         a24=(a23*a22);
  a4=(a4+a24);
  a24=arg[0] ? arg[0][11] : 0;
         a25=arg[1] ? arg[1][7] : 0;
         a26=(a24-a25);
  a26=(a17*a26);
  a25=(a24-a25);
         a27=(a26*a25);
  a4=(a4+a27);
  a27=arg[0] ? arg[0][12] : 0;
         a28=arg[1] ? arg[1][8] : 0;
         a29=(a27-a28);
  a29=(a17*a29);
  a28=(a27-a28);
         a30=(a29*a28);
  a4=(a4+a30);
  a30=arg[0] ? arg[0][13] : 0;
         a31=arg[1] ? arg[1][9] : 0;
         a32=(a30-a31);
  a32=(a17*a32);
  a31=(a30-a31);
         a33=(a32*a31);
  a4=(a4+a33);
  a33=arg[0] ? arg[0][14] : 0;
         a34=arg[1] ? arg[1][10] : 0;
         a35=(a33-a34);
  a35=(a17*a35);
  a34=(a33-a34);
         a36=(a35*a34);
  a4=(a4+a36);
  a36=arg[0] ? arg[0][15] : 0;
         a37=arg[1] ? arg[1][11] : 0;
         a38=(a36-a37);
  a38=(a17*a38);
  a37=(a36-a37);
         a39=(a38*a37);
  a4=(a4+a39);
  a39=arg[0] ? arg[0][16] : 0;
         a40=arg[1] ? arg[1][12] : 0;
         a41=(a39-a40);
  a41=(a17*a41);
  a40=(a39-a40);
         a42=(a41*a40);
  a4=(a4+a42);
  a42=arg[0] ? arg[0][17] : 0;
         a43=arg[1] ? arg[1][13] : 0;
         a44=(a42-a43);
  a44=(a17*a44);
  a43=(a42-a43);
         a45=(a44*a43);
  a4=(a4+a45);
  a45=arg[0] ? arg[0][18] : 0;
         a46=arg[1] ? arg[1][14] : 0;
         a47=(a45-a46);
  a47=(a17*a47);
  a46=(a45-a46);
         a48=(a47*a46);
  a4=(a4+a48);
  a48=arg[0] ? arg[0][19] : 0;
         a49=arg[1] ? arg[1][15] : 0;
         a50=(a48-a49);
  a50=(a17*a50);
  a49=(a48-a49);
         a51=(a50*a49);
  a4=(a4+a51);
  a51=arg[0] ? arg[0][20] : 0;
         a52=arg[1] ? arg[1][16] : 0;
         a53=(a51-a52);
  a53=(a17*a53);
  a51=(a51-a52);
  a52=(a53*a51);
  a4=(a4+a52);
  a52=arg[0] ? arg[0][21] : 0;
         a54=arg[1] ? arg[1][17] : 0;
         a55=(a52-a54);
  a55=(a17*a55);
  a52=(a52-a54);
  a54=(a55*a52);
  a4=(a4+a54);
  a54=arg[0] ? arg[0][22] : 0;
         a56=arg[1] ? arg[1][18] : 0;
         a57=(a54-a56);
  a57=(a17*a57);
  a54=(a54-a56);
  a56=(a57*a54);
  a4=(a4+a56);
  a56=arg[0] ? arg[0][23] : 0;
         a58=arg[1] ? arg[1][19] : 0;
         a59=(a56-a58);
  a59=(a17*a59);
  a56=(a56-a58);
  a58=(a59*a56);
  a4=(a4+a58);
  if (res[0]!=0) res[0][0]=a4;
  a1=(a3*a1);
  a2=(a2+a1);
  if (res[1]!=0) res[1][0]=a2;
  a6=(a3*a6);
  a7=(a7+a6);
  if (res[1]!=0) res[1][1]=a7;
  a9=(a3*a9);
  a10=(a10+a9);
  if (res[1]!=0) res[1][2]=a10;
  a3=(a3*a12);
  a13=(a13+a3);
  if (res[1]!=0) res[1][3]=a13;
  a15=(a17*a15);
  a16=(a16+a15);
  if (res[1]!=0) res[1][4]=a16;
  a19=(a17*a19);
  a20=(a20+a19);
  if (res[1]!=0) res[1][5]=a20;
  a22=(a17*a22);
  a23=(a23+a22);
  if (res[1]!=0) res[1][6]=a23;
  a25=(a17*a25);
  a26=(a26+a25);
  if (res[1]!=0) res[1][7]=a26;
  a28=(a17*a28);
  a29=(a29+a28);
  if (res[1]!=0) res[1][8]=a29;
  a31=(a17*a31);
  a32=(a32+a31);
  if (res[1]!=0) res[1][9]=a32;
  a34=(a17*a34);
  a35=(a35+a34);
  if (res[1]!=0) res[1][10]=a35;
  a37=(a17*a37);
  a38=(a38+a37);
  if (res[1]!=0) res[1][11]=a38;
  a40=(a17*a40);
  a41=(a41+a40);
  if (res[1]!=0) res[1][12]=a41;
  a43=(a17*a43);
  a44=(a44+a43);
  if (res[1]!=0) res[1][13]=a44;
  a46=(a17*a46);
  a47=(a47+a46);
  if (res[1]!=0) res[1][14]=a47;
  a49=(a17*a49);
  a50=(a50+a49);
  if (res[1]!=0) res[1][15]=a50;
  a51=(a17*a51);
  a53=(a53+a51);
  if (res[1]!=0) res[1][16]=a53;
  a52=(a17*a52);
  a55=(a55+a52);
  if (res[1]!=0) res[1][17]=a55;
  a54=(a17*a54);
  a57=(a57+a54);
  if (res[1]!=0) res[1][18]=a57;
  a17=(a17*a56);
  a59=(a59+a17);
  if (res[1]!=0) res[1][19]=a59;
  a59=5.0000000000000003e-02;
  a17=(a59*a14);
  a0=(a0+a17);
  a17=1.2500000000000002e-03;
  a56=arg[0] ? arg[0][0] : 0;
  a57=(a17*a56);
  a0=(a0+a57);
  if (res[2]!=0) res[2][0]=a0;
  a0=(a59*a18);
  a5=(a5+a0);
  a0=arg[0] ? arg[0][1] : 0;
  a57=(a17*a0);
  a5=(a5+a57);
  if (res[2]!=0) res[2][1]=a5;
  a5=(a59*a21);
  a8=(a8+a5);
  a5=arg[0] ? arg[0][2] : 0;
  a57=(a17*a5);
  a8=(a8+a57);
  a57=-1.2250000000000004e-02;
  a8=(a8+a57);
  if (res[2]!=0) res[2][2]=a8;
  a8=(a59*a24);
  a11=(a11+a8);
  a8=arg[0] ? arg[0][3] : 0;
  a57=(a17*a8);
  a11=(a11+a57);
  if (res[2]!=0) res[2][3]=a11;
  a56=(a59*a56);
  a56=(a14+a56);
  if (res[2]!=0) res[2][4]=a56;
  a0=(a59*a0);
  a0=(a18+a0);
  if (res[2]!=0) res[2][5]=a0;
  a5=(a59*a5);
  a5=(a21+a5);
  a0=-4.9000000000000005e-01;
  a5=(a5+a0);
  if (res[2]!=0) res[2][6]=a5;
  a8=(a59*a8);
  a8=(a24+a8);
  if (res[2]!=0) res[2][7]=a8;
  a8=-20.;
  a14=(a8*a14);
  if (res[2]!=0) res[2][8]=a14;
  a18=(a8*a18);
  if (res[2]!=0) res[2][9]=a18;
  a21=(a8*a21);
  if (res[2]!=0) res[2][10]=a21;
  a24=(a8*a24);
  if (res[2]!=0) res[2][11]=a24;
  a27=(a8*a27);
  if (res[2]!=0) res[2][12]=a27;
  a30=(a8*a30);
  if (res[2]!=0) res[2][13]=a30;
  a33=(a8*a33);
  if (res[2]!=0) res[2][14]=a33;
  a36=(a8*a36);
  if (res[2]!=0) res[2][15]=a36;
  a39=(a8*a39);
  if (res[2]!=0) res[2][16]=a39;
  a42=(a8*a42);
  if (res[2]!=0) res[2][17]=a42;
  a45=(a8*a45);
  if (res[2]!=0) res[2][18]=a45;
  a48=(a8*a48);
  if (res[2]!=0) res[2][19]=a48;
  if (res[3]!=0) res[3][0]=a17;
  if (res[3]!=0) res[3][1]=a59;
  if (res[3]!=0) res[3][2]=a17;
  if (res[3]!=0) res[3][3]=a59;
  if (res[3]!=0) res[3][4]=a17;
  if (res[3]!=0) res[3][5]=a59;
  if (res[3]!=0) res[3][6]=a17;
  if (res[3]!=0) res[3][7]=a59;
  a17=1.;
  if (res[3]!=0) res[3][8]=a17;
  if (res[3]!=0) res[3][9]=a17;
  if (res[3]!=0) res[3][10]=a17;
  if (res[3]!=0) res[3][11]=a17;
  if (res[3]!=0) res[3][12]=a59;
  if (res[3]!=0) res[3][13]=a17;
  if (res[3]!=0) res[3][14]=a8;
  if (res[3]!=0) res[3][15]=a59;
  if (res[3]!=0) res[3][16]=a17;
  if (res[3]!=0) res[3][17]=a8;
  if (res[3]!=0) res[3][18]=a59;
  if (res[3]!=0) res[3][19]=a17;
  if (res[3]!=0) res[3][20]=a8;
  if (res[3]!=0) res[3][21]=a59;
  if (res[3]!=0) res[3][22]=a17;
  if (res[3]!=0) res[3][23]=a8;
  if (res[3]!=0) res[3][24]=a8;
  if (res[3]!=0) res[3][25]=a8;
  if (res[3]!=0) res[3][26]=a8;
  if (res[3]!=0) res[3][27]=a8;
  if (res[3]!=0) res[3][28]=a8;
  if (res[3]!=0) res[3][29]=a8;
  if (res[3]!=0) res[3][30]=a8;
  if (res[3]!=0) res[3][31]=a8;
  return 0;
}

int FORCESNLPsolver_model_1_init(int *f_type, int *n_in, int *n_out, int *sz_arg, int* sz_res) {
  *f_type = 1;
  *n_in = 2;
  *n_out = 4;
  *sz_arg = 2;
  *sz_res = 4;
  return 0;
}

int FORCESNLPsolver_model_1_sparsity(int i, int *nrow, int *ncol, const int **colind, const int **row) {
  const int* s;
  switch (i) {
    case 0:
      s = s0; break;
    case 1:
    case 4:
      s = s1; break;
    case 2:
      s = s2; break;
    case 3:
      s = s3; break;
    case 5:
      s = s4; break;
    default:
      return 1;
  }

  *nrow = s[0];
  *ncol = s[1];
  *colind = s + 2;
  *row = s + 2 + (*ncol + 1);
  return 0;
}

int FORCESNLPsolver_model_1_work(int *sz_iw, int *sz_w) {
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 60;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
