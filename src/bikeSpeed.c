#include <bikeSpeed.h>
#include <bikeSpeedConstant.h>
/* see http://www.kreuzotter.de/english/espeed.htm  */

double bikeSpeed(float P, float S)
{ 
	/* Temperature in deg. kelvin ! */
	float T=Tc+273.15;   
	/*slope in radian*/  
	float beta=atan(S/100); 
	/**/
	float CrVn=CrV*cos(beta);
	/* rolling friction */
	Frg=g*(mbike+mrider)*(Cr*cos(beta)+sin(beta));
	/* air density via barometric formula  */
	rho=rho0*(373/T)*pow(e,(-rho0*g*(Hnn/p0)));
	/* spped cubic function */
	a=2*(W+(CrVn/(CdA*rho)));
	b=pow(W,2)+((2*Frg)/(CdA*rho));
	c=-((2*P)/(Cm*CdA*rho));
	/* solve equation with gsl */
	roots = gsl_poly_solve_cubic(a,b,c,&x0,&x1,&x2);
	/* get the absolute speed in km/h. Why does the function return a negative value for negative slope ??  */
	kmh=abs(x0*3600/1000);
	return kmh;
}


