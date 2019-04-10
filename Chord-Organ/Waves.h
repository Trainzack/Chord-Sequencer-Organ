#ifndef Waves_h
#define Waves_h

// SAW https://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_saw.h#L4
const int16_t wave0[257] = {
  0,256,512,767,1023,1279,1536,1791,2049,
  2303,2560,2816,3072,3328,3584,3840,4096,4351,4608,
  4864,5119,5376,5632,5889,6144,6400,6656,6912,7168,
  7424,7680,7937,8192,8448,8704,8960,9216,9472,9728,
  9984,10240,10496,10751,11008,11263,11520,11775,12031,12287,
  12543,12799,13055,13313,13566,13825,14077,14338,14588,14851,
  15099,15364,15610,15877,16122,16391,16632,16902,17145,17413,
  17659,17923,18174,18432,18689,18938,19208,19442,19728,19946,
  20251,20448,20772,20949,21295,21451,21814,21956,22332,22465,
  22845,22979,23352,23500,23850,24030,24341,24568,24822,25116,
  25293,25672,25757,26237,26214,26805,26668,27375,27124,27942,
  27584,28498,28059,29040,28552,29558,29073,30042,29635,30479,
  30252,30848,30957,31099,31825,31104,32767,30249,32767,-13408,
  -32767,-29119,-32768,-30019,-32768,-30087,-31924,-29930,-31114,-29675,
  -30377,-29363,-29687,-29009,-29036,-28619,-28417,-28200,-27827,-27753,
  -27263,-27282,-26720,-26790,-26198,-26280,-25690,-25758,-25193,-25228,
  -24704,-24690,-24218,-24151,-23733,-23612,-23249,-23074,-22759,-22540,
  -22266,-22013,-21769,-21489,-21267,-20968,-20760,-20453,-20250,-19941,
  -19737,-19430,-19223,-18922,-18706,-18414,-18190,-17907,-17674,-17399,
  -17158,-16891,-16643,-16381,-16129,-15871,-15614,-15360,-15102,-14850,
  -14590,-14337,-14077,-13825,-13566,-13313,-13054,-12801,-12543,-12289,
  -12031,-11777,-11519,-11264,-11007,-10752,-10495,-10240,-9984,-9728,
  -9472,-9216,-8959,-8704,-8447,-8191,-7937,-7680,-7423,-7168,
  -6912,-6656,-6400,-6143,-5888,-5632,-5376,-5120,-4864,-4608,
  -4352,-4096,-3840,-3584,-3327,-3071,-2816,-2560,-2303,-2048,
  -1792,-1536,-1280,-1024,-767,-512,-256,0
};

// SAW 2 https://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_saw.h#L128
const int16_t wave1[257] = {
  51,270,506,719,928,1112,1273,1431,1609,
  1790,1986,2186,2395,2609,2833,3064,3301,3542,3792,
  4045,4304,4566,4833,5103,5375,5651,5929,6209,6491,
  6776,7061,7349,7637,7925,8216,8507,8799,9092,9384,
  9677,9970,10264,10557,10849,11141,11434,11725,12016,12306,
  12596,12884,13171,13458,13742,14026,14308,14589,14868,15145,
  15420,15696,15967,16236,16504,16770,17033,17293,17553,17808,
  18062,18313,18562,18808,19049,19290,19526,19758,19991,20217,
  20445,20663,20883,21094,21309,21511,21720,21915,22117,22305,
  22498,22680,22864,23037,23213,23383,23549,23710,23864,24021,
  24164,24315,24445,24594,24710,24853,24956,25095,25185,25319,
  25397,25522,25589,25707,25765,25872,25922,26015,26064,26138,
  26187,26239,26293,26316,26382,26373,26454,26402,26514,26406,
  26566,26372,26624,26264,26534,19247,6033,-2815,-9912,-14521,
  -18564,-21894,-24783,-27059,-28810,-30122,-31029,-31711,-32117,-32449,
  -32588,-32736,-32737,-32768,-32718,-32705,-32591,-32528,-32376,-32266,
  -32079,-31918,-31693,-31483,-31220,-30961,-30664,-30358,-30032,-29687,
  -29333,-28960,-28583,-28186,-27793,-27380,-26979,-26560,-26154,-25732,
  -25326,-24908,-24505,-24094,-23695,-23293,-22903,-22511,-22130,-21748,
  -21376,-21005,-20640,-20279,-19923,-19569,-19219,-18876,-18532,-18193,
  -17855,-17520,-17186,-16856,-16525,-16197,-15868,-15541,-15214,-14888,
  -14561,-14235,-13908,-13582,-13255,-12928,-12600,-12273,-11945,-11616,
  -11287,-10958,-10626,-10297,-9967,-9637,-9308,-8977,-8647,-8319,
  -7990,-7662,-7334,-7006,-6681,-6356,-6035,-5712,-5392,-5073,
  -4757,-4443,-4132,-3820,-3515,-3210,-2911,-2613,-2320,-2030,
  -1746,-1465,-1190,-919,-653,-397,-141,51
};

// SAW 3 https://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_saw.h#L376
const int16_t wave2[257] = {
  64,276,490,705,924,1145,1367,1586,1806,
  2020,2232,2441,2644,2844,3039,3231,3420,3604,3789,
  3967,4145,4318,4490,4659,4825,4990,5153,5313,5471,
  5628,5782,5936,6086,6235,6383,6529,6674,6816,6958,
  7098,7238,7374,7509,7643,7776,7909,8038,8167,8295,
  8422,8546,8671,8795,8915,9036,9155,9272,9389,9505,
  9619,9732,9846,9955,10067,10175,10282,10388,10495,10598,
  10703,10805,10907,11007,11106,11205,11301,11398,11494,11588,
  11683,11775,11866,11957,12047,12136,12223,12312,12397,12485,
  12566,12654,12732,12819,12894,12982,13055,13141,13212,13297,
  13366,13448,13517,13597,13667,13742,13813,13882,13958,14021,
  14099,14155,14238,14288,14375,14417,14509,14543,14642,14667,
  14770,14791,14896,14911,15017,15030,15136,15147,15252,15262,
  15370,15361,15536,13436,1774,-9905,-16513,-22219,-27308,-31381,
  -32736,-31511,-28394,-25322,-23340,-22972,-23392,-23722,-23115,-21633,
  -19744,-18210,-17403,-17277,-17394,-17285,-16744,-15853,-14961,-14325,
  -14088,-14084,-14130,-13990,-13666,-13217,-12840,-12602,-12548,-12552,
  -12537,-12412,-12209,-11972,-11790,-11682,-11640,-11608,-11540,-11421,
  -11269,-11120,-10998,-10914,-10845,-10775,-10677,-10560,-10429,-10306,
  -10196,-10103,-10009,-9912,-9799,-9677,-9552,-9432,-9319,-9210,
  -9099,-8982,-8859,-8732,-8605,-8479,-8356,-8233,-8108,-7978,
  -7845,-7711,-7575,-7441,-7305,-7170,-7031,-6891,-6748,-6603,
  -6459,-6312,-6164,-6016,-5865,-5712,-5560,-5402,-5246,-5087,
  -4927,-4767,-4603,-4437,-4270,-4102,-3933,-3760,-3588,-3412,
  -3235,-3056,-2875,-2691,-2507,-2321,-2133,-1945,-1751,-1557,
  -1363,-1164,-965,-763,-558,-354,-146,64
};

// SAW 4 https://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_saw.h#L1182
const int16_t wave3[257] = {
  41,160,280,399,519,638,758,878,999,
  1117,1237,1357,1477,1596,1716,1836,1956,2074,2195,
  2314,2434,2553,2673,2794,2912,3032,3152,3272,3392,
  3512,3631,3751,3870,3990,4109,4229,4349,4468,4588,
  4707,4828,4947,5066,5186,5306,5426,5545,5664,5784,
  5904,6024,6143,6264,6382,6503,6621,6742,6861,6981,
  7100,7220,7341,7458,7582,7697,7821,7934,8062,8172,
  8304,8410,8545,8648,8785,8886,9025,9123,9266,9363,
  9505,9605,9741,9847,9976,10092,10208,10339,10438,10590,
  10665,10842,10892,11094,11116,11348,11344,11600,11572,11848,
  11804,12091,12043,12327,12291,12554,12547,12769,12816,12974,
  13096,13165,13390,13344,13694,13514,14009,13673,14333,13826,
  14661,13975,14991,14123,15319,14274,15646,14426,15976,14565,
  16344,14598,17079,12193,-27566,-26146,-23699,-25916,-24303,-25424,
  -23415,-23976,-21881,-22154,-20168,-20279,-18508,-18518,-17009,-16947,
  -15718,-15594,-14633,-14459,-13744,-13522,-13022,-12760,-12435,-12147,
  -11959,-11650,-11561,-11245,-11222,-10909,-10924,-10621,-10651,-10368,
  -10395,-10138,-10148,-9918,-9904,-9702,-9663,-9488,-9424,-9271,
  -9182,-9050,-8942,-8824,-8701,-8594,-8461,-8360,-8221,-8122,
  -7981,-7883,-7741,-7641,-7501,-7398,-7261,-7155,-7022,-6912,
  -6783,-6669,-6542,-6426,-6304,-6185,-6064,-5944,-5824,-5704,
  -5584,-5464,-5344,-5223,-5104,-4984,-4865,-4745,-4626,-4505,
  -4386,-4266,-4146,-4027,-3906,-3786,-3669,-3548,-3428,-3309,
  -3189,-3070,-2950,-2830,-2711,-2590,-2472,-2351,-2232,-2112,
  -1993,-1873,-1753,-1633,-1514,-1393,-1274,-1155,-1035,-915,
  -796,-676,-557,-437,-316,-198,-78,41
};

// SMOOTH TRIANGLE https://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_rSymSqu.h
const int16_t wave4[257] = {
  133,758,1384,2008,2634,3259,3884,4509,5137,
  5761,6386,7011,7636,8261,8886,9510,10133,10754,11379,
  12001,12622,13244,13866,14486,15103,15720,16337,16950,17564,
  18174,18783,19391,19995,20593,21191,21786,22374,22958,23538,
  24110,24679,25237,25788,26330,26862,27385,27893,28389,28869,
  29333,29779,30205,30610,30985,31336,31657,31945,32195,32406,
  32570,32687,32749,32764,32767,32767,32766,32760,32730,32643,
  32507,32321,32093,31827,31524,31191,30827,30439,30025,29592,
  29137,28667,28180,27678,27164,26636,26100,25553,25000,24437,
  23867,23292,22709,22122,21532,20936,20339,19738,19132,18523,
  17913,17302,16688,16075,15457,14840,14221,13601,12979,12358,
  11736,11112,10490,9866,9243,8620,7993,7369,6745,6119,
  5495,4869,4242,3618,2993,2368,1742,1117,491,-133,
  -757,-1384,-2009,-2635,-3261,-3884,-4509,-5136,-5761,-6385,
  -7011,-7636,-8260,-8887,-9509,-10132,-10755,-11379,-12001,-12623,
  -13245,-13866,-14485,-15104,-15721,-16336,-16951,-17563,-18173,-18783,
  -19391,-19995,-20593,-21191,-21785,-22373,-22958,-23537,-24111,-24678,
  -25237,-25789,-26331,-26863,-27385,-27892,-28389,-28869,-29333,-29779,
  -30204,-30609,-30986,-31336,-31657,-31945,-32195,-32406,-32571,-32686,
  -32749,-32764,-32767,-32767,-32766,-32761,-32729,-32643,-32507,-32321,
  -32093,-31826,-31524,-31190,-30828,-30440,-30026,-29592,-29137,-28667,
  -28179,-27678,-27164,-26636,-26100,-25554,-24999,-24438,-23867,-23292,
  -22709,-22123,-21532,-20936,-20338,-19737,-19132,-18523,-17913,-17302,
  -16688,-16074,-15457,-14840,-14221,-13601,-12980,-12357,-11736,-11113,
  -10490,-9867,-9244,-8619,-7993,-7369,-6744,-6119,-5494,-4869,
  -4243,-3617,-2993,-2367,-1742,-1117,-491,133
};

// TRIANGLE - SQUAREhttps://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_rSymSqu.h#L66
const int16_t wave5[257] = {
  168,957,1746,2535,3325,4117,4909,5701,6496,
  7290,8088,8886,9686,10487,11292,12098,12904,13713,14527,
  15340,16156,16974,17794,18615,19436,20259,21080,21900,22719,
  23534,24340,25142,25929,26704,27456,28184,28880,29533,30132,
  30665,31115,31460,31671,31780,31874,31963,32046,32125,32200,
  32271,32335,32397,32452,32503,32550,32593,32630,32664,32692,
  32716,32735,32751,32760,32766,32767,32764,32757,32744,32727,
  32706,32681,32651,32616,32575,32531,32481,32428,32371,32309,
  32242,32169,32092,32011,31927,31833,31740,31598,31326,30934,
  30447,29883,29260,28586,27876,27139,26375,25594,24801,23997,
  23186,22370,21551,20730,19908,19086,18264,17444,16625,15808,
  14992,14179,13368,12559,11754,10948,10145,9344,8545,7748,
  6951,6157,5363,4572,3779,2989,2198,1410,620,-168,
  -956,-1746,-2536,-3326,-4118,-4909,-5701,-6495,-7291,-8088,
  -8885,-9686,-10487,-11292,-12097,-12904,-13714,-14526,-15340,-16157,
  -16975,-17794,-18613,-19437,-20259,-21080,-21901,-22718,-23533,-24341,
  -25142,-25929,-26704,-27457,-28183,-28880,-29533,-30131,-30665,-31113,
  -31459,-31672,-31781,-31875,-31963,-32046,-32125,-32201,-32271,-32336,
  -32396,-32451,-32503,-32550,-32594,-32630,-32664,-32692,-32716,-32735,
  -32750,-32761,-32765,-32767,-32764,-32757,-32744,-32728,-32706,-32681,
  -32650,-32615,-32575,-32530,-32482,-32429,-32372,-32308,-32242,-32169,
  -32092,-32011,-31926,-31834,-31739,-31599,-31326,-30934,-30446,-29884,
  -29260,-28587,-27876,-27139,-26374,-25593,-24802,-23996,-23186,-22370,
  -21550,-20730,-19909,-19085,-18264,-17444,-16626,-15808,-14993,-14180,
  -13368,-12560,-11754,-10948,-10145,-9344,-8545,-7748,-6950,-6156,
  -5363,-4571,-3780,-2989,-2198,-1409,-620,168
};

// SMOOTH SQUARE https://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_rSymSqu.h#L252
const int16_t wave6[257] = {
  464,2635,4822,7023,9259,11527,13843,16198,18594,
  20968,23209,24937,25739,26197,26653,27062,27457,27818,28165,
  28482,28786,29064,29331,29575,29809,30023,30228,30417,30595,
  30760,30916,31062,31198,31324,31443,31555,31660,31757,31847,
  31931,32010,32084,32150,32215,32273,32328,32378,32424,32467,
  32507,32543,32576,32607,32634,32658,32680,32699,32715,32730,
  32741,32751,32759,32764,32767,32767,32765,32762,32756,32747,
  32737,32725,32709,32692,32670,32649,32622,32593,32563,32529,
  32491,32450,32405,32357,32305,32248,32188,32122,32053,31976,
  31897,31808,31717,31615,31507,31394,31272,31140,31001,30851,
  30690,30520,30338,30142,29934,29711,29472,29219,28947,28660,
  28348,28020,27666,27292,26888,26465,26000,25488,24309,22280,
  19966,17567,15191,12848,10557,8300,6082,3885,1709,-464,
  -2634,-4821,-7024,-9260,-11529,-13843,-16199,-18593,-20968,-23209,
  -24937,-25739,-26196,-26653,-27061,-27456,-27819,-28165,-28482,-28786,
  -29065,-29330,-29574,-29809,-30024,-30227,-30417,-30594,-30760,-30917,
  -31061,-31198,-31324,-31443,-31554,-31660,-31757,-31846,-31931,-32009,
  -32083,-32151,-32216,-32273,-32328,-32377,-32424,-32467,-32507,-32544,
  -32576,-32606,-32634,-32658,-32680,-32699,-32715,-32731,-32742,-32751,
  -32759,-32764,-32766,-32767,-32766,-32762,-32755,-32747,-32737,-32725,
  -32708,-32691,-32671,-32648,-32623,-32594,-32563,-32529,-32491,-32450,
  -32405,-32358,-32305,-32249,-32187,-32123,-32052,-31977,-31897,-31809,
  -31717,-31615,-31507,-31393,-31271,-31139,-31002,-30850,-30690,-30520,
  -30338,-30142,-29934,-29710,-29472,-29219,-28948,-28659,-28349,-28021,
  -27666,-27293,-26888,-26465,-26000,-25488,-24308,-22280,-19966,-17566,
  -15191,-12847,-10557,-8299,-6082,-3885,-1709,464
};

// TRIANGLE SQUARE https://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_rSymSqu.h#L97
const int16_t wave7[257] = {
  192,1094,1998,2901,3807,4713,5622,6532,7447,
  8362,9281,10204,11130,12060,12995,13934,14878,15825,16778,
  17734,18696,19659,20625,21592,22554,23515,24465,25402,26315,
  27197,28030,28802,29481,30037,30424,30631,30779,30924,31061,
  31194,31321,31443,31557,31667,31772,31872,31964,32054,32138,
  32215,32288,32355,32418,32475,32527,32572,32615,32652,32684,
  32710,32732,32749,32759,32767,32767,32764,32755,32743,32723,
  32700,32671,32637,32598,32553,32506,32450,32391,32327,32258,
  32183,32104,32017,31926,31830,31728,31621,31508,31391,31266,
  31139,31003,30863,30715,30557,30285,29817,29205,28481,27682,
  26824,25928,25004,24062,23106,22144,21179,20212,19248,18286,
  17325,16370,15421,14473,13533,12596,11662,10734,9810,8889,
  7971,7057,6144,5235,4327,3422,2515,1613,709,-192,
  -1093,-1998,-2902,-3808,-4715,-5623,-6532,-7446,-8362,-9281,
  -10203,-11130,-12060,-12996,-13934,-14877,-15826,-16778,-17734,-18697,
  -19660,-20625,-21590,-22555,-23515,-24464,-25402,-26314,-27196,-28031,
  -28802,-29481,-30037,-30425,-30630,-30779,-30924,-31060,-31194,-31319,
  -31442,-31557,-31668,-31772,-31871,-31964,-32054,-32138,-32215,-32288,
  -32355,-32417,-32475,-32527,-32572,-32615,-32652,-32684,-32711,-32732,
  -32749,-32760,-32766,-32768,-32765,-32755,-32742,-32724,-32700,-32671,
  -32637,-32597,-32553,-32505,-32451,-32392,-32328,-32258,-32183,-32104,
  -32017,-31926,-31829,-31728,-31620,-31509,-31390,-31267,-31138,-31003,
  -30864,-30715,-30557,-30284,-29816,-29204,-28482,-27681,-26824,-25928,
  -25004,-24061,-23106,-22143,-21180,-20212,-19249,-18286,-17326,-16371,
  -15421,-14474,-13533,-12595,-11662,-10733,-9810,-8889,-7971,-7056,
  -6144,-5234,-4327,-3421,-2516,-1612,-709,192
};

// SMOOTH SQUARE https://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_rSymSqu.h#L562
const int16_t wave8[257] = {
  2808,17173,26918,28842,30438,31100,31818,32051,32388,
  32455,32619,32631,32710,32709,32744,32746,32754,32763,32756,
  32767,32755,32767,32754,32767,32754,32767,32755,32767,32757,
  32767,32758,32767,32760,32767,32762,32767,32764,32767,32766,
  32767,32767,32767,32767,32766,32767,32765,32767,32765,32767,
  32765,32767,32765,32767,32765,32767,32765,32767,32766,32767,
  32767,32767,32767,32766,32767,32767,32767,32766,32767,32766,
  32767,32767,32767,32767,32767,32767,32766,32767,32766,32767,
  32766,32767,32765,32767,32764,32767,32763,32767,32763,32767,
  32763,32767,32763,32767,32763,32767,32765,32767,32766,32767,
  32767,32764,32767,32761,32767,32756,32767,32751,32767,32746,
  32767,32737,32767,32725,32767,32702,32739,32649,32659,32525,
  32464,32228,32000,31514,30894,29782,28330,24057,10879,-2808,
  -17173,-26918,-28843,-30439,-31101,-31819,-32052,-32387,-32456,-32619,
  -32630,-32710,-32708,-32744,-32745,-32754,-32764,-32756,-32768,-32756,
  -32768,-32754,-32767,-32755,-32768,-32754,-32768,-32756,-32768,-32759,
  -32768,-32760,-32768,-32762,-32768,-32764,-32768,-32765,-32768,-32766,
  -32766,-32768,-32766,-32768,-32765,-32767,-32765,-32768,-32765,-32768,
  -32765,-32767,-32766,-32768,-32765,-32768,-32766,-32768,-32767,-32767,
  -32767,-32767,-32767,-32767,-32768,-32766,-32767,-32766,-32768,-32767,
  -32768,-32766,-32767,-32767,-32767,-32768,-32766,-32768,-32766,-32768,
  -32765,-32768,-32764,-32768,-32763,-32768,-32762,-32768,-32763,-32768,
  -32763,-32768,-32763,-32768,-32764,-32767,-32767,-32766,-32768,-32764,
  -32768,-32760,-32768,-32756,-32768,-32751,-32768,-32746,-32768,-32738,
  -32768,-32726,-32768,-32702,-32739,-32648,-32659,-32525,-32463,-32227,
  -32000,-31513,-30894,-29781,-28330,-24057,-10879,2808
};

// SAW https://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_vgsaw.h#L345
const int16_t wave9[257] = {
  171,970,757,1165,1970,2206,2065,2183,2050,
  2469,2531,2659,3454,3322,3873,4365,4181,4811,5553,
  5523,5542,5500,5924,5909,6191,6885,6778,6810,7166,
  7236,7371,8548,8989,8923,8930,8985,9413,9273,9864,
  10308,10168,10700,10523,11054,11533,11785,11948,11920,11850,
  12288,12876,12694,13559,13602,13740,14100,13972,14675,14994,
  15271,15366,15231,15843,16267,16106,16264,16631,16517,17131,
  17515,17478,18290,18417,18788,18688,18738,19490,19574,19707,
  20044,19995,19978,20818,20778,21174,21726,21967,22170,22089,
  22271,23102,22858,23345,23348,23528,24233,24253,24445,24741,
  24669,25453,25608,25395,26048,26385,26460,26671,26928,26889,
  28045,27265,28423,27627,28747,28505,29460,28355,29595,28166,
  30051,30021,31388,30570,32767,23869,-16816,-15167,-24410,-32768,
  -31334,-30952,-28801,-30905,-30049,-31265,-28698,-29304,-28568,-29286,
  -28622,-29243,-27970,-28287,-27739,-27243,-27236,-26942,-26797,-26703,
  -25920,-25982,-25746,-25445,-25593,-24569,-24302,-24187,-24326,-24192,
  -24300,-23334,-23534,-22985,-22498,-22570,-22183,-22135,-21950,-20972,
  -20875,-20805,-20929,-20677,-19980,-19985,-20041,-19662,-19585,-19446,
  -18645,-18814,-18228,-17460,-17466,-17409,-17533,-17057,-16486,-16666,
  -16152,-16251,-15879,-15249,-15336,-15332,-14878,-14024,-14053,-14024,
  -14095,-13385,-13130,-13170,-12668,-12895,-12171,-11889,-11862,-11558,
  -11197,-10545,-10681,-10612,-10638,-10157,-10313,-9768,-9280,-9397,
  -8545,-8538,-8343,-8100,-7563,-7110,-7327,-7096,-6795,-6852,
  -6279,-5833,-6053,-5810,-5521,-5571,-5006,-4539,-3970,-3733,
  -3929,-3557,-3400,-3379,-2611,-2548,-2420,-2047,-2205,-1384,
  -1277,-1176,-816,-856,-879,-138,9,171
};

// GAP SAW https://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_gapsaw.h#L283
const int16_t wave10[257] = {
  26201,32767,31603,31951,31062,31142,30363,30386,29646,
  29636,28925,28886,28209,28129,27496,27372,26784,26612,26074,
  25854,25361,25097,24648,24343,23932,23591,23211,22841,22488,
  22098,21761,21357,21032,20618,20299,19882,19564,19149,18826,
  18416,18088,17685,17348,16953,16610,16223,15871,15492,15132,
  14760,14395,14027,13658,13293,12922,12559,12186,11825,11451,
  11090,10717,10355,9982,9621,9248,8883,8512,8149,7778,
  7413,7044,6679,6310,5943,5575,5208,4839,4473,4104,
  3739,3369,3003,2634,2269,1899,1533,1165,798,431,
  71,-12,7,-5,3,-2,3,-2,2,-1,
  1,-1,1,0,1,0,0,0,0,0,
  0,-1,0,-1,0,1,-1,0,0,0,
  0,1,0,0,0,1,-1,0,0,0,
  1,0,0,0,-1,0,0,0,0,0,
  0,0,0,0,0,1,0,0,0,0,
  -1,0,1,0,0,0,0,0,1,-2,
  1,-2,3,-4,5,-9,16,-152,-541,-896,
  -1271,-1634,-2005,-2370,-2738,-3103,-3473,-3839,-4208,-4575,
  -4943,-5310,-5678,-6046,-6412,-6780,-7147,-7515,-7882,-8250,
  -8616,-8986,-9351,-9723,-10086,-10457,-10819,-11193,-11553,-11930,
  -12287,-12665,-13021,-13400,-13756,-14136,-14493,-14870,-15228,-15605,
  -15964,-16336,-16702,-17067,-17441,-17798,-18181,-18527,-18923,-19256,
  -19665,-19983,-20406,-20712,-21146,-21442,-21886,-22174,-22621,-22909,
  -23354,-23649,-24084,-24392,-24807,-25141,-25525,-25896,-26237,-26657,
  -26943,-27425,-27641,-28199,-28333,-28980,-29017,-29773,-29689,-30580,
  -30335,-31429,-30911,-32418,-31150,-32768,-16360,26201
};

// BSAW https://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_bsaw.h#L190
const int16_t wave11[257] = {
  10056,32767,29454,28023,23608,23574,22452,22894,21207,
  20007,17758,16463,14870,13913,12712,11798,10863,10137,9622,
  9193,9041,8829,8926,8876,9146,9213,9578,9700,10074,
  10200,10528,10627,10874,10919,11069,11056,11109,11039,11003,
  10888,10782,10637,10479,10320,10133,9967,9770,9614,9419,
  9274,9093,8962,8801,8684,8542,8436,8311,8217,8104,
  8015,7913,7824,7726,7637,7542,7447,7349,7250,7150,
  7044,6939,6828,6719,6602,6490,6370,6254,6133,6014,
  5893,5772,5649,5529,5406,5283,5163,5040,4921,4800,
  4680,4559,4441,4319,4202,4083,3963,3845,3726,3606,
  3485,3368,3249,3130,3007,2889,2768,2646,2526,2405,
  2283,2162,2041,1918,1798,1678,1554,1433,1312,1189,
  1067,947,825,703,582,462,338,217,95,-26,
  -146,-269,-392,-514,-634,-755,-876,-998,-1118,-1241,
  -1364,-1485,-1607,-1729,-1849,-1971,-2093,-2214,-2335,-2456,
  -2577,-2698,-2819,-2939,-3059,-3180,-3300,-3418,-3537,-3658,
  -3778,-3896,-4014,-4135,-4252,-4372,-4492,-4610,-4732,-4851,
  -4972,-5093,-5215,-5335,-5458,-5579,-5700,-5823,-5944,-6064,
  -6185,-6304,-6422,-6539,-6651,-6766,-6874,-6985,-7089,-7194,
  -7291,-7394,-7485,-7585,-7673,-7771,-7859,-7959,-8050,-8154,
  -8256,-8364,-8480,-8601,-8734,-8865,-9021,-9164,-9343,-9492,
  -9693,-9841,-10053,-10196,-10408,-10528,-10722,-10808,-10964,-11000,
  -11096,-11069,-11085,-10994,-10917,-10762,-10593,-10392,-10139,-9931,
  -9622,-9453,-9135,-9077,-8822,-8949,-8820,-9188,-9248,-9938,
  -10299,-11378,-12039,-13359,-14163,-15660,-16841,-18835,-20448,-22125,
  -22708,-22918,-23423,-25187,-28940,-31424,-29753,10056
};

// SQUARE SAW https://github.com/DatanoiseTV/AKWF_WaveForms/blob/master/AKWF_squ.h#L810
const int16_t wave12[257] = {
  8675,32227,31802,31944,31276,31127,30705,30380,30106,
  29673,29492,28999,28871,28354,28246,27728,27625,27118,27010,
  26525,26401,25948,25798,25384,25204,24828,24625,24282,24055,
  23746,23496,23216,22950,22692,22415,22174,21893,21664,21380,
  21161,20879,20665,20387,20175,19905,19695,19432,19221,18967,
  18758,18511,18301,18064,17854,17621,17416,17188,16987,16763,
  16563,16345,16149,15935,15743,15533,15341,15138,14945,14753,
  14556,14375,14174,14005,13796,13643,13422,13287,13057,12939,
  12699,12595,12348,12258,12005,11924,11670,11594,11347,11262,
  11036,10935,10735,10607,10446,10279,10175,9945,9915,9611,
  9669,9273,9439,8924,9237,8551,9078,8125,9025,7486,
  9504,-4179,-27945,-28114,-28106,-27627,-27418,-27141,-26782,-26624,
  -26188,-26090,-25620,-25555,-25070,-25020,-24537,-24485,-24022,-23952,
  -23517,-23423,-23025,-22905,-22542,-22394,-22066,-21890,-21599,-21397,
  -21137,-20917,-20680,-20446,-20232,-19984,-19787,-19535,-19347,-19096,
  -18914,-18666,-18486,-18244,-18066,-17829,-17652,-17424,-17243,-17028,
  -16844,-16636,-16451,-16250,-16063,-15872,-15685,-15498,-15313,-15131,
  -14947,-14771,-14590,-14417,-14237,-14068,-13891,-13726,-13554,-13389,
  -13221,-13058,-12894,-12736,-12573,-12418,-12260,-12106,-11951,-11798,
  -11646,-11497,-11348,-11201,-11056,-10908,-10769,-10622,-10486,-10341,
  -10209,-10064,-9937,-9792,-9671,-9526,-9410,-9266,-9152,-9011,
  -8899,-8759,-8650,-8516,-8404,-8278,-8160,-8046,-7922,-7820,
  -7687,-7598,-7452,-7382,-7221,-7170,-6996,-6961,-6775,-6756,
  -6560,-6552,-6351,-6348,-6150,-6143,-5960,-5937,-5778,-5731,
  -5608,-5520,-5451,-5301,-5305,-5077,-5175,-4848,-5061,-4604,
  -4976,-4331,-4939,-3995,-5024,-3418,-5770,8675
};

#endif