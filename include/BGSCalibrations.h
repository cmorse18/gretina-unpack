#ifndef __BGSCALIBRATIONS_H
#define __BGSCALIBRATIONS_H

/* Low-energy DSSD calibrations are in x-intercept form
   where La is the x-intercept and Lm is the slope:
   E = (chan-La)*Lm                                      */

static double FPLm[4][nfp]=
  { {0.38567, 0.38755, 0.38355, 0.39775, 0.40516, 
     0.40761, 0.40334, 0.39567, 0.41045, 0.39561,
     0.39879, 0.39952, 0.40549, 0.39379, 0.38948, 
     0.39093, 0.38985, 0.40828, 0.39839, 0.39286,
     0.38660, 0.38410, 0.41764, 0.40687, 0.41317, 
     0.41025, 0.40646, 0.37754, 0.39041, 0.38581,
     0.41414, 0.40850},
    {0.38536, 0.38722, 0.41711, 0.40445, 0.40445, 
     0.41174, 0.39901, 0.40266, 0.38800, 0.38773,
     0.40527, 0.40206, 0.41233, 0.40786, 0.40665, 
     0.38998, 0.37139, 0.38966, 0.41488, 0.38989,
     0.38337, 0.39452, 0.39607, 0.40713, 0.40504, 
     0.40143, 0.39297, 0.41597, 0.41274, 0.41321,
     0.38263, 0.39777},
    {0.40196, 0.39654, 0.40922, 0.39640, 0.39415, 
     0.40409, 0.41103, 0.39602, 0.39350, 0.39117,
     0.40709, 0.38373, 0.39514, 0.39957, 0.38748,
     0.39028, 0.42135, 0.41208, 0.43360, 0.42313,
     0.40217, 0.40332, 0.42354, 0.40321, 0.40695, 
     0.40341, 0.41102, 0.39843, 0.00   , 0.40137,
     0.42325, 0.43058},
    {0.37964, 0.39102, 0.00   , 0.00   , 0.39383, 
     0.40519, 0.40440, 0.39581, 0.40981, 0.40754,
     0.40817, 0.39413, 0.39594, 0.40817, 0.38928, 
     0.37773, 0.40127, 0.38308, 0.39886, 0.40586,
     0.40407, 0.39810, 0.39879, 0.40221, 0.40492, 
     0.40480, 0.40242, 0.39609, 0.38086, 0.00   ,
     0.38830, 0.39107} };

static double FPLa[4][nfp]=
  { {277.294, 200.049, 248.874, 262.162, 260.334,
     300.405, 288.649, 212.347, 287.475, 355.697,
     289.767, 245.115, 292.297, 276.811, 167.904, 
     220.203, 289.965, 265.663, 271.688, 383.171,
     240.110, 274.285, 207.195, 259.827, 229.801, 
     209.357, 200.407, 178.621, 338.800, 407.605,
     255.234, 275.388},
    {221.564, 117.042, 105.352,  77.903,  91.543, 
     165.802, 119.248, 130.250, 107.978, -96.844,
     66.254,  22.694,  77.905,  61.129,  36.507,  
     19.132, 110.791,  88.677, 179.554,  56.395,
     40.221,  45.025,  88.127,  86.078, 101.880,  
     21.292,  52.531,  45.594,  67.897,  28.358,
     55.263, -31.898},
    {270.888, 196.347, 201.149, 168.090, 202.095, 
     154.645, 250.206, 147.949, 186.273, 149.687,
     179.061, 155.883, 143.693, 166.081, 185.372, 
     140.262,  40.078,  76.644, 152.468,  72.844,
     68.534 ,  40.018,  95.513,  40.864,  73.652,  
     48.370 ,  15.335,  -2.521,   0.00 ,   5.856,
     -28.634,  11.328},
    {306.813, 175.914,   0.00 ,   0.00 , 202.075,
     168.393, 145.829, 194.733, 226.582,  52.998,
     257.790, 216.805, 185.047, 195.697, 170.203, 
     194.580, 319.414, 207.482, 280.456, 193.164,
     219.647, 184.169, 126.888,  61.060, 159.438, 
      83.765, 199.480, 108.212,1551.500,   0.00 ,
     106.044, 273.788} };

static double PTLm[npt] = 
  { 0.5000, 0.5000, 0.5000, 0.5000, 0.5000, 
    0.5000, 0.5000, 0.5000, 0.5000, 0.5000, 
    0.5000, 0.5000, 0.5000, 0.5000, 0.5000, 
    0.5000, 0.5000, 0.5000, 0.5000, 0.5000, 
    0.5000, 0.5000, 0.5000, 0.5000, 0.5000, 
    0.5000, 0.5000, 0.5000, 0.5000, 0.5000, 
    0.5000, 0.5000 };

static double PTLa[npt] = 
  { 100.00, 100.00, 100.00, 100.00, 100.00, 
    100.00, 100.00, 100.00, 100.00, 100.00, 
    100.00, 100.00, 100.00, 100.00, 100.00, 
    100.00, 100.00, 100.00, 100.00, 100.00, 
    100.00, 100.00, 100.00, 100.00, 100.00, 
    100.00, 100.00, 100.00, 100.00, 100.00, 
    100.00, 100.00 };

static double USLm[nus] = 
  { 0.5000, 0.5000, 0.5000, 0.5000, 0.5000, 
    0.5000, 0.5000, 0.5000, 0.5000, 0.5000, 
    0.5000, 0.5000, 0.5000, 0.5000, 0.5000, 
    0.5000, 0.5000, 0.5000, 0.5000, 0.5000, 
    0.5000, 0.5000, 0.5000, 0.5000 };

static double USLa[nus] = 
  { 100.00, 100.00, 100.00, 100.00, 100.00, 
    100.00, 100.00, 100.00, 100.00, 100.00, 
    100.00, 100.00, 100.00, 100.00, 100.00, 
    100.00, 100.00, 100.00, 100.00, 100.00, 
    100.00, 100.00, 100.00, 100.00 };

/* High energy calibrations are a two-part function:
   Below about 15MeV it is linear, above 15MeV, it is exponential.
   The plan is to calculate an energy from both the linear and
   exponential curves, and take the higher energy of the two.
   The linear portion in x-intercept form
   where Ha is the x-intercept and Hm is the slope:
   E = (chan - Ha)*Hm
   The exponential part is E = Hc*exp(Hd*chan)                  */

/* Linear part... */

static double FPHm[4][nfp]=
  { {3.85909, 3.88224, 3.84979, 3.98166, 4.07896, 
     4.09014, 4.01844, 4.01548, 4.13867, 3.89223,
     4.01656, 3.99206, 4.00193, 3.92388, 4.03760, 
     3.91206, 3.91627, 4.07411, 3.94909, 3.91256,
     3.86244, 3.87014, 4.16371, 4.06254, 4.14876, 
     4.07730, 4.07777, 3.80464, 3.91093, 3.87349,
     4.12734, 4.08181},
    {3.79971, 3.81783, 4.06865, 3.99252, 4.00141, 
     4.01633, 3.94035, 3.95654, 3.85561, 4.01307,
     4.01675, 3.96301, 4.04956, 3.99379, 4.01296, 
     3.87565, 3.64236, 3.84888, 4.08773, 3.86043,
     3.79442, 3.87036, 3.92057, 3.97941, 4.01492, 
     3.91358, 3.86371, 4.08966, 4.05930, 4.03781,
     3.75580, 3.89805},
    {3.98776, 3.94221, 4.00505, 3.94009, 3.94477, 
     4.02961, 4.11798, 3.94163, 3.92101, 3.86272,
     4.01707, 3.79654, 3.92254, 3.96492, 3.87346, 
     3.88076, 4.32580, 4.11660, 4.28999, 4.17687,
     4.04495, 4.04312, 4.24779, 3.99668, 4.05067, 
     4.00032, 4.14634, 3.95431, 0.00   , 4.05533,
     4.27064, 4.32823},
    {3.78082, 3.87622, 0.00   , 0.00   , 3.93751, 
     4.02456, 4.04966, 3.93885, 4.06475, 4.04971,
     4.03187, 3.95252, 3.94569, 4.08039, 3.88327, 
     3.77609, 4.03698, 3.82977, 3.99025, 4.05700,
     4.03217, 3.98842, 3.98714, 4.03683, 4.07700, 
     4.03357, 4.02575, 3.96590, 3.93174, 0.00   ,
     3.91306, 3.93464} };

static double FPHa[4][nfp]=
  { {86.469 , 102.127,  70.581,  69.368,  86.612,
     75.047 , 114.865,  80.233,  83.336,  95.236,
     105.001,  75.649,  84.132, 103.851, 100.404,  
     82.964 , 108.828,  88.534, 102.711, 102.937,
     95.091 ,  98.412, 109.233, 110.485, 113.737, 
     103.636, 119.908,  97.677, 133.284, 104.529,
     100.639,  97.414},
    {115.394, 116.136, 105.826,  83.474, 101.537, 
     128.839, 129.925, 126.457, 123.268, 114.143,
     104.091,  96.160, 106.269, 103.536, 107.415, 
     122.271, 112.505,  97.632, 126.429, 101.312,
     122.512, 114.321, 101.347, 116.901, 116.755, 
     106.167, 126.967,  82.514, 100.170, 104.688,
     113.154,  89.683},
    {90.979 , 102.186,  88.941,  82.860,  90.923, 
     82.186 , 103.432,  80.038,  91.896,  78.075,
     82.598 ,  84.937,  94.549,  68.280, 108.340,  
     73.038 ,  93.353,  77.184,  82.172,  82.948,
     77.059 ,  71.149,  56.740,  40.878,  65.351,  
     51.208 ,  87.610,  63.747,  0.00  ,  79.858,
     52.593 ,  58.884},
    {104.728,  91.042,   0.00 ,   0.00 , 114.975, 
     85.386 , 102.109,  85.169, 131.733,  90.951,
     148.674, 100.202,  90.892,  98.489, 112.592, 
     105.203, 139.697, 102.027, 114.923, 114.587,
     109.695, 109.451, 112.304,  73.557, 112.917, 
     115.056, 120.000, 109.657, 279.938,   0.00 ,
     80.660 , 105.442} };

static double WHm[nws] = 
  { 5.0000, 5.0000, 5.0000, 5.0000, 5.0000, 
    5.0000, 5.0000, 5.0000 };
static double WHa[nws] = 
  { 100.00, 100.00, 100.00, 100.00, 100.00,
    100.00, 100.00, 100.00 };

static double USHm[nus] = 	/* slope (kev/channel)*/
  {3.97939, 4.12788, 4.11021, 4.09295, 4.10258, 
   4.16372, 3.99804, 3.98539, 3.84327, 4.07107,
   4.15161, 4.04974, 4.03992, 4.16044, 3.87607, 
   3.89941, 4.06341, 4.01111, 4.12600, 3.97428,
   4.02051, 4.29378, 0.00000, 4.04046};

static double USHa[nus] = 	/* x-intercept (keV)	*/
  {109.853,  88.167, 118.529, 112.977, 123.625, 
   113.425, 134.101, 104.263, 102.580,  73.332,
   109.123,  87.032,  90.390,  93.515,  80.377,  
    39.859,  51.806,  18.989,   9.857, -12.059,
    51.518,  38.301,   0.000,   7.998};

/* Exponential part... */

static double FPHc[4][nfp] = 
  { {0.0440, 0.0440, 0.0440, 0.0440, 0.0440, // Top front
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440}, 
    {0.0440, 0.0440, 0.0440, 0.0440, 0.0440, // West front
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440}, 
    {0.0440, 0.0440, 0.0440, 0.0440, 0.0440, // East front
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440}, 
    {0.0440, 0.0440, 0.0440, 0.0440, 0.0440, // All backs
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
     0.0440, 0.0440} };
static double FPHd[4][nfp] = 
  { {0.00410, 0.00410, 0.00410, 0.00410, 0.00410, // Top front
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410}, 
    {0.00410, 0.00410, 0.00410, 0.00410, 0.00410, // West front
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410}, 
    {0.00410, 0.00410, 0.00410, 0.00410, 0.00410, // East front
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410}, 
    {0.00410, 0.00410, 0.00410, 0.00410, 0.00410, // All backs
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
     0.00410, 0.00410} };

static double WHc[nws] = 
  { 0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
    0.0440, 0.0440, 0.0440 };
static double WHd[nws] = 
  { 0.00410, 0.00410, 0.00410, 0.00410, 0.00410,
    0.00410, 0.00410, 0.00410 };

static double USHc[nus] = 
  { 0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
    0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
    0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
    0.0440, 0.0440, 0.0440, 0.0440, 0.0440, 
    0.0440, 0.0440, 0.0440, 0.0440 };
static double USHd[nus] = 
  { 0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
    0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
    0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
    0.00410, 0.00410, 0.00410, 0.00410, 0.00410, 
    0.00410, 0.00410, 0.00410, 0.00410 };

static double GEa[nge] = 
  { 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
    0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
    0.0000, 0.0000 };
static double GEb[nge] = 
  { 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
    0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
    0.0000, 0.0000 };
static double GEc[nge] = 
  { 0.5000, 0.5000, 0.5000, 0.5000, 0.5000,
    0.5000, 0.5000, 0.5000, 0.5000, 0.5000,
    0.5000, 0.5000 };
static double GEd[nge] = 
  { 0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
    0.0000, 0.0000, 0.0000, 0.0000, 0.0000,
    0.0000, 0.0000 };

/* New from Ken 10/23/11 */

static double GTm[nge]=
  { 0.3333, 0.3333, 0.3333, 0.3333, 0.3333,	
    0.3333, 0.3333, 0.3333, 0.3333, 0.3333,
    0.3333, 0.3333};

double GTa[nge]=
  {2000.0, 2000.0, 2000.0, 2000.0, 2000.0,
   2000.0, 2000.0, 2000.0, 2000.0, 2000.0,
   2000.0, 2000.0};

/* TDC slope 0=top 1=east 2=west 3=back 4=upstream 5=mwpc 6=punchthru */
double FPTm[7]= 
  {0.3333, 0.3333, 0.3333, 0.3333, 0.3333,
   0.3333, 0.3333};

/* TDC x int 0=top 1=east 2=west 3=back 4=upstream 5=mwpc 6=punchthru */
double FPTa[7]=
  {1676., 1646., 1638., 1697., 1650.,
   1331., 1650.};

#endif