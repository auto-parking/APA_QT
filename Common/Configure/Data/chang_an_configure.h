/*
 * chang_an_configure.h
 *
 *  Created on: December 27 2018
 *      Author: Henry Zhu
 */

#ifndef _CHANG_AN_CONFIGURE_H_
#define _CHANG_AN_CONFIGURE_H_

#include "common_configure.h"
/****************** 车辆信息 ******************/
// 长度(m)
#define LENGHT                           (4.445)
// 宽度(m)
#define WIDTH                            (1.594)
// 高度(m)
#define HEIGHT                           (1.35)
// 轴距(m)
#define WHEEL_BASE                        (2.64)
// 车辆边沿到车辆中心点的距离(m)
#define FRONT_EDGE_TO_CENTER              (3.54)
#define REAR_EDGE_TO_CENTER               (0.905)
#define LEFT_EDGE_TO_CENTER               (0.9275)
#define RIGHT_EDGE_TO_CENTER              (0.9275)

// 最小转弯半径(m)
#define MIN_RIGHT_TURN_RADIUS             (4.7079)
#define MIN_LEFT_TURN_RADIUS              (4.6614)
// 转向传动比
#define STEERING_RATIO                    (15.3)

// 最大加速度(m/s2)
#define MAX_ACCELERATION                    (3)
// 最大减速度(m/s2)
#define MAX_DECELERATION                   (-5)

// 最大转向角(°)
#define MAX_STEERING_ANGLE                (450)
// 最大转向加速度(°/s)
#define MAX_STEERING_ANGLE_RATE           (500)

// 速度修正比例系数
#define SPEED_REVISE_RATIO               (1.01)
// 轮脉冲比例系数
#define WHEEL_PUSLE_RATIO                (0.02540618132391610878926842900878)

#define WHEEL_PUSLE_MAX                  (255)

/*** turn radius and the steering angle relationship ***/
// (400,470]
#define FIT_RADIUS_A1 		( 0.07466)
#define FIT_RADIUS_B1 		(-4.072)

// (300,400]
#define FIT_RADIUS_A2 		( 0.06758)
#define FIT_RADIUS_B2 		(-1.289)

// (200,300]
#define FIT_RADIUS_A3 		( 0.0653)
#define FIT_RADIUS_B3 		(-0.5621)

// (100,200]
#define FIT_RADIUS_A4 		( 0.06206)
#define FIT_RADIUS_B4 		( 0.06662)

// (50,100]
#define FIT_RADIUS_A5 		( 0.06312)
#define FIT_RADIUS_B5 		(-0.02795)

// (0,50]
#define FIT_RADIUS_A6 		( 0.062  )
#define FIT_RADIUS_B6 		( 0.0    )

// (-50,0)
#define FIT_RADIUS_A7 		( 0.062  )
#define FIT_RADIUS_B7 		( 0.0    )

// (-100,-50]
#define FIT_RADIUS_A8 		( 0.06123)
#define FIT_RADIUS_B8 		(-0.02889)

// (-200,-100]
#define FIT_RADIUS_A9 		( 0.06356)
#define FIT_RADIUS_B9 		(-0.2489)

// (-300,-200]
#define FIT_RADIUS_A10 		( 0.06393)
#define FIT_RADIUS_B10 		(-0.3534)

// (-400,-300]
#define FIT_RADIUS_A11 		( 0.06846)
#define FIT_RADIUS_B11 		(-1.662)

// (-510,-400]
#define FIT_RADIUS_A12 		( 0.06652)
#define FIT_RADIUS_B12 		(-1.586)

/**********************************Ultrasonic Location Information***********************************************/
//#define SENSOR1_X     (-0.20f )
//#define SENSOR1_Y     ( 0.68f )
//#define SENSOR1_ANGLE ( 0.00f )
//
//#define SENSOR2_X     ( 0.00f )
//#define SENSOR2_Y     ( 0.32f )
//#define SENSOR2_ANGLE ( 0.00f )
//
//#define SENSOR3_X     ( 0.00f )
//#define SENSOR3_Y     (-0.32f )
//#define SENSOR3_ANGLE ( 0.00f )
//
//#define SENSOR4_X     (-0.20f )
//#define SENSOR4_Y     (-0.68f )
//#define SENSOR4_ANGLE ( 0.00f )
//实验室测试
//#define SENSOR1_X     ( 0.00f )
//#define SENSOR1_Y     ( 0.45f )
//#define SENSOR1_ANGLE ( 0.00f )
//
//#define SENSOR2_X     ( 0.00f )
//#define SENSOR2_Y     ( 0.18f )
//#define SENSOR2_ANGLE ( 0.00f )
//
//#define SENSOR3_X     ( 0.00f )
//#define SENSOR3_Y     (-0.18f )
//#define SENSOR3_ANGLE ( 0.00f )
//
//#define SENSOR4_X     ( 0.00f )
//#define SENSOR4_Y     (-0.50f )
//#define SENSOR4_ANGLE ( 0.00f )

#define SENSOR1_X     ( 3.42f )
#define SENSOR1_Y     ( 0.70f )
#define SENSOR1_ANGLE ( 0.00f )

#define SENSOR2_X     ( 3.60f )
#define SENSOR2_Y     ( 0.30f )
#define SENSOR2_ANGLE ( 0.00f )

#define SENSOR3_X     ( 3.60f )
#define SENSOR3_Y     (-0.30f )
#define SENSOR3_ANGLE ( 0.00f )

#define SENSOR4_X     ( 3.42f )
#define SENSOR4_Y     (-0.70f )
#define SENSOR4_ANGLE ( 0.00f )

#define SENSOR5_X     (-0.87f )
#define SENSOR5_Y     ( 0.72f )
#define SENSOR5_ANGLE ( 3.1415926535897932384626433832795 )

#define SENSOR6_X     (-1.00f )
#define SENSOR6_Y     ( 0.30f )
#define SENSOR6_ANGLE ( 3.1415926535897932384626433832795 )

#define SENSOR7_X     (-1.00f )
#define SENSOR7_Y     (-0.30f )
#define SENSOR7_ANGLE ( 3.1415926535897932384626433832795 )

#define SENSOR8_X     (-0.87f )
#define SENSOR8_Y     (-0.72f )
#define SENSOR8_ANGLE ( 3.1415926535897932384626433832795 )

#define SENSOR9_X     ( 2.95f )
#define SENSOR9_Y     ( 0.90f )
#define SENSOR9_ANGLE (1.5707963267948966192313216916398 )

#define SENSOR10_X     ( 2.95f )
#define SENSOR10_Y     (-0.90f )
#define SENSOR10_ANGLE (-1.5707963267948966192313216916398 )

#define SENSOR11_X     (-0.30f)
#define SENSOR11_Y     ( 0.90f)
#define SENSOR11_ANGLE (1.5707963267948966192313216916398)

#define SENSOR12_X     (-0.30f)
#define SENSOR12_Y     (-0.90f)
#define SENSOR12_ANGLE (-1.5707963267948966192313216916398)

#define MAX_ARRAY_ID  (520)
#define MIN_ARRAY_ID  ( 0 )

const float SteerAngle2Radius[521][2]=
{
    {27942.64648f, 27942.64648f},//+0Left, -0Right
    {2173.061035f, 2128.70459f},
    {1131.082397f, 1123.791748f},
    {764.772522f, 763.594971f},
    {577.836365f, 578.361328f},
    {464.433624f, 465.521088f},
    {388.306763f, 389.571808f},
    {333.670624f, 334.963867f},
    {292.550079f, 293.810028f},
    {260.481781f, 261.683289f},
    {234.772766f, 235.906952f},
    {213.701828f, 214.76738f},
    {196.117523f, 197.116608f},
    {181.220444f, 182.156708f},
    {168.438232f, 169.315872f},
    {157.350281f, 158.173599f},
    {147.640503f, 148.413681f},
    {139.066971f, 139.793884f},
    {131.441132f, 132.125412f},
    {124.614075f, 125.258926f},
    {118.466423f, 119.074928f},
    {112.901558f, 113.476372f},
    {107.840279f, 108.383904f},
    {103.217148f, 103.731812f},
    {98.977592f, 99.465355f},
    {95.075729f, 95.538422f},
    {91.472717f, 91.912056f},
    {88.13549f, 88.552979f},
    {85.035599f, 85.432678f},
    {82.148605f, 82.526558f},
    {79.453262f, 79.813278f},
    {76.931084f, 77.274269f},
    {74.565857f, 74.893204f},
    {72.343384f, 72.655807f},
    {70.251068f, 70.549438f},
    {68.277794f, 68.56292f},
    {66.413658f, 66.686279f},
    {64.649849f, 64.910622f},
    {62.978436f, 63.228039f},
    {61.392345f, 61.631351f},
    {59.885189f, 60.114159f},
    {58.451195f, 58.670662f},
    {57.085163f, 57.295597f},
    {55.782349f, 55.984219f},
    {54.538456f, 54.732174f},
    {53.349556f, 53.535538f},
    {52.212082f, 52.390694f},
    {51.122734f, 51.294357f},
    {50.078533f, 50.243488f},
    {49.07671f, 49.235317f},
    {48.114731f, 48.267288f},
    {47.19025f, 47.337044f},
    {46.301109f, 46.44241f},
    {45.445313f, 45.581367f},
    {44.621006f, 44.75206f},
    {43.826488f, 43.952766f},
    {43.06015f, 43.181877f},
    {42.320515f, 42.437893f},
    {41.606201f, 41.719437f},
    {40.915936f, 41.0252f},
    {40.248505f, 40.353989f},
    {39.602795f, 39.704659f},
    {38.977749f, 39.07616f},
    {38.372383f, 38.467499f},
    {37.785789f, 37.87775f},
    {37.217091f, 37.306046f},
    {36.665478f, 36.751553f},
    {36.130192f, 36.21352f},
    {35.610497f, 35.691212f},
    {35.105736f, 35.183949f},
    {34.615261f, 34.691074f},
    {34.138466f, 34.212002f},
    {33.674789f, 33.746151f},
    {33.223682f, 33.292965f},
    {32.784645f, 32.851948f},
    {32.357193f, 32.422607f},
    {31.940866f, 32.004482f},
    {31.535234f, 31.597132f},
    {31.139887f, 31.200151f},
    {30.754431f, 30.813143f},
    {30.378496f, 30.435732f},
    {30.011736f, 30.067566f},
    {29.653807f, 29.708305f},
    {29.304398f, 29.357622f},
    {28.9632f, 29.015226f},
    {28.629927f, 28.680815f},
    {28.304295f, 28.354103f},
    {27.986046f, 28.03484f},
    {27.674934f, 27.722765f},
    {27.370714f, 27.417633f},
    {27.073153f, 27.119219f},
    {26.782032f, 26.827297f},
    {26.49715f, 26.541658f},
    {26.218294f, 26.262094f},
    {25.945282f, 25.988417f},
    {25.677925f, 25.720446f},
    {25.416046f, 25.457991f},
    {25.159477f, 25.200884f},
    {24.908052f, 24.948969f},
    {24.661623f, 24.702084f},
    {24.420031f, 24.460072f},
    {24.18314f, 24.222799f},
    {23.950808f, 23.990124f},
    {23.722906f, 23.761906f},
    {23.4993f, 23.538019f},
    {23.279875f, 23.318346f},
    {23.064505f, 23.10276f},
    {22.853079f, 22.891148f},
    {22.645493f, 22.683403f},
    {22.441635f, 22.479412f},
    {22.241405f, 22.279079f},
    {22.044706f, 22.082302f},
    {21.851444f, 21.888988f},
    {21.661526f, 21.699041f},
    {21.474863f, 21.512375f},
    {21.291374f, 21.328907f},
    {21.110975f, 21.148548f},
    {20.933588f, 20.971226f},
    {20.759136f, 20.796854f},
    {20.587543f, 20.625368f},
    {20.418739f, 20.456686f},
    {20.252659f, 20.290751f},
    {20.089222f, 20.127478f},
    {19.928381f, 19.966816f},
    {19.770065f, 19.808699f},
    {19.614218f, 19.653061f},
    {19.460772f, 19.499846f},
    {19.309679f, 19.348999f},
    {19.160883f, 19.200464f},
    {19.014324f, 19.054182f},
    {18.869957f, 18.910107f},
    {18.727728f, 18.768183f},
    {18.587593f, 18.628366f},
    {18.449503f, 18.490604f},
    {18.313408f, 18.354858f},
    {18.179268f, 18.221071f},
    {18.047041f, 18.089212f},
    {17.916679f, 17.959232f},
    {17.788153f, 17.831095f},
    {17.661411f, 17.704754f},
    {17.536419f, 17.580175f},
    {17.413143f, 17.457325f},
    {17.291544f, 17.336155f},
    {17.171587f, 17.216637f},
    {17.053238f, 17.09874f},
    {16.936466f, 16.982428f},
    {16.821234f, 16.867662f},
    {16.707516f, 16.754419f},
    {16.595278f, 16.642664f},
    {16.484488f, 16.532366f},
    {16.375122f, 16.4235f},
    {16.267149f, 16.316032f},
    {16.160543f, 16.209938f},
    {16.055279f, 16.10519f},
    {15.951324f, 16.001762f},
    {15.848658f, 15.89963f},
    {15.747258f, 15.798765f},
    {15.647095f, 15.699144f},
    {15.548147f, 15.600748f},
    {15.450393f, 15.503546f},
    {15.35381f, 15.40752f},
    {15.258375f, 15.312649f},
    {15.164067f, 15.218908f},
    {15.070865f, 15.12628f},
    {14.97875f, 15.034742f},
    {14.887704f, 14.944275f},
    {14.797704f, 14.854859f},
    {14.708732f, 14.766477f},
    {14.620771f, 14.679106f},
    {14.533803f, 14.592732f},
    {14.447809f, 14.507338f},
    {14.362776f, 14.422902f},
    {14.278679f, 14.339413f},
    {14.195511f, 14.256849f},
    {14.113252f, 14.175198f},
    {14.031887f, 14.094442f},
    {13.951399f, 14.014566f},
    {13.871774f, 13.935557f},
    {13.792998f, 13.857402f},
    {13.715056f, 13.78008f},
    {13.637938f, 13.703579f},
    {13.561625f, 13.627889f},
    {13.486105f, 13.552994f},
    {13.411369f, 13.478881f},
    {13.337399f, 13.405539f},
    {13.264187f, 13.332951f},
    {13.191717f, 13.261109f},
    {13.119981f, 13.190001f},
    {13.048964f, 13.119611f},
    {12.978656f, 13.049932f},
    {12.909043f, 12.98095f},
    {12.840121f, 12.912657f},
    {12.771873f, 12.84504f},
    {12.704289f, 12.778086f},
    {12.637363f, 12.711791f},
    {12.57108f, 12.646138f},
    {12.505434f, 12.581122f},
    {12.440414f, 12.51673f},
    {12.376011f, 12.452956f},
    {12.312212f, 12.389787f},
    {12.249013f, 12.327215f},
    {12.186403f, 12.265232f},
    {12.124373f, 12.203828f},
    {12.062916f, 12.142996f},
    {12.002021f, 12.082726f},
    {11.94168f, 12.02301f},
    {11.881887f, 11.96384f},
    {11.822636f, 11.905209f},
    {11.763913f, 11.847107f},
    {11.705716f, 11.789528f},
    {11.648035f, 11.732465f},
    {11.590863f, 11.675907f},
    {11.534195f, 11.619853f},
    {11.478018f, 11.564289f},
    {11.422331f, 11.509212f},
    {11.367126f, 11.454618f},
    {11.312394f, 11.400492f},
    {11.258131f, 11.346834f},
    {11.204329f, 11.293636f},
    {11.150983f, 11.240891f},
    {11.098085f, 11.188593f},
    {11.045632f, 11.136737f},
    {10.993612f, 11.085314f},
    {10.942028f, 11.034321f},
    {10.890868f, 10.983751f},
    {10.840128f, 10.933598f},
    {10.789803f, 10.883856f},
    {10.739883f, 10.834524f},
    {10.690372f, 10.785589f},
    {10.641255f, 10.737054f},
    {10.592533f, 10.688906f},
    {10.544199f, 10.641144f},
    {10.496248f, 10.593762f},
    {10.448676f, 10.546755f},
    {10.401475f, 10.50012f},
    {10.354644f, 10.45385f},
    {10.308177f, 10.407939f},
    {10.26207f, 10.362388f},
    {10.216316f, 10.317187f},
    {10.170912f, 10.272332f},
    {10.125857f, 10.22782f},
    {10.081142f, 10.183649f},
    {10.036763f, 10.139812f},
    {9.992719f, 10.096304f},
    {9.949004f, 10.053122f},
    {9.905616f, 10.010262f},
    {9.862547f, 9.96772f},
    {9.819797f, 9.925491f},
    {9.77736f, 9.883575f},
    {9.735233f, 9.841964f},
    {9.693412f, 9.800656f},
    {9.651895f, 9.759646f},
    {9.610675f, 9.718933f},
    {9.569751f, 9.678512f},
    {9.529119f, 9.638378f},
    {9.488777f, 9.598529f},
    {9.44872f, 9.558963f},
    {9.408943f, 9.519675f},
    {9.369448f, 9.480659f},
    {9.330226f, 9.441918f},
    {9.291276f, 9.403444f},
    {9.252596f, 9.365235f},
    {9.214183f, 9.327291f},
    {9.176032f, 9.289604f},
    {9.138141f, 9.252172f},
    {9.100508f, 9.214997f},
    {9.063129f, 9.178071f},
    {9.026002f, 9.141391f},
    {8.989122f, 9.104957f},
    {8.952491f, 9.068765f},
    {8.916101f, 9.032811f},
    {8.879953f, 8.997095f},
    {8.844042f, 8.961614f},
    {8.808367f, 8.92636f},
    {8.772924f, 8.891338f},
    {8.737713f, 8.856543f},
    {8.702729f, 8.82197f},
    {8.667971f, 8.787617f},
    {8.633434f, 8.753484f},
    {8.599118f, 8.719569f},
    {8.565022f, 8.685865f},
    {8.531141f, 8.652375f},
    {8.497474f, 8.619095f},
    {8.464019f, 8.58602f},
    {8.430772f, 8.55315f},
    {8.397733f, 8.520482f},
    {8.364897f, 8.488017f},
    {8.332264f, 8.45575f},
    {8.299832f, 8.423678f},
    {8.2676f, 8.3918f},
    {8.235565f, 8.360115f},
    {8.203723f, 8.32862f},
    {8.172074f, 8.297313f},
    {8.140615f, 8.266191f},
    {8.109345f, 8.235256f},
    {8.078262f, 8.2045f},
    {8.047364f, 8.173927f},
    {8.01665f, 8.143533f},
    {7.986115f, 8.113314f},
    {7.955761f, 8.083269f},
    {7.925585f, 8.0534f},
    {7.895584f, 8.023701f},
    {7.865758f, 7.994173f},
    {7.836103f, 7.964811f},
    {7.806621f, 7.935616f},
    {7.777307f, 7.906585f},
    {7.748159f, 7.877719f},
    {7.719179f, 7.849012f},
    {7.690362f, 7.820466f},
    {7.661708f, 7.792078f},
    {7.633216f, 7.763845f},
    {7.604883f, 7.735768f},
    {7.576707f, 7.707845f},
    {7.548688f, 7.680073f},
    {7.520826f, 7.652452f},
    {7.493116f, 7.624981f},
    {7.465557f, 7.597657f},
    {7.43815f, 7.570478f},
    {7.410892f, 7.543445f},
    {7.383783f, 7.516554f},
    {7.356821f, 7.489807f},
    {7.330003f, 7.463199f},
    {7.303329f, 7.436732f},
    {7.276797f, 7.4104f},
    {7.250408f, 7.384205f},
    {7.224157f, 7.358149f},
    {7.198045f, 7.332224f},
    {7.172071f, 7.306433f},
    {7.146234f, 7.280774f},
    {7.120531f, 7.255244f},
    {7.094962f, 7.229845f},
    {7.069525f, 7.204571f},
    {7.044219f, 7.179425f},
    {7.019045f, 7.154406f},
    {6.993998f, 7.12951f},
    {6.969079f, 7.104738f},
    {6.944288f, 7.080088f},
    {6.919622f, 7.055559f},
    {6.895081f, 7.031149f},
    {6.870663f, 7.006859f},
    {6.846368f, 6.982687f},
    {6.822193f, 6.958631f},
    {6.798139f, 6.93469f},
    {6.774204f, 6.910865f},
    {6.750387f, 6.887153f},
    {6.726686f, 6.863554f},
    {6.703104f, 6.840066f},
    {6.679636f, 6.816689f},
    {6.656281f, 6.793423f},
    {6.63304f, 6.770264f},
    {6.609911f, 6.747213f},
    {6.586894f, 6.724268f},
    {6.563986f, 6.70143f},
    {6.541188f, 6.678697f},
    {6.518499f, 6.656066f},
    {6.495917f, 6.633541f},
    {6.473442f, 6.611116f},
    {6.451073f, 6.588793f},
    {6.428809f, 6.566571f},
    {6.406648f, 6.544448f},
    {6.38459f, 6.522424f},
    {6.362635f, 6.500498f},
    {6.340781f, 6.478669f},
    {6.319028f, 6.456935f},
    {6.297375f, 6.435299f},
    {6.27582f, 6.413757f},
    {6.254365f, 6.392308f},
    {6.233006f, 6.370952f},
    {6.211744f, 6.349688f},
    {6.190578f, 6.328517f},
    {6.169507f, 6.307434f},
    {6.14853f, 6.286443f},
    {6.127646f, 6.265541f},
    {6.106856f, 6.244728f},
    {6.086157f, 6.224003f},
    {6.06555f, 6.203363f},
    {6.045033f, 6.182811f},
    {6.024606f, 6.162345f},
    {6.004269f, 6.141963f},
    {5.984019f, 6.121666f},
    {5.963857f, 6.101452f},
    {5.943782f, 6.08132f},
    {5.923794f, 6.061271f},
    {5.903892f, 6.041305f},
    {5.884074f, 6.021419f},
    {5.864341f, 6.001612f},
    {5.844692f, 5.981887f},
    {5.825125f, 5.962239f},
    {5.805642f, 5.94267f},
    {5.78624f, 5.923179f},
    {5.766918f, 5.903765f},
    {5.747677f, 5.884427f},
    {5.728517f, 5.865166f},
    {5.709435f, 5.845981f},
    {5.690433f, 5.826869f},
    {5.671508f, 5.807832f},
    {5.652661f, 5.788868f},
    {5.633891f, 5.769978f},
    {5.615197f, 5.75116f},
    {5.596578f, 5.732413f},
    {5.578035f, 5.713738f},
    {5.559567f, 5.695135f},
    {5.541173f, 5.676601f},
    {5.522852f, 5.658136f},
    {5.504604f, 5.639742f},
    {5.486429f, 5.621417f},
    {5.468325f, 5.603158f},
    {5.450293f, 5.584968f},
    {5.432331f, 5.566845f},
    {5.41444f, 5.548789f},
    {5.396618f, 5.530798f},
    {5.378866f, 5.512874f},
    {5.361182f, 5.495015f},
    {5.343567f, 5.47722f},
    {5.326019f, 5.459489f},
    {5.308539f, 5.441821f},
    {5.291125f, 5.424218f},
    {5.273777f, 5.406678f},
    {5.256496f, 5.389198f},
    {5.239279f, 5.371782f},
    {5.222128f, 5.354427f},
    {5.20504f, 5.337133f},
    {5.188017f, 5.319899f},
    {5.171057f, 5.302725f},
    {5.15416f, 5.285612f},
    {5.137326f, 5.268557f},
    {5.120552f, 5.251562f},
    {5.103842f, 5.234623f},
    {5.087192f, 5.217744f},
    {5.070603f, 5.200922f},
    {5.054074f, 5.184157f},
    {5.037605f, 5.167449f},
    {5.021196f, 5.150797f},
    {5.004845f, 5.134202f},
    {4.988554f, 5.117661f},
    {4.97232f, 5.101176f},
    {4.956143f, 5.084746f},
    {4.940024f, 5.06837f},
    {4.923963f, 5.052048f},
    {4.907958f, 5.03578f},
    {4.892008f, 5.019565f},
    {4.876115f, 5.003403f},
    {4.860278f, 4.987293f},
    {4.844495f, 4.971235f},
    {4.828766f, 4.95523f},
    {4.813092f, 4.939276f},
    {4.797472f, 4.923372f},
    {4.781905f, 4.90752f},
    {4.766391f, 4.891718f},
    {4.75093f, 4.875967f},
    {4.735521f, 4.860265f},
    {4.720164f, 4.844612f},
    {4.704859f, 4.829008f},
    {4.689604f, 4.813453f},
    {4.674401f, 4.797947f},
    {4.659249f, 4.782488f},
    {4.644147f, 4.767077f},
    {4.629094f, 4.751714f},
    {4.614091f, 4.736399f},
    {4.599137f, 4.721128f},
    {4.584232f, 4.705907f},
    {4.569376f, 4.69073f},
    {4.554567f, 4.675599f},
    {4.539806f, 4.660513f},
    {4.525094f, 4.645474f},
    {4.510427f, 4.630479f},
    {4.495808f, 4.615529f},
    {4.481236f, 4.600624f},
    {4.466709f, 4.585763f},
    {4.452229f, 4.570944f},
    {4.437794f, 4.556171f},
    {4.423403f, 4.541439f},
    {4.409059f, 4.526752f},
    {4.394759f, 4.512107f},
    {4.380503f, 4.497504f},
    {4.366291f, 4.482943f},
    {4.352123f, 4.468426f},
    {4.337998f, 4.453948f},
    {4.323916f, 4.439512f},
    {4.309878f, 4.425119f},
    {4.295882f, 4.410765f},
    {4.281928f, 4.396452f},
    {4.268016f, 4.382181f},
    {4.254147f, 4.367947f},
    {4.240317f, 4.353755f},
    {4.226529f, 4.339602f},
    {4.212782f, 4.325489f},
    {4.199076f, 4.311414f},
    {4.18541f, 4.297379f},
    {4.171784f, 4.283382f},
    {4.158198f, 4.269423f},
    {4.144651f, 4.255503f},
    {4.131144f, 4.241621f},
    {4.117675f, 4.227777f},
    {4.104245f, 4.213968f},
    {4.090853f, 4.200199f},
    {4.0775f, 4.186466f},
    {4.064185f, 4.17277f},
    {4.050907f, 4.15911f},
    {4.037666f, 4.145487f},
    {4.024462f, 4.1319f},
    {4.011296f, 4.118348f},
    {3.998166f, 4.104834f},
    {3.985072f, 4.091352f},
    {3.972015f, 4.077909f},
    {3.958993f, 4.064499f},
    {3.946007f, 4.051125f},
    {3.933056f, 4.037784f},
    {3.920141f, 4.024479f},
    {3.90726f, 4.011207f},
    {3.894414f, 3.99797f},
    {3.881603f, 3.984766f},
    {3.868825f, 3.971597f},
    {3.856082f, 3.95846f},
    {3.843372f, 3.945358f},
    {3.830697f, 3.932288f},
    {3.818053f, 3.91925f},
    {3.805444f, 3.906246f},
    {3.792867f, 3.893273f},
    {3.780322f, 3.880334f},
    {3.76781f, 3.867427f}
};

#define ACC_ARRAY_NUM  		( 10 )
#define VELOCITY_ARRAY_NUM  (  7 )

const float acc_table[ACC_ARRAY_NUM]           = {0.06f,0.09f,0.1f,0.12f,0.13f,0.15f,0.2f,0.21f,0.24f,0.26f};
const float velocity_table[VELOCITY_ARRAY_NUM] = {0.1f,0.2f,0.3f,0.4f,0.5f,0.6f,0.7f};

const float torque_table[ACC_ARRAY_NUM][VELOCITY_ARRAY_NUM]=
{
		{60,60,50,50,50,50,50},
		{140,140,100,60,50,50,50},
		{140,140,120,80,60,60,60},
		{140,140,140,100,60,60,60},
		{140,140,140,120,80,60,60},
		{140,140,140,140,100,60,60},
		{140,140,140,140,120,100,80},
		{140,140,140,140,140,120,100},
		{140,140,140,140,140,140,120},
		{270,240,180,140,140,140,140}
};
#endif
