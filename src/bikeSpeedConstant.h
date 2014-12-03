/* see http://www.kreuzotter.de/english/espeed.htm  */
/* constant... */
float Frg;
float rho;
double a,b,c,x0,x1,x2 ;
int roots;
double kmh;
float power,P ;/* Power in W */
float slope,S ; /* slope in % */

const float W=0; /* wind speed */
const float Hnn=3500; /* Elevation above sea */
const float Tc=20;  /* external temperature influence air density */
const float mbike=12; /* mass of bike */
const float mrider=80; /* mass of rider */
const float CdA=0.5875; /*Effective Drag Area */
const float Cr=0.00330; /* Rolling resistance coefficient (between 0.0025 and 0.008) */
const float CrV=0.1; /* approximated to 0.1 */
const float Cm=1.03; /* between 1.03 and 1.09 */
const float rho0=1.225; /* air density at sea level, 0°C, kg/m3 */
const float p0=101325; /* air pressur at sea level, 0°C,Pa */
const float g=9.81; /* m/s2 */
const float e=2.71828;

double bikeSpeed(float,float);
double kmh;
float power ;/* Power in W */
float slope ; /* slope in % */

/*void bikeSpeed();*/
